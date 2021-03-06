// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/endpoint.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/endpoint.pb.h"

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
class EndpointDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Endpoint>
     _instance;
} _Endpoint_default_instance_;

namespace protobuf_google_2fapi_2fendpoint_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, aliases_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, apis_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, features_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, target_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, allow_cors_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(Endpoint)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Endpoint_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/api/endpoint.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  _Endpoint_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Endpoint_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\031google/api/endpoint.proto\022\ngoogle.api\032"
      "\034google/api/annotations.proto\"m\n\010Endpoin"
      "t\022\014\n\004name\030\001 \001(\t\022\017\n\007aliases\030\002 \003(\t\022\014\n\004apis"
      "\030\003 \003(\t\022\020\n\010features\030\004 \003(\t\022\016\n\006target\030e \001(\t"
      "\022\022\n\nallow_cors\030\005 \001(\010Bo\n\016com.google.apiB\r"
      "EndpointProtoP\001ZEgoogle.golang.org/genpr"
      "oto/googleapis/api/serviceconfig;service"
      "config\242\002\004GAPIb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 301);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/endpoint.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_google_2fapi_2fendpoint_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Endpoint::kNameFieldNumber;
const int Endpoint::kAliasesFieldNumber;
const int Endpoint::kApisFieldNumber;
const int Endpoint::kFeaturesFieldNumber;
const int Endpoint::kTargetFieldNumber;
const int Endpoint::kAllowCorsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Endpoint::Endpoint()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2fendpoint_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Endpoint)
}
Endpoint::Endpoint(const Endpoint& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      aliases_(from.aliases_),
      apis_(from.apis_),
      features_(from.features_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.target().size() > 0) {
    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  allow_cors_ = from.allow_cors_;
  // @@protoc_insertion_point(copy_constructor:google.api.Endpoint)
}

void Endpoint::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  allow_cors_ = false;
  _cached_size_ = 0;
}

Endpoint::~Endpoint() {
  // @@protoc_insertion_point(destructor:google.api.Endpoint)
  SharedDtor();
}

void Endpoint::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Endpoint::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Endpoint::descriptor() {
  protobuf_google_2fapi_2fendpoint_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fendpoint_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Endpoint& Endpoint::default_instance() {
  protobuf_google_2fapi_2fendpoint_2eproto::InitDefaults();
  return *internal_default_instance();
}

Endpoint* Endpoint::New(::google::protobuf::Arena* arena) const {
  Endpoint* n = new Endpoint;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Endpoint::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Endpoint)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  aliases_.Clear();
  apis_.Clear();
  features_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  allow_cors_ = false;
  _internal_metadata_.Clear();
}

bool Endpoint::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.Endpoint)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Endpoint.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string aliases = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_aliases()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->aliases(this->aliases_size() - 1).data(),
            static_cast<int>(this->aliases(this->aliases_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Endpoint.aliases"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string apis = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_apis()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->apis(this->apis_size() - 1).data(),
            static_cast<int>(this->apis(this->apis_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Endpoint.apis"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string features = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_features()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->features(this->features_size() - 1).data(),
            static_cast<int>(this->features(this->features_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Endpoint.features"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool allow_cors = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &allow_cors_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string target = 101;
      case 101: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 810 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_target()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->target().data(), static_cast<int>(this->target().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Endpoint.target"));
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
  // @@protoc_insertion_point(parse_success:google.api.Endpoint)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.Endpoint)
  return false;
#undef DO_
}

void Endpoint::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.Endpoint)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated string aliases = 2;
  for (int i = 0, n = this->aliases_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->aliases(i).data(), static_cast<int>(this->aliases(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.aliases");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->aliases(i), output);
  }

  // repeated string apis = 3;
  for (int i = 0, n = this->apis_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->apis(i).data(), static_cast<int>(this->apis(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.apis");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->apis(i), output);
  }

  // repeated string features = 4;
  for (int i = 0, n = this->features_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->features(i).data(), static_cast<int>(this->features(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.features");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->features(i), output);
  }

  // bool allow_cors = 5;
  if (this->allow_cors() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->allow_cors(), output);
  }

  // string target = 101;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.target");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      101, this->target(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.api.Endpoint)
}

::google::protobuf::uint8* Endpoint::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Endpoint)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated string aliases = 2;
  for (int i = 0, n = this->aliases_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->aliases(i).data(), static_cast<int>(this->aliases(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.aliases");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->aliases(i), target);
  }

  // repeated string apis = 3;
  for (int i = 0, n = this->apis_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->apis(i).data(), static_cast<int>(this->apis(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.apis");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->apis(i), target);
  }

  // repeated string features = 4;
  for (int i = 0, n = this->features_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->features(i).data(), static_cast<int>(this->features(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.features");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(4, this->features(i), target);
  }

  // bool allow_cors = 5;
  if (this->allow_cors() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->allow_cors(), target);
  }

  // string target = 101;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.target");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        101, this->target(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Endpoint)
  return target;
}

size_t Endpoint::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Endpoint)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string aliases = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->aliases_size());
  for (int i = 0, n = this->aliases_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->aliases(i));
  }

  // repeated string apis = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->apis_size());
  for (int i = 0, n = this->apis_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->apis(i));
  }

  // repeated string features = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->features_size());
  for (int i = 0, n = this->features_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->features(i));
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string target = 101;
  if (this->target().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->target());
  }

  // bool allow_cors = 5;
  if (this->allow_cors() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Endpoint::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Endpoint)
  GOOGLE_DCHECK_NE(&from, this);
  const Endpoint* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Endpoint>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Endpoint)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Endpoint)
    MergeFrom(*source);
  }
}

void Endpoint::MergeFrom(const Endpoint& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Endpoint)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  aliases_.MergeFrom(from.aliases_);
  apis_.MergeFrom(from.apis_);
  features_.MergeFrom(from.features_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.target().size() > 0) {

    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  if (from.allow_cors() != 0) {
    set_allow_cors(from.allow_cors());
  }
}

void Endpoint::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Endpoint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Endpoint::CopyFrom(const Endpoint& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Endpoint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Endpoint::IsInitialized() const {
  return true;
}

void Endpoint::Swap(Endpoint* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Endpoint::InternalSwap(Endpoint* other) {
  using std::swap;
  aliases_.InternalSwap(&other->aliases_);
  apis_.InternalSwap(&other->apis_);
  features_.InternalSwap(&other->features_);
  name_.Swap(&other->name_);
  target_.Swap(&other->target_);
  swap(allow_cors_, other->allow_cors_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Endpoint::GetMetadata() const {
  protobuf_google_2fapi_2fendpoint_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fendpoint_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Endpoint

// string name = 1;
void Endpoint::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Endpoint::name() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.name)
  return name_.GetNoArena();
}
void Endpoint::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Endpoint.name)
}
#if LANG_CXX11
void Endpoint::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Endpoint.name)
}
#endif
void Endpoint::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.name)
}
void Endpoint::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.name)
}
::std::string* Endpoint::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Endpoint::release_name() {
  // @@protoc_insertion_point(field_release:google.api.Endpoint.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Endpoint::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.api.Endpoint.name)
}

// repeated string aliases = 2;
int Endpoint::aliases_size() const {
  return aliases_.size();
}
void Endpoint::clear_aliases() {
  aliases_.Clear();
}
const ::std::string& Endpoint::aliases(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.aliases)
  return aliases_.Get(index);
}
::std::string* Endpoint::mutable_aliases(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.aliases)
  return aliases_.Mutable(index);
}
void Endpoint::set_aliases(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.aliases)
  aliases_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void Endpoint::set_aliases(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.aliases)
  aliases_.Mutable(index)->assign(std::move(value));
}
#endif
void Endpoint::set_aliases(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  aliases_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.aliases)
}
void Endpoint::set_aliases(int index, const char* value, size_t size) {
  aliases_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.aliases)
}
::std::string* Endpoint::add_aliases() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.aliases)
  return aliases_.Add();
}
void Endpoint::add_aliases(const ::std::string& value) {
  aliases_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.aliases)
}
#if LANG_CXX11
void Endpoint::add_aliases(::std::string&& value) {
  aliases_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Endpoint.aliases)
}
#endif
void Endpoint::add_aliases(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  aliases_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.aliases)
}
void Endpoint::add_aliases(const char* value, size_t size) {
  aliases_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.aliases)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Endpoint::aliases() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.aliases)
  return aliases_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Endpoint::mutable_aliases() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.aliases)
  return &aliases_;
}

// repeated string apis = 3;
int Endpoint::apis_size() const {
  return apis_.size();
}
void Endpoint::clear_apis() {
  apis_.Clear();
}
const ::std::string& Endpoint::apis(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.apis)
  return apis_.Get(index);
}
::std::string* Endpoint::mutable_apis(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.apis)
  return apis_.Mutable(index);
}
void Endpoint::set_apis(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.apis)
  apis_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void Endpoint::set_apis(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.apis)
  apis_.Mutable(index)->assign(std::move(value));
}
#endif
void Endpoint::set_apis(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  apis_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.apis)
}
void Endpoint::set_apis(int index, const char* value, size_t size) {
  apis_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.apis)
}
::std::string* Endpoint::add_apis() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.apis)
  return apis_.Add();
}
void Endpoint::add_apis(const ::std::string& value) {
  apis_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.apis)
}
#if LANG_CXX11
void Endpoint::add_apis(::std::string&& value) {
  apis_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Endpoint.apis)
}
#endif
void Endpoint::add_apis(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  apis_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.apis)
}
void Endpoint::add_apis(const char* value, size_t size) {
  apis_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.apis)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Endpoint::apis() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.apis)
  return apis_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Endpoint::mutable_apis() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.apis)
  return &apis_;
}

// repeated string features = 4;
int Endpoint::features_size() const {
  return features_.size();
}
void Endpoint::clear_features() {
  features_.Clear();
}
const ::std::string& Endpoint::features(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.features)
  return features_.Get(index);
}
::std::string* Endpoint::mutable_features(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.features)
  return features_.Mutable(index);
}
void Endpoint::set_features(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.features)
  features_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void Endpoint::set_features(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.features)
  features_.Mutable(index)->assign(std::move(value));
}
#endif
void Endpoint::set_features(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  features_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.features)
}
void Endpoint::set_features(int index, const char* value, size_t size) {
  features_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.features)
}
::std::string* Endpoint::add_features() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.features)
  return features_.Add();
}
void Endpoint::add_features(const ::std::string& value) {
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.features)
}
#if LANG_CXX11
void Endpoint::add_features(::std::string&& value) {
  features_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Endpoint.features)
}
#endif
void Endpoint::add_features(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.features)
}
void Endpoint::add_features(const char* value, size_t size) {
  features_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.features)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Endpoint::features() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.features)
  return features_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Endpoint::mutable_features() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.features)
  return &features_;
}

// string target = 101;
void Endpoint::clear_target() {
  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Endpoint::target() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.target)
  return target_.GetNoArena();
}
void Endpoint::set_target(const ::std::string& value) {
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Endpoint.target)
}
#if LANG_CXX11
void Endpoint::set_target(::std::string&& value) {
  
  target_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Endpoint.target)
}
#endif
void Endpoint::set_target(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.target)
}
void Endpoint::set_target(const char* value, size_t size) {
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.target)
}
::std::string* Endpoint::mutable_target() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.target)
  return target_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Endpoint::release_target() {
  // @@protoc_insertion_point(field_release:google.api.Endpoint.target)
  
  return target_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Endpoint::set_allocated_target(::std::string* target) {
  if (target != NULL) {
    
  } else {
    
  }
  target_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), target);
  // @@protoc_insertion_point(field_set_allocated:google.api.Endpoint.target)
}

// bool allow_cors = 5;
void Endpoint::clear_allow_cors() {
  allow_cors_ = false;
}
bool Endpoint::allow_cors() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.allow_cors)
  return allow_cors_;
}
void Endpoint::set_allow_cors(bool value) {
  
  allow_cors_ = value;
  // @@protoc_insertion_point(field_set:google.api.Endpoint.allow_cors)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
