// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/ml/v1/prediction_service.proto

#ifndef PROTOBUF_google_2fcloud_2fml_2fv1_2fprediction_5fservice_2eproto__INCLUDED
#define PROTOBUF_google_2fcloud_2fml_2fv1_2fprediction_5fservice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/api/httpbody.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace cloud {
namespace ml {
namespace v1 {
class PredictRequest;
class PredictRequestDefaultTypeInternal;
extern PredictRequestDefaultTypeInternal _PredictRequest_default_instance_;
}  // namespace v1
}  // namespace ml
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace ml {
namespace v1 {

namespace protobuf_google_2fcloud_2fml_2fv1_2fprediction_5fservice_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_google_2fcloud_2fml_2fv1_2fprediction_5fservice_2eproto

// ===================================================================

class PredictRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.ml.v1.PredictRequest) */ {
 public:
  PredictRequest();
  virtual ~PredictRequest();

  PredictRequest(const PredictRequest& from);

  inline PredictRequest& operator=(const PredictRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PredictRequest(PredictRequest&& from) noexcept
    : PredictRequest() {
    *this = ::std::move(from);
  }

  inline PredictRequest& operator=(PredictRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PredictRequest& default_instance();

  static inline const PredictRequest* internal_default_instance() {
    return reinterpret_cast<const PredictRequest*>(
               &_PredictRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PredictRequest* other);
  friend void swap(PredictRequest& a, PredictRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PredictRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  PredictRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PredictRequest& from);
  void MergeFrom(const PredictRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PredictRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .google.api.HttpBody http_body = 2;
  bool has_http_body() const;
  void clear_http_body();
  static const int kHttpBodyFieldNumber = 2;
  const ::google::api::HttpBody& http_body() const;
  ::google::api::HttpBody* mutable_http_body();
  ::google::api::HttpBody* release_http_body();
  void set_allocated_http_body(::google::api::HttpBody* http_body);

  // @@protoc_insertion_point(class_scope:google.cloud.ml.v1.PredictRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::api::HttpBody* http_body_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fcloud_2fml_2fv1_2fprediction_5fservice_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PredictRequest

// string name = 1;
inline void PredictRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PredictRequest::name() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1.PredictRequest.name)
  return name_.GetNoArena();
}
inline void PredictRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1.PredictRequest.name)
}
#if LANG_CXX11
inline void PredictRequest::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.ml.v1.PredictRequest.name)
}
#endif
inline void PredictRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.ml.v1.PredictRequest.name)
}
inline void PredictRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.ml.v1.PredictRequest.name)
}
inline ::std::string* PredictRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1.PredictRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PredictRequest::release_name() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1.PredictRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PredictRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1.PredictRequest.name)
}

// .google.api.HttpBody http_body = 2;
inline bool PredictRequest::has_http_body() const {
  return this != internal_default_instance() && http_body_ != NULL;
}
inline void PredictRequest::clear_http_body() {
  if (GetArenaNoVirtual() == NULL && http_body_ != NULL) delete http_body_;
  http_body_ = NULL;
}
inline const ::google::api::HttpBody& PredictRequest::http_body() const {
  const ::google::api::HttpBody* p = http_body_;
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1.PredictRequest.http_body)
  return p != NULL ? *p : *reinterpret_cast<const ::google::api::HttpBody*>(
      &::google::api::_HttpBody_default_instance_);
}
inline ::google::api::HttpBody* PredictRequest::mutable_http_body() {
  
  if (http_body_ == NULL) {
    http_body_ = new ::google::api::HttpBody;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1.PredictRequest.http_body)
  return http_body_;
}
inline ::google::api::HttpBody* PredictRequest::release_http_body() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1.PredictRequest.http_body)
  
  ::google::api::HttpBody* temp = http_body_;
  http_body_ = NULL;
  return temp;
}
inline void PredictRequest::set_allocated_http_body(::google::api::HttpBody* http_body) {
  delete http_body_;
  http_body_ = http_body;
  if (http_body) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1.PredictRequest.http_body)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace ml
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fcloud_2fml_2fv1_2fprediction_5fservice_2eproto__INCLUDED
