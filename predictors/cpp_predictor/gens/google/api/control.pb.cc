// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/control.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/control.pb.h"

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
class ControlDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Control>
     _instance;
} _Control_default_instance_;

namespace protobuf_google_2fapi_2fcontrol_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Control, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Control, environment_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(Control)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Control_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/api/control.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
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
  _Control_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Control_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\030google/api/control.proto\022\ngoogle.api\"\036"
      "\n\007Control\022\023\n\013environment\030\001 \001(\tBn\n\016com.go"
      "ogle.apiB\014ControlProtoP\001ZEgoogle.golang."
      "org/genproto/googleapis/api/serviceconfi"
      "g;serviceconfig\242\002\004GAPIb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 190);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/control.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_google_2fapi_2fcontrol_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Control::kEnvironmentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Control::Control()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2fcontrol_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Control)
}
Control::Control(const Control& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  environment_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.environment().size() > 0) {
    environment_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.environment_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.Control)
}

void Control::SharedCtor() {
  environment_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Control::~Control() {
  // @@protoc_insertion_point(destructor:google.api.Control)
  SharedDtor();
}

void Control::SharedDtor() {
  environment_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Control::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Control::descriptor() {
  protobuf_google_2fapi_2fcontrol_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fcontrol_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Control& Control::default_instance() {
  protobuf_google_2fapi_2fcontrol_2eproto::InitDefaults();
  return *internal_default_instance();
}

Control* Control::New(::google::protobuf::Arena* arena) const {
  Control* n = new Control;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Control::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Control)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  environment_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Control::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.Control)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string environment = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_environment()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->environment().data(), static_cast<int>(this->environment().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Control.environment"));
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
  // @@protoc_insertion_point(parse_success:google.api.Control)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.Control)
  return false;
#undef DO_
}

void Control::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.Control)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string environment = 1;
  if (this->environment().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->environment().data(), static_cast<int>(this->environment().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Control.environment");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->environment(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.api.Control)
}

::google::protobuf::uint8* Control::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Control)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string environment = 1;
  if (this->environment().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->environment().data(), static_cast<int>(this->environment().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Control.environment");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->environment(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Control)
  return target;
}

size_t Control::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Control)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string environment = 1;
  if (this->environment().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->environment());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Control::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Control)
  GOOGLE_DCHECK_NE(&from, this);
  const Control* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Control>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Control)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Control)
    MergeFrom(*source);
  }
}

void Control::MergeFrom(const Control& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Control)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.environment().size() > 0) {

    environment_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.environment_);
  }
}

void Control::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Control)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Control::CopyFrom(const Control& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Control)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Control::IsInitialized() const {
  return true;
}

void Control::Swap(Control* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Control::InternalSwap(Control* other) {
  using std::swap;
  environment_.Swap(&other->environment_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Control::GetMetadata() const {
  protobuf_google_2fapi_2fcontrol_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fcontrol_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Control

// string environment = 1;
void Control::clear_environment() {
  environment_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Control::environment() const {
  // @@protoc_insertion_point(field_get:google.api.Control.environment)
  return environment_.GetNoArena();
}
void Control::set_environment(const ::std::string& value) {
  
  environment_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Control.environment)
}
#if LANG_CXX11
void Control::set_environment(::std::string&& value) {
  
  environment_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Control.environment)
}
#endif
void Control::set_environment(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  environment_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Control.environment)
}
void Control::set_environment(const char* value, size_t size) {
  
  environment_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Control.environment)
}
::std::string* Control::mutable_environment() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Control.environment)
  return environment_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Control::release_environment() {
  // @@protoc_insertion_point(field_release:google.api.Control.environment)
  
  return environment_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Control::set_allocated_environment(::std::string* environment) {
  if (environment != NULL) {
    
  } else {
    
  }
  environment_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), environment);
  // @@protoc_insertion_point(field_set_allocated:google.api.Control.environment)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
