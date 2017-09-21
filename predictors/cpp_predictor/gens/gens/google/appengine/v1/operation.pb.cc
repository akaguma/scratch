// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/appengine/v1/operation.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/appengine/v1/operation.pb.h"

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
namespace appengine {
namespace v1 {
class OperationMetadataV1DefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<OperationMetadataV1>
     _instance;
} _OperationMetadataV1_default_instance_;

namespace protobuf_google_2fappengine_2fv1_2foperation_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadataV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadataV1, method_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadataV1, insert_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadataV1, end_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadataV1, user_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadataV1, target_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(OperationMetadataV1)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_OperationMetadataV1_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/appengine/v1/operation.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  ::google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults();
  _OperationMetadataV1_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_OperationMetadataV1_default_instance_);_OperationMetadataV1_default_instance_._instance.get_mutable()->insert_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  _OperationMetadataV1_default_instance_._instance.get_mutable()->end_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n#google/appengine/v1/operation.proto\022\023g"
      "oogle.appengine.v1\032\034google/api/annotatio"
      "ns.proto\032\037google/protobuf/timestamp.prot"
      "o\"\242\001\n\023OperationMetadataV1\022\016\n\006method\030\001 \001("
      "\t\022/\n\013insert_time\030\002 \001(\0132\032.google.protobuf"
      ".Timestamp\022,\n\010end_time\030\003 \001(\0132\032.google.pr"
      "otobuf.Timestamp\022\014\n\004user\030\004 \001(\t\022\016\n\006target"
      "\030\005 \001(\tBi\n\027com.google.appengine.v1B\016Opera"
      "tionProtoP\001Z<google.golang.org/genproto/"
      "googleapis/appengine/v1;appengineb\006proto"
      "3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 401);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/appengine/v1/operation.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fappengine_2fv1_2foperation_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationMetadataV1::kMethodFieldNumber;
const int OperationMetadataV1::kInsertTimeFieldNumber;
const int OperationMetadataV1::kEndTimeFieldNumber;
const int OperationMetadataV1::kUserFieldNumber;
const int OperationMetadataV1::kTargetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationMetadataV1::OperationMetadataV1()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fappengine_2fv1_2foperation_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.appengine.v1.OperationMetadataV1)
}
OperationMetadataV1::OperationMetadataV1(const OperationMetadataV1& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  method_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.method().size() > 0) {
    method_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_);
  }
  user_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.user().size() > 0) {
    user_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_);
  }
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.target().size() > 0) {
    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  if (from.has_insert_time()) {
    insert_time_ = new ::google::protobuf::Timestamp(*from.insert_time_);
  } else {
    insert_time_ = NULL;
  }
  if (from.has_end_time()) {
    end_time_ = new ::google::protobuf::Timestamp(*from.end_time_);
  } else {
    end_time_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:google.appengine.v1.OperationMetadataV1)
}

void OperationMetadataV1::SharedCtor() {
  method_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&insert_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_time_) -
      reinterpret_cast<char*>(&insert_time_)) + sizeof(end_time_));
  _cached_size_ = 0;
}

OperationMetadataV1::~OperationMetadataV1() {
  // @@protoc_insertion_point(destructor:google.appengine.v1.OperationMetadataV1)
  SharedDtor();
}

void OperationMetadataV1::SharedDtor() {
  method_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete insert_time_;
  if (this != internal_default_instance()) delete end_time_;
}

void OperationMetadataV1::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationMetadataV1::descriptor() {
  protobuf_google_2fappengine_2fv1_2foperation_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fappengine_2fv1_2foperation_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const OperationMetadataV1& OperationMetadataV1::default_instance() {
  protobuf_google_2fappengine_2fv1_2foperation_2eproto::InitDefaults();
  return *internal_default_instance();
}

OperationMetadataV1* OperationMetadataV1::New(::google::protobuf::Arena* arena) const {
  OperationMetadataV1* n = new OperationMetadataV1;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationMetadataV1::Clear() {
// @@protoc_insertion_point(message_clear_start:google.appengine.v1.OperationMetadataV1)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && insert_time_ != NULL) {
    delete insert_time_;
  }
  insert_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) {
    delete end_time_;
  }
  end_time_ = NULL;
  _internal_metadata_.Clear();
}

bool OperationMetadataV1::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.appengine.v1.OperationMetadataV1)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string method = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->method().data(), static_cast<int>(this->method().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.appengine.v1.OperationMetadataV1.method"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp insert_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_insert_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp end_time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_end_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string user = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->user().data(), static_cast<int>(this->user().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.appengine.v1.OperationMetadataV1.user"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string target = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_target()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->target().data(), static_cast<int>(this->target().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.appengine.v1.OperationMetadataV1.target"));
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
  // @@protoc_insertion_point(parse_success:google.appengine.v1.OperationMetadataV1)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.appengine.v1.OperationMetadataV1)
  return false;
#undef DO_
}

void OperationMetadataV1::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.appengine.v1.OperationMetadataV1)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string method = 1;
  if (this->method().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->method().data(), static_cast<int>(this->method().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.method");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->method(), output);
  }

  // .google.protobuf.Timestamp insert_time = 2;
  if (this->has_insert_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->insert_time_, output);
  }

  // .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->end_time_, output);
  }

  // string user = 4;
  if (this->user().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user().data(), static_cast<int>(this->user().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.user");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->user(), output);
  }

  // string target = 5;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.target");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->target(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.appengine.v1.OperationMetadataV1)
}

::google::protobuf::uint8* OperationMetadataV1::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.appengine.v1.OperationMetadataV1)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string method = 1;
  if (this->method().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->method().data(), static_cast<int>(this->method().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.method");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->method(), target);
  }

  // .google.protobuf.Timestamp insert_time = 2;
  if (this->has_insert_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->insert_time_, deterministic, target);
  }

  // .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->end_time_, deterministic, target);
  }

  // string user = 4;
  if (this->user().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user().data(), static_cast<int>(this->user().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.user");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->user(), target);
  }

  // string target = 5;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.target");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->target(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.appengine.v1.OperationMetadataV1)
  return target;
}

size_t OperationMetadataV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.appengine.v1.OperationMetadataV1)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string method = 1;
  if (this->method().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->method());
  }

  // string user = 4;
  if (this->user().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->user());
  }

  // string target = 5;
  if (this->target().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->target());
  }

  // .google.protobuf.Timestamp insert_time = 2;
  if (this->has_insert_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->insert_time_);
  }

  // .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->end_time_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationMetadataV1::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.appengine.v1.OperationMetadataV1)
  GOOGLE_DCHECK_NE(&from, this);
  const OperationMetadataV1* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationMetadataV1>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.appengine.v1.OperationMetadataV1)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.appengine.v1.OperationMetadataV1)
    MergeFrom(*source);
  }
}

void OperationMetadataV1::MergeFrom(const OperationMetadataV1& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.appengine.v1.OperationMetadataV1)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.method().size() > 0) {

    method_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_);
  }
  if (from.user().size() > 0) {

    user_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_);
  }
  if (from.target().size() > 0) {

    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  if (from.has_insert_time()) {
    mutable_insert_time()->::google::protobuf::Timestamp::MergeFrom(from.insert_time());
  }
  if (from.has_end_time()) {
    mutable_end_time()->::google::protobuf::Timestamp::MergeFrom(from.end_time());
  }
}

void OperationMetadataV1::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.appengine.v1.OperationMetadataV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationMetadataV1::CopyFrom(const OperationMetadataV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.appengine.v1.OperationMetadataV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationMetadataV1::IsInitialized() const {
  return true;
}

void OperationMetadataV1::Swap(OperationMetadataV1* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationMetadataV1::InternalSwap(OperationMetadataV1* other) {
  using std::swap;
  method_.Swap(&other->method_);
  user_.Swap(&other->user_);
  target_.Swap(&other->target_);
  swap(insert_time_, other->insert_time_);
  swap(end_time_, other->end_time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationMetadataV1::GetMetadata() const {
  protobuf_google_2fappengine_2fv1_2foperation_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fappengine_2fv1_2foperation_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationMetadataV1

// string method = 1;
void OperationMetadataV1::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& OperationMetadataV1::method() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.OperationMetadataV1.method)
  return method_.GetNoArena();
}
void OperationMetadataV1::set_method(const ::std::string& value) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.OperationMetadataV1.method)
}
#if LANG_CXX11
void OperationMetadataV1::set_method(::std::string&& value) {
  
  method_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.OperationMetadataV1.method)
}
#endif
void OperationMetadataV1::set_method(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.OperationMetadataV1.method)
}
void OperationMetadataV1::set_method(const char* value, size_t size) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.OperationMetadataV1.method)
}
::std::string* OperationMetadataV1::mutable_method() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.OperationMetadataV1.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* OperationMetadataV1::release_method() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.OperationMetadataV1.method)
  
  return method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void OperationMetadataV1::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    
  } else {
    
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.OperationMetadataV1.method)
}

// .google.protobuf.Timestamp insert_time = 2;
bool OperationMetadataV1::has_insert_time() const {
  return this != internal_default_instance() && insert_time_ != NULL;
}
void OperationMetadataV1::clear_insert_time() {
  if (GetArenaNoVirtual() == NULL && insert_time_ != NULL) delete insert_time_;
  insert_time_ = NULL;
}
const ::google::protobuf::Timestamp& OperationMetadataV1::insert_time() const {
  const ::google::protobuf::Timestamp* p = insert_time_;
  // @@protoc_insertion_point(field_get:google.appengine.v1.OperationMetadataV1.insert_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
::google::protobuf::Timestamp* OperationMetadataV1::mutable_insert_time() {
  
  if (insert_time_ == NULL) {
    insert_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.OperationMetadataV1.insert_time)
  return insert_time_;
}
::google::protobuf::Timestamp* OperationMetadataV1::release_insert_time() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.OperationMetadataV1.insert_time)
  
  ::google::protobuf::Timestamp* temp = insert_time_;
  insert_time_ = NULL;
  return temp;
}
void OperationMetadataV1::set_allocated_insert_time(::google::protobuf::Timestamp* insert_time) {
  delete insert_time_;
  if (insert_time != NULL && insert_time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_insert_time = new ::google::protobuf::Timestamp;
    new_insert_time->CopyFrom(*insert_time);
    insert_time = new_insert_time;
  }
  insert_time_ = insert_time;
  if (insert_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.OperationMetadataV1.insert_time)
}

// .google.protobuf.Timestamp end_time = 3;
bool OperationMetadataV1::has_end_time() const {
  return this != internal_default_instance() && end_time_ != NULL;
}
void OperationMetadataV1::clear_end_time() {
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) delete end_time_;
  end_time_ = NULL;
}
const ::google::protobuf::Timestamp& OperationMetadataV1::end_time() const {
  const ::google::protobuf::Timestamp* p = end_time_;
  // @@protoc_insertion_point(field_get:google.appengine.v1.OperationMetadataV1.end_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
::google::protobuf::Timestamp* OperationMetadataV1::mutable_end_time() {
  
  if (end_time_ == NULL) {
    end_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.OperationMetadataV1.end_time)
  return end_time_;
}
::google::protobuf::Timestamp* OperationMetadataV1::release_end_time() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.OperationMetadataV1.end_time)
  
  ::google::protobuf::Timestamp* temp = end_time_;
  end_time_ = NULL;
  return temp;
}
void OperationMetadataV1::set_allocated_end_time(::google::protobuf::Timestamp* end_time) {
  delete end_time_;
  if (end_time != NULL && end_time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_end_time = new ::google::protobuf::Timestamp;
    new_end_time->CopyFrom(*end_time);
    end_time = new_end_time;
  }
  end_time_ = end_time;
  if (end_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.OperationMetadataV1.end_time)
}

// string user = 4;
void OperationMetadataV1::clear_user() {
  user_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& OperationMetadataV1::user() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.OperationMetadataV1.user)
  return user_.GetNoArena();
}
void OperationMetadataV1::set_user(const ::std::string& value) {
  
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.OperationMetadataV1.user)
}
#if LANG_CXX11
void OperationMetadataV1::set_user(::std::string&& value) {
  
  user_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.OperationMetadataV1.user)
}
#endif
void OperationMetadataV1::set_user(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.OperationMetadataV1.user)
}
void OperationMetadataV1::set_user(const char* value, size_t size) {
  
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.OperationMetadataV1.user)
}
::std::string* OperationMetadataV1::mutable_user() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.OperationMetadataV1.user)
  return user_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* OperationMetadataV1::release_user() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.OperationMetadataV1.user)
  
  return user_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void OperationMetadataV1::set_allocated_user(::std::string* user) {
  if (user != NULL) {
    
  } else {
    
  }
  user_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.OperationMetadataV1.user)
}

// string target = 5;
void OperationMetadataV1::clear_target() {
  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& OperationMetadataV1::target() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.OperationMetadataV1.target)
  return target_.GetNoArena();
}
void OperationMetadataV1::set_target(const ::std::string& value) {
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.OperationMetadataV1.target)
}
#if LANG_CXX11
void OperationMetadataV1::set_target(::std::string&& value) {
  
  target_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.OperationMetadataV1.target)
}
#endif
void OperationMetadataV1::set_target(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.OperationMetadataV1.target)
}
void OperationMetadataV1::set_target(const char* value, size_t size) {
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.OperationMetadataV1.target)
}
::std::string* OperationMetadataV1::mutable_target() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.OperationMetadataV1.target)
  return target_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* OperationMetadataV1::release_target() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.OperationMetadataV1.target)
  
  return target_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void OperationMetadataV1::set_allocated_target(::std::string* target) {
  if (target != NULL) {
    
  } else {
    
  }
  target_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), target);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.OperationMetadataV1.target)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace appengine
}  // namespace google

// @@protoc_insertion_point(global_scope)
