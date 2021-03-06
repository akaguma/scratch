// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/label.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/label.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace api {
class LabelDescriptorDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<LabelDescriptor>
     _instance;
} _LabelDescriptor_default_instance_;

namespace protobuf_google_2fapi_2flabel_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LabelDescriptor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LabelDescriptor, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LabelDescriptor, value_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LabelDescriptor, description_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(LabelDescriptor)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LabelDescriptor_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/api/label.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _LabelDescriptor_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_LabelDescriptor_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026google/api/label.proto\022\ngoogle.api\"\234\001\n"
      "\017LabelDescriptor\022\013\n\003key\030\001 \001(\t\0229\n\nvalue_t"
      "ype\030\002 \001(\0162%.google.api.LabelDescriptor.V"
      "alueType\022\023\n\013description\030\003 \001(\t\",\n\tValueTy"
      "pe\022\n\n\006STRING\020\000\022\010\n\004BOOL\020\001\022\t\n\005INT64\020\002B_\n\016c"
      "om.google.apiB\nLabelProtoP\001Z5google.gola"
      "ng.org/genproto/googleapis/api/label;lab"
      "el\370\001\001\242\002\004GAPIb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 300);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/label.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_google_2fapi_2flabel_2eproto

const ::google::protobuf::EnumDescriptor* LabelDescriptor_ValueType_descriptor() {
  protobuf_google_2fapi_2flabel_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flabel_2eproto::file_level_enum_descriptors[0];
}
bool LabelDescriptor_ValueType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const LabelDescriptor_ValueType LabelDescriptor::STRING;
const LabelDescriptor_ValueType LabelDescriptor::BOOL;
const LabelDescriptor_ValueType LabelDescriptor::INT64;
const LabelDescriptor_ValueType LabelDescriptor::ValueType_MIN;
const LabelDescriptor_ValueType LabelDescriptor::ValueType_MAX;
const int LabelDescriptor::ValueType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LabelDescriptor::kKeyFieldNumber;
const int LabelDescriptor::kValueTypeFieldNumber;
const int LabelDescriptor::kDescriptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LabelDescriptor::LabelDescriptor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2flabel_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.LabelDescriptor)
}
LabelDescriptor::LabelDescriptor(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  protobuf_google_2fapi_2flabel_2eproto::InitDefaults();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.LabelDescriptor)
}
LabelDescriptor::LabelDescriptor(const LabelDescriptor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.key().size() > 0) {
    key_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key(),
      GetArenaNoVirtual());
  }
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.description().size() > 0) {
    description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description(),
      GetArenaNoVirtual());
  }
  value_type_ = from.value_type_;
  // @@protoc_insertion_point(copy_constructor:google.api.LabelDescriptor)
}

void LabelDescriptor::SharedCtor() {
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_type_ = 0;
  _cached_size_ = 0;
}

LabelDescriptor::~LabelDescriptor() {
  // @@protoc_insertion_point(destructor:google.api.LabelDescriptor)
  SharedDtor();
}

void LabelDescriptor::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  GOOGLE_DCHECK(arena == NULL);
  if (arena != NULL) {
    return;
  }

  key_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  description_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
}

void LabelDescriptor::ArenaDtor(void* object) {
  LabelDescriptor* _this = reinterpret_cast< LabelDescriptor* >(object);
  (void)_this;
}
void LabelDescriptor::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void LabelDescriptor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LabelDescriptor::descriptor() {
  protobuf_google_2fapi_2flabel_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flabel_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LabelDescriptor& LabelDescriptor::default_instance() {
  protobuf_google_2fapi_2flabel_2eproto::InitDefaults();
  return *internal_default_instance();
}

LabelDescriptor* LabelDescriptor::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<LabelDescriptor>(arena);
}

void LabelDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.LabelDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  description_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  value_type_ = 0;
  _internal_metadata_.Clear();
}

bool LabelDescriptor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.LabelDescriptor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->key().data(), static_cast<int>(this->key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.LabelDescriptor.key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.api.LabelDescriptor.ValueType value_type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_value_type(static_cast< ::google::api::LabelDescriptor_ValueType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string description = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), static_cast<int>(this->description().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.LabelDescriptor.description"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.api.LabelDescriptor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.LabelDescriptor)
  return false;
#undef DO_
}

void LabelDescriptor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.LabelDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), static_cast<int>(this->key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LabelDescriptor.key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // .google.api.LabelDescriptor.ValueType value_type = 2;
  if (this->value_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->value_type(), output);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LabelDescriptor.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->description(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.api.LabelDescriptor)
}

::google::protobuf::uint8* LabelDescriptor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.LabelDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), static_cast<int>(this->key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LabelDescriptor.key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // .google.api.LabelDescriptor.ValueType value_type = 2;
  if (this->value_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->value_type(), target);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LabelDescriptor.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->description(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.LabelDescriptor)
  return target;
}

size_t LabelDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.LabelDescriptor)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->key());
  }

  // string description = 3;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  // .google.api.LabelDescriptor.ValueType value_type = 2;
  if (this->value_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->value_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LabelDescriptor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.LabelDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  const LabelDescriptor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LabelDescriptor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.LabelDescriptor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.LabelDescriptor)
    MergeFrom(*source);
  }
}

void LabelDescriptor::MergeFrom(const LabelDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.LabelDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.key().size() > 0) {
    set_key(from.key());
  }
  if (from.description().size() > 0) {
    set_description(from.description());
  }
  if (from.value_type() != 0) {
    set_value_type(from.value_type());
  }
}

void LabelDescriptor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.LabelDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LabelDescriptor::CopyFrom(const LabelDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.LabelDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LabelDescriptor::IsInitialized() const {
  return true;
}

void LabelDescriptor::Swap(LabelDescriptor* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    LabelDescriptor* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void LabelDescriptor::UnsafeArenaSwap(LabelDescriptor* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void LabelDescriptor::InternalSwap(LabelDescriptor* other) {
  using std::swap;
  key_.Swap(&other->key_);
  description_.Swap(&other->description_);
  swap(value_type_, other->value_type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LabelDescriptor::GetMetadata() const {
  protobuf_google_2fapi_2flabel_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flabel_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LabelDescriptor

// string key = 1;
void LabelDescriptor::clear_key() {
  key_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& LabelDescriptor::key() const {
  // @@protoc_insertion_point(field_get:google.api.LabelDescriptor.key)
  return key_.Get();
}
void LabelDescriptor::set_key(const ::std::string& value) {
  
  key_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.LabelDescriptor.key)
}
#if LANG_CXX11
void LabelDescriptor::set_key(::std::string&& value) {
  
  key_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.LabelDescriptor.key)
}
#endif
void LabelDescriptor::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.LabelDescriptor.key)
}
void LabelDescriptor::set_key(const char* value,
    size_t size) {
  
  key_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.LabelDescriptor.key)
}
::std::string* LabelDescriptor::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LabelDescriptor.key)
  return key_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* LabelDescriptor::release_key() {
  // @@protoc_insertion_point(field_release:google.api.LabelDescriptor.key)
  
  return key_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* LabelDescriptor::unsafe_arena_release_key() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.LabelDescriptor.key)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return key_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void LabelDescriptor::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.LabelDescriptor.key)
}
void LabelDescriptor::unsafe_arena_set_allocated_key(
    ::std::string* key) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (key != NULL) {
    
  } else {
    
  }
  key_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      key, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.LabelDescriptor.key)
}

// .google.api.LabelDescriptor.ValueType value_type = 2;
void LabelDescriptor::clear_value_type() {
  value_type_ = 0;
}
::google::api::LabelDescriptor_ValueType LabelDescriptor::value_type() const {
  // @@protoc_insertion_point(field_get:google.api.LabelDescriptor.value_type)
  return static_cast< ::google::api::LabelDescriptor_ValueType >(value_type_);
}
void LabelDescriptor::set_value_type(::google::api::LabelDescriptor_ValueType value) {
  
  value_type_ = value;
  // @@protoc_insertion_point(field_set:google.api.LabelDescriptor.value_type)
}

// string description = 3;
void LabelDescriptor::clear_description() {
  description_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& LabelDescriptor::description() const {
  // @@protoc_insertion_point(field_get:google.api.LabelDescriptor.description)
  return description_.Get();
}
void LabelDescriptor::set_description(const ::std::string& value) {
  
  description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.LabelDescriptor.description)
}
#if LANG_CXX11
void LabelDescriptor::set_description(::std::string&& value) {
  
  description_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.LabelDescriptor.description)
}
#endif
void LabelDescriptor::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.LabelDescriptor.description)
}
void LabelDescriptor::set_description(const char* value,
    size_t size) {
  
  description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.LabelDescriptor.description)
}
::std::string* LabelDescriptor::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LabelDescriptor.description)
  return description_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* LabelDescriptor::release_description() {
  // @@protoc_insertion_point(field_release:google.api.LabelDescriptor.description)
  
  return description_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* LabelDescriptor::unsafe_arena_release_description() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.LabelDescriptor.description)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return description_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void LabelDescriptor::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.LabelDescriptor.description)
}
void LabelDescriptor::unsafe_arena_set_allocated_description(
    ::std::string* description) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (description != NULL) {
    
  } else {
    
  }
  description_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      description, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.LabelDescriptor.description)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
