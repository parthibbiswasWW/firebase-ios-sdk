// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

import Foundation
import XCTest

@testable import FirebaseVertexAI

@available(iOS 15.0, macOS 12.0, macCatalyst 15.0, tvOS 15.0, watchOS 8.0, *)
final class ChatTests: XCTestCase {
  var urlSession: URLSession!

  override func setUp() {
    let configuration = URLSessionConfiguration.default
    configuration.protocolClasses = [MockURLProtocol.self]
    urlSession = URLSession(configuration: configuration)
  }

  override func tearDown() {
    MockURLProtocol.requestHandler = nil
  }

  func testMergingText() async throws {
    #if SWIFT_PACKAGE
      let bundle = Bundle.module
    #else // SWIFT_PACKAGE
      let bundle = Bundle(for: Self.self)
    #endif // SWIFT_PACKAGE
    let fileURL = try XCTUnwrap(bundle.url(
      forResource: "streaming-success-basic-reply-parts",
      withExtension: "txt"
    ))

    // Skip tests using MockURLProtocol on watchOS; unsupported in watchOS 2 and later, see
    // https://developer.apple.com/documentation/foundation/urlprotocol for details.
    #if os(watchOS)
      throw XCTSkip("Custom URL protocols are unsupported in watchOS 2 and later.")
    #endif // os(watchOS)
    MockURLProtocol.requestHandler = { request in
      let response = HTTPURLResponse(
        url: request.url!,
        statusCode: 200,
        httpVersion: nil,
        headerFields: nil
      )!
      return (response, fileURL.lines)
    }

    let model = GenerativeModel(
      name: "my-model",
      projectID: "my-project-id",
      apiKey: "API_KEY",
      tools: nil,
      requestOptions: RequestOptions(),
      appCheck: nil,
      auth: nil,
      urlSession: urlSession
    )
    let chat = Chat(model: model, history: [])
    let input = "Test input"
    let stream = try await chat.sendMessageStream(input)

    // Ensure the values are parsed correctly
    for try await value in stream {
      XCTAssertNotNil(value.text)
    }

    let history = await chat.history
    XCTAssertEqual(history.count, 2)
    XCTAssertEqual(history[0].parts[0].text, input)

    let finalText = "1 2 3 4 5 6 7 8"
    let assembledExpectation = ModelContent(role: "model", parts: finalText)
    XCTAssertEqual(history[0].parts[0].text, input)
    XCTAssertEqual(history[1], assembledExpectation)
  }
}
