// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/logging.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/logging.pb.h"

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
class Logging_LoggingDestinationDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Logging_LoggingDestination>
     _instance;
} _Logging_LoggingDestination_default_instance_;
class LoggingDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Logging>
     _instance;
} _Logging_default_instance_;

namespace protobuf_google_2fapi_2flogging_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

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
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Logging_LoggingDestination, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Logging_LoggingDestination, monitored_resource_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Logging_LoggingDestination, logs_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Logging, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Logging, producer_destinations_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Logging, consumer_destinations_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(Logging_LoggingDestination)},
  { 7, -1, sizeof(Logging)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Logging_LoggingDestination_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Logging_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/api/logging.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  _Logging_LoggingDestination_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Logging_LoggingDestination_default_instance_);_Logging_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Logging_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\030google/api/logging.proto\022\ngoogle.api\032\034"
      "google/api/annotations.proto\"\327\001\n\007Logging"
      "\022E\n\025producer_destinations\030\001 \003(\0132&.google"
      ".api.Logging.LoggingDestination\022E\n\025consu"
      "mer_destinations\030\002 \003(\0132&.google.api.Logg"
      "ing.LoggingDestination\032>\n\022LoggingDestina"
      "tion\022\032\n\022monitored_resource\030\003 \001(\t\022\014\n\004logs"
      "\030\001 \003(\tBn\n\016com.google.apiB\014LoggingProtoP\001"
      "ZEgoogle.golang.org/genproto/googleapis/"
      "api/serviceconfig;serviceconfig\242\002\004GAPIb\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 406);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/logging.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fapi_2flogging_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Logging_LoggingDestination::kMonitoredResourceFieldNumber;
const int Logging_LoggingDestination::kLogsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Logging_LoggingDestination::Logging_LoggingDestination()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2flogging_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Logging.LoggingDestination)
}
Logging_LoggingDestination::Logging_LoggingDestination(const Logging_LoggingDestination& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      logs_(from.logs_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  monitored_resource_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.monitored_resource().size() > 0) {
    monitored_resource_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.monitored_resource_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.Logging.LoggingDestination)
}

void Logging_LoggingDestination::SharedCtor() {
  monitored_resource_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Logging_LoggingDestination::~Logging_LoggingDestination() {
  // @@protoc_insertion_point(destructor:google.api.Logging.LoggingDestination)
  SharedDtor();
}

void Logging_LoggingDestination::SharedDtor() {
  monitored_resource_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Logging_LoggingDestination::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Logging_LoggingDestination::descriptor() {
  protobuf_google_2fapi_2flogging_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flogging_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Logging_LoggingDestination& Logging_LoggingDestination::default_instance() {
  protobuf_google_2fapi_2flogging_2eproto::InitDefaults();
  return *internal_default_instance();
}

Logging_LoggingDestination* Logging_LoggingDestination::New(::google::protobuf::Arena* arena) const {
  Logging_LoggingDestination* n = new Logging_LoggingDestination;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Logging_LoggingDestination::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Logging.LoggingDestination)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  logs_.Clear();
  monitored_resource_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Logging_LoggingDestination::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.Logging.LoggingDestination)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string logs = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_logs()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->logs(this->logs_size() - 1).data(),
            static_cast<int>(this->logs(this->logs_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Logging.LoggingDestination.logs"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string monitored_resource = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_monitored_resource()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->monitored_resource().data(), static_cast<int>(this->monitored_resource().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Logging.LoggingDestination.monitored_resource"));
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
  // @@protoc_insertion_point(parse_success:google.api.Logging.LoggingDestination)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.Logging.LoggingDestination)
  return false;
#undef DO_
}

void Logging_LoggingDestination::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.Logging.LoggingDestination)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string logs = 1;
  for (int i = 0, n = this->logs_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->logs(i).data(), static_cast<int>(this->logs(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Logging.LoggingDestination.logs");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->logs(i), output);
  }

  // string monitored_resource = 3;
  if (this->monitored_resource().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->monitored_resource().data(), static_cast<int>(this->monitored_resource().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Logging.LoggingDestination.monitored_resource");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->monitored_resource(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.api.Logging.LoggingDestination)
}

::google::protobuf::uint8* Logging_LoggingDestination::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Logging.LoggingDestination)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string logs = 1;
  for (int i = 0, n = this->logs_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->logs(i).data(), static_cast<int>(this->logs(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Logging.LoggingDestination.logs");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->logs(i), target);
  }

  // string monitored_resource = 3;
  if (this->monitored_resource().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->monitored_resource().data(), static_cast<int>(this->monitored_resource().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Logging.LoggingDestination.monitored_resource");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->monitored_resource(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Logging.LoggingDestination)
  return target;
}

size_t Logging_LoggingDestination::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Logging.LoggingDestination)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string logs = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->logs_size());
  for (int i = 0, n = this->logs_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->logs(i));
  }

  // string monitored_resource = 3;
  if (this->monitored_resource().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->monitored_resource());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Logging_LoggingDestination::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Logging.LoggingDestination)
  GOOGLE_DCHECK_NE(&from, this);
  const Logging_LoggingDestination* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Logging_LoggingDestination>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Logging.LoggingDestination)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Logging.LoggingDestination)
    MergeFrom(*source);
  }
}

void Logging_LoggingDestination::MergeFrom(const Logging_LoggingDestination& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Logging.LoggingDestination)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  logs_.MergeFrom(from.logs_);
  if (from.monitored_resource().size() > 0) {

    monitored_resource_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.monitored_resource_);
  }
}

void Logging_LoggingDestination::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Logging.LoggingDestination)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Logging_LoggingDestination::CopyFrom(const Logging_LoggingDestination& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Logging.LoggingDestination)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Logging_LoggingDestination::IsInitialized() const {
  return true;
}

void Logging_LoggingDestination::Swap(Logging_LoggingDestination* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Logging_LoggingDestination::InternalSwap(Logging_LoggingDestination* other) {
  using std::swap;
  logs_.InternalSwap(&other->logs_);
  monitored_resource_.Swap(&other->monitored_resource_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Logging_LoggingDestination::GetMetadata() const {
  protobuf_google_2fapi_2flogging_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flogging_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Logging_LoggingDestination

// string monitored_resource = 3;
void Logging_LoggingDestination::clear_monitored_resource() {
  monitored_resource_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Logging_LoggingDestination::monitored_resource() const {
  // @@protoc_insertion_point(field_get:google.api.Logging.LoggingDestination.monitored_resource)
  return monitored_resource_.GetNoArena();
}
void Logging_LoggingDestination::set_monitored_resource(const ::std::string& value) {
  
  monitored_resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Logging.LoggingDestination.monitored_resource)
}
#if LANG_CXX11
void Logging_LoggingDestination::set_monitored_resource(::std::string&& value) {
  
  monitored_resource_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Logging.LoggingDestination.monitored_resource)
}
#endif
void Logging_LoggingDestination::set_monitored_resource(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  monitored_resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Logging.LoggingDestination.monitored_resource)
}
void Logging_LoggingDestination::set_monitored_resource(const char* value, size_t size) {
  
  monitored_resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Logging.LoggingDestination.monitored_resource)
}
::std::string* Logging_LoggingDestination::mutable_monitored_resource() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Logging.LoggingDestination.monitored_resource)
  return monitored_resource_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Logging_LoggingDestination::release_monitored_resource() {
  // @@protoc_insertion_point(field_release:google.api.Logging.LoggingDestination.monitored_resource)
  
  return monitored_resource_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Logging_LoggingDestination::set_allocated_monitored_resource(::std::string* monitored_resource) {
  if (monitored_resource != NULL) {
    
  } else {
    
  }
  monitored_resource_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), monitored_resource);
  // @@protoc_insertion_point(field_set_allocated:google.api.Logging.LoggingDestination.monitored_resource)
}

// repeated string logs = 1;
int Logging_LoggingDestination::logs_size() const {
  return logs_.size();
}
void Logging_LoggingDestination::clear_logs() {
  logs_.Clear();
}
const ::std::string& Logging_LoggingDestination::logs(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Logging.LoggingDestination.logs)
  return logs_.Get(index);
}
::std::string* Logging_LoggingDestination::mutable_logs(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Logging.LoggingDestination.logs)
  return logs_.Mutable(index);
}
void Logging_LoggingDestination::set_logs(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Logging.LoggingDestination.logs)
  logs_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void Logging_LoggingDestination::set_logs(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Logging.LoggingDestination.logs)
  logs_.Mutable(index)->assign(std::move(value));
}
#endif
void Logging_LoggingDestination::set_logs(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  logs_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Logging.LoggingDestination.logs)
}
void Logging_LoggingDestination::set_logs(int index, const char* value, size_t size) {
  logs_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Logging.LoggingDestination.logs)
}
::std::string* Logging_LoggingDestination::add_logs() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Logging.LoggingDestination.logs)
  return logs_.Add();
}
void Logging_LoggingDestination::add_logs(const ::std::string& value) {
  logs_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Logging.LoggingDestination.logs)
}
#if LANG_CXX11
void Logging_LoggingDestination::add_logs(::std::string&& value) {
  logs_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Logging.LoggingDestination.logs)
}
#endif
void Logging_LoggingDestination::add_logs(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  logs_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Logging.LoggingDestination.logs)
}
void Logging_LoggingDestination::add_logs(const char* value, size_t size) {
  logs_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Logging.LoggingDestination.logs)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Logging_LoggingDestination::logs() const {
  // @@protoc_insertion_point(field_list:google.api.Logging.LoggingDestination.logs)
  return logs_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Logging_LoggingDestination::mutable_logs() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Logging.LoggingDestination.logs)
  return &logs_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Logging::kProducerDestinationsFieldNumber;
const int Logging::kConsumerDestinationsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Logging::Logging()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2flogging_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Logging)
}
Logging::Logging(const Logging& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      producer_destinations_(from.producer_destinations_),
      consumer_destinations_(from.consumer_destinations_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.Logging)
}

void Logging::SharedCtor() {
  _cached_size_ = 0;
}

Logging::~Logging() {
  // @@protoc_insertion_point(destructor:google.api.Logging)
  SharedDtor();
}

void Logging::SharedDtor() {
}

void Logging::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Logging::descriptor() {
  protobuf_google_2fapi_2flogging_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flogging_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Logging& Logging::default_instance() {
  protobuf_google_2fapi_2flogging_2eproto::InitDefaults();
  return *internal_default_instance();
}

Logging* Logging::New(::google::protobuf::Arena* arena) const {
  Logging* n = new Logging;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Logging::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Logging)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  producer_destinations_.Clear();
  consumer_destinations_.Clear();
  _internal_metadata_.Clear();
}

bool Logging::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.Logging)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.api.Logging.LoggingDestination producer_destinations = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_producer_destinations()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .google.api.Logging.LoggingDestination consumer_destinations = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_consumer_destinations()));
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
  // @@protoc_insertion_point(parse_success:google.api.Logging)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.Logging)
  return false;
#undef DO_
}

void Logging::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.Logging)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.Logging.LoggingDestination producer_destinations = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->producer_destinations_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->producer_destinations(static_cast<int>(i)), output);
  }

  // repeated .google.api.Logging.LoggingDestination consumer_destinations = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->consumer_destinations_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->consumer_destinations(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.api.Logging)
}

::google::protobuf::uint8* Logging::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Logging)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.Logging.LoggingDestination producer_destinations = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->producer_destinations_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->producer_destinations(static_cast<int>(i)), deterministic, target);
  }

  // repeated .google.api.Logging.LoggingDestination consumer_destinations = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->consumer_destinations_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->consumer_destinations(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Logging)
  return target;
}

size_t Logging::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Logging)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .google.api.Logging.LoggingDestination producer_destinations = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->producer_destinations_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->producer_destinations(static_cast<int>(i)));
    }
  }

  // repeated .google.api.Logging.LoggingDestination consumer_destinations = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->consumer_destinations_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->consumer_destinations(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Logging::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Logging)
  GOOGLE_DCHECK_NE(&from, this);
  const Logging* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Logging>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Logging)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Logging)
    MergeFrom(*source);
  }
}

void Logging::MergeFrom(const Logging& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Logging)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  producer_destinations_.MergeFrom(from.producer_destinations_);
  consumer_destinations_.MergeFrom(from.consumer_destinations_);
}

void Logging::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Logging)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Logging::CopyFrom(const Logging& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Logging)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Logging::IsInitialized() const {
  return true;
}

void Logging::Swap(Logging* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Logging::InternalSwap(Logging* other) {
  using std::swap;
  producer_destinations_.InternalSwap(&other->producer_destinations_);
  consumer_destinations_.InternalSwap(&other->consumer_destinations_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Logging::GetMetadata() const {
  protobuf_google_2fapi_2flogging_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flogging_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Logging

// repeated .google.api.Logging.LoggingDestination producer_destinations = 1;
int Logging::producer_destinations_size() const {
  return producer_destinations_.size();
}
void Logging::clear_producer_destinations() {
  producer_destinations_.Clear();
}
const ::google::api::Logging_LoggingDestination& Logging::producer_destinations(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Logging.producer_destinations)
  return producer_destinations_.Get(index);
}
::google::api::Logging_LoggingDestination* Logging::mutable_producer_destinations(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Logging.producer_destinations)
  return producer_destinations_.Mutable(index);
}
::google::api::Logging_LoggingDestination* Logging::add_producer_destinations() {
  // @@protoc_insertion_point(field_add:google.api.Logging.producer_destinations)
  return producer_destinations_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::api::Logging_LoggingDestination >*
Logging::mutable_producer_destinations() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Logging.producer_destinations)
  return &producer_destinations_;
}
const ::google::protobuf::RepeatedPtrField< ::google::api::Logging_LoggingDestination >&
Logging::producer_destinations() const {
  // @@protoc_insertion_point(field_list:google.api.Logging.producer_destinations)
  return producer_destinations_;
}

// repeated .google.api.Logging.LoggingDestination consumer_destinations = 2;
int Logging::consumer_destinations_size() const {
  return consumer_destinations_.size();
}
void Logging::clear_consumer_destinations() {
  consumer_destinations_.Clear();
}
const ::google::api::Logging_LoggingDestination& Logging::consumer_destinations(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Logging.consumer_destinations)
  return consumer_destinations_.Get(index);
}
::google::api::Logging_LoggingDestination* Logging::mutable_consumer_destinations(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Logging.consumer_destinations)
  return consumer_destinations_.Mutable(index);
}
::google::api::Logging_LoggingDestination* Logging::add_consumer_destinations() {
  // @@protoc_insertion_point(field_add:google.api.Logging.consumer_destinations)
  return consumer_destinations_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::api::Logging_LoggingDestination >*
Logging::mutable_consumer_destinations() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Logging.consumer_destinations)
  return &consumer_destinations_;
}
const ::google::protobuf::RepeatedPtrField< ::google::api::Logging_LoggingDestination >&
Logging::consumer_destinations() const {
  // @@protoc_insertion_point(field_list:google.api.Logging.consumer_destinations)
  return consumer_destinations_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
