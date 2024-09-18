/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/firestore/v1/bloom_filter.proto

#include "google/firestore/v1/bloom_filter.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace google {
namespace firestore {
namespace v1 {

inline constexpr BitSequence::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : bitmap_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        padding_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR BitSequence::BitSequence(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct BitSequenceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BitSequenceDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~BitSequenceDefaultTypeInternal() {}
  union {
    BitSequence _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BitSequenceDefaultTypeInternal _BitSequence_default_instance_;

inline constexpr BloomFilter::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        bits_{nullptr},
        hash_count_{0} {}

template <typename>
PROTOBUF_CONSTEXPR BloomFilter::BloomFilter(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct BloomFilterDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BloomFilterDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~BloomFilterDefaultTypeInternal() {}
  union {
    BloomFilter _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BloomFilterDefaultTypeInternal _BloomFilter_default_instance_;
}  // namespace v1
}  // namespace firestore
}  // namespace google
static ::_pb::Metadata file_level_metadata_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto = nullptr;
const ::uint32_t TableStruct_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::google::firestore::v1::BitSequence, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::google::firestore::v1::BitSequence, _impl_.bitmap_),
    PROTOBUF_FIELD_OFFSET(::google::firestore::v1::BitSequence, _impl_.padding_),
    PROTOBUF_FIELD_OFFSET(::google::firestore::v1::BloomFilter, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::google::firestore::v1::BloomFilter, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::google::firestore::v1::BloomFilter, _impl_.bits_),
    PROTOBUF_FIELD_OFFSET(::google::firestore::v1::BloomFilter, _impl_.hash_count_),
    0,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::google::firestore::v1::BitSequence)},
        {10, 20, -1, sizeof(::google::firestore::v1::BloomFilter)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::google::firestore::v1::_BitSequence_default_instance_._instance,
    &::google::firestore::v1::_BloomFilter_default_instance_._instance,
};
const char descriptor_table_protodef_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n&google/firestore/v1/bloom_filter.proto"
    "\022\023google.firestore.v1\".\n\013BitSequence\022\016\n\006"
    "bitmap\030\001 \001(\014\022\017\n\007padding\030\002 \001(\005\"Q\n\013BloomFi"
    "lter\022.\n\004bits\030\001 \001(\0132 .google.firestore.v1"
    ".BitSequence\022\022\n\nhash_count\030\002 \001(\005B\311\001\n\027com"
    ".google.firestore.v1B\020BloomFilterProtoP\001"
    "Z<google.golang.org/genproto/googleapis/"
    "firestore/v1;firestore\242\002\004GCFS\252\002\031Google.C"
    "loud.Firestore.V1\312\002\031Google\\Cloud\\Firesto"
    "re\\V1\352\002\034Google::Cloud::Firestore::V1b\006pr"
    "oto3"
};
static ::absl::once_flag descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto = {
    false,
    false,
    404,
    descriptor_table_protodef_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto,
    "google/firestore/v1/bloom_filter.proto",
    &descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto::offsets,
    file_level_metadata_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto,
    file_level_enum_descriptors_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto,
    file_level_service_descriptors_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto_getter() {
  return &descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto(&descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto);
namespace google {
namespace firestore {
namespace v1 {
// ===================================================================

class BitSequence::_Internal {
 public:
};

BitSequence::BitSequence(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.firestore.v1.BitSequence)
}
inline PROTOBUF_NDEBUG_INLINE BitSequence::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : bitmap_(arena, from.bitmap_),
        _cached_size_{0} {}

BitSequence::BitSequence(
    ::google::protobuf::Arena* arena,
    const BitSequence& from)
    : ::google::protobuf::Message(arena) {
  BitSequence* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.padding_ = from._impl_.padding_;

  // @@protoc_insertion_point(copy_constructor:google.firestore.v1.BitSequence)
}
inline PROTOBUF_NDEBUG_INLINE BitSequence::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : bitmap_(arena),
        _cached_size_{0} {}

inline void BitSequence::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.padding_ = {};
}
BitSequence::~BitSequence() {
  // @@protoc_insertion_point(destructor:google.firestore.v1.BitSequence)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void BitSequence::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.bitmap_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void BitSequence::Clear() {
// @@protoc_insertion_point(message_clear_start:google.firestore.v1.BitSequence)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.bitmap_.ClearToEmpty();
  _impl_.padding_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* BitSequence::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> BitSequence::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_BitSequence_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 padding = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(BitSequence, _impl_.padding_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(BitSequence, _impl_.padding_)}},
    // bytes bitmap = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(BitSequence, _impl_.bitmap_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bytes bitmap = 1;
    {PROTOBUF_FIELD_OFFSET(BitSequence, _impl_.bitmap_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // int32 padding = 2;
    {PROTOBUF_FIELD_OFFSET(BitSequence, _impl_.padding_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* BitSequence::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.firestore.v1.BitSequence)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bytes bitmap = 1;
  if (!this->_internal_bitmap().empty()) {
    const std::string& _s = this->_internal_bitmap();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  // int32 padding = 2;
  if (this->_internal_padding() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_padding(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.firestore.v1.BitSequence)
  return target;
}

::size_t BitSequence::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.firestore.v1.BitSequence)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes bitmap = 1;
  if (!this->_internal_bitmap().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_bitmap());
  }

  // int32 padding = 2;
  if (this->_internal_padding() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_padding());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData BitSequence::_class_data_ = {
    BitSequence::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* BitSequence::GetClassData() const {
  return &_class_data_;
}

void BitSequence::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<BitSequence*>(&to_msg);
  auto& from = static_cast<const BitSequence&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.firestore.v1.BitSequence)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_bitmap().empty()) {
    _this->_internal_set_bitmap(from._internal_bitmap());
  }
  if (from._internal_padding() != 0) {
    _this->_internal_set_padding(from._internal_padding());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void BitSequence::CopyFrom(const BitSequence& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.firestore.v1.BitSequence)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool BitSequence::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* BitSequence::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void BitSequence::InternalSwap(BitSequence* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.bitmap_, &other->_impl_.bitmap_, arena);
        swap(_impl_.padding_, other->_impl_.padding_);
}

::google::protobuf::Metadata BitSequence::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto_getter, &descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto_once,
      file_level_metadata_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto[0]);
}
// ===================================================================

class BloomFilter::_Internal {
 public:
  using HasBits = decltype(std::declval<BloomFilter>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(BloomFilter, _impl_._has_bits_);
  static const ::google::firestore::v1::BitSequence& bits(const BloomFilter* msg);
  static void set_has_bits(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::google::firestore::v1::BitSequence& BloomFilter::_Internal::bits(const BloomFilter* msg) {
  return *msg->_impl_.bits_;
}
BloomFilter::BloomFilter(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.firestore.v1.BloomFilter)
}
inline PROTOBUF_NDEBUG_INLINE BloomFilter::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

BloomFilter::BloomFilter(
    ::google::protobuf::Arena* arena,
    const BloomFilter& from)
    : ::google::protobuf::Message(arena) {
  BloomFilter* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.bits_ = (cached_has_bits & 0x00000001u)
                ? CreateMaybeMessage<::google::firestore::v1::BitSequence>(arena, *from._impl_.bits_)
                : nullptr;
  _impl_.hash_count_ = from._impl_.hash_count_;

  // @@protoc_insertion_point(copy_constructor:google.firestore.v1.BloomFilter)
}
inline PROTOBUF_NDEBUG_INLINE BloomFilter::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void BloomFilter::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, bits_),
           0,
           offsetof(Impl_, hash_count_) -
               offsetof(Impl_, bits_) +
               sizeof(Impl_::hash_count_));
}
BloomFilter::~BloomFilter() {
  // @@protoc_insertion_point(destructor:google.firestore.v1.BloomFilter)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void BloomFilter::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  delete _impl_.bits_;
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void BloomFilter::Clear() {
// @@protoc_insertion_point(message_clear_start:google.firestore.v1.BloomFilter)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.bits_ != nullptr);
    _impl_.bits_->Clear();
  }
  _impl_.hash_count_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* BloomFilter::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 1, 0, 2> BloomFilter::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(BloomFilter, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_BloomFilter_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 hash_count = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(BloomFilter, _impl_.hash_count_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(BloomFilter, _impl_.hash_count_)}},
    // .google.firestore.v1.BitSequence bits = 1;
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(BloomFilter, _impl_.bits_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .google.firestore.v1.BitSequence bits = 1;
    {PROTOBUF_FIELD_OFFSET(BloomFilter, _impl_.bits_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // int32 hash_count = 2;
    {PROTOBUF_FIELD_OFFSET(BloomFilter, _impl_.hash_count_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }}, {{
    {::_pbi::TcParser::GetTable<::google::firestore::v1::BitSequence>()},
  }}, {{
  }},
};

::uint8_t* BloomFilter::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.firestore.v1.BloomFilter)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .google.firestore.v1.BitSequence bits = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        1, _Internal::bits(this),
        _Internal::bits(this).GetCachedSize(), target, stream);
  }

  // int32 hash_count = 2;
  if (this->_internal_hash_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_hash_count(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.firestore.v1.BloomFilter)
  return target;
}

::size_t BloomFilter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.firestore.v1.BloomFilter)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .google.firestore.v1.BitSequence bits = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size +=
        1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.bits_);
  }

  // int32 hash_count = 2;
  if (this->_internal_hash_count() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_hash_count());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData BloomFilter::_class_data_ = {
    BloomFilter::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* BloomFilter::GetClassData() const {
  return &_class_data_;
}

void BloomFilter::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<BloomFilter*>(&to_msg);
  auto& from = static_cast<const BloomFilter&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.firestore.v1.BloomFilter)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_bits()->::google::firestore::v1::BitSequence::MergeFrom(
        from._internal_bits());
  }
  if (from._internal_hash_count() != 0) {
    _this->_internal_set_hash_count(from._internal_hash_count());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void BloomFilter::CopyFrom(const BloomFilter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.firestore.v1.BloomFilter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool BloomFilter::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* BloomFilter::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void BloomFilter::InternalSwap(BloomFilter* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BloomFilter, _impl_.hash_count_)
      + sizeof(BloomFilter::_impl_.hash_count_)
      - PROTOBUF_FIELD_OFFSET(BloomFilter, _impl_.bits_)>(
          reinterpret_cast<char*>(&_impl_.bits_),
          reinterpret_cast<char*>(&other->_impl_.bits_));
}

::google::protobuf::Metadata BloomFilter::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto_getter, &descriptor_table_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto_once,
      file_level_metadata_google_2ffirestore_2fv1_2fbloom_5ffilter_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace firestore
}  // namespace google
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"