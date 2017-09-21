// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/appengine/v1/location.proto

#ifndef PROTOBUF_google_2fappengine_2fv1_2flocation_2eproto__INCLUDED
#define PROTOBUF_google_2fappengine_2fv1_2flocation_2eproto__INCLUDED

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
#include "google/type/latlng.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace appengine {
namespace v1 {
class LocationMetadata;
class LocationMetadataDefaultTypeInternal;
extern LocationMetadataDefaultTypeInternal _LocationMetadata_default_instance_;
}  // namespace v1
}  // namespace appengine
}  // namespace google

namespace google {
namespace appengine {
namespace v1 {

namespace protobuf_google_2fappengine_2fv1_2flocation_2eproto {
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
}  // namespace protobuf_google_2fappengine_2fv1_2flocation_2eproto

// ===================================================================

class LocationMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.appengine.v1.LocationMetadata) */ {
 public:
  LocationMetadata();
  virtual ~LocationMetadata();

  LocationMetadata(const LocationMetadata& from);

  inline LocationMetadata& operator=(const LocationMetadata& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LocationMetadata(LocationMetadata&& from) noexcept
    : LocationMetadata() {
    *this = ::std::move(from);
  }

  inline LocationMetadata& operator=(LocationMetadata&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LocationMetadata& default_instance();

  static inline const LocationMetadata* internal_default_instance() {
    return reinterpret_cast<const LocationMetadata*>(
               &_LocationMetadata_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LocationMetadata* other);
  friend void swap(LocationMetadata& a, LocationMetadata& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LocationMetadata* New() const PROTOBUF_FINAL { return New(NULL); }

  LocationMetadata* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LocationMetadata& from);
  void MergeFrom(const LocationMetadata& from);
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
  void InternalSwap(LocationMetadata* other);
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

  // bool standard_environment_available = 2;
  void clear_standard_environment_available();
  static const int kStandardEnvironmentAvailableFieldNumber = 2;
  bool standard_environment_available() const;
  void set_standard_environment_available(bool value);

  // bool flexible_environment_available = 4;
  void clear_flexible_environment_available();
  static const int kFlexibleEnvironmentAvailableFieldNumber = 4;
  bool flexible_environment_available() const;
  void set_flexible_environment_available(bool value);

  // @@protoc_insertion_point(class_scope:google.appengine.v1.LocationMetadata)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool standard_environment_available_;
  bool flexible_environment_available_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fappengine_2fv1_2flocation_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LocationMetadata

// bool standard_environment_available = 2;
inline void LocationMetadata::clear_standard_environment_available() {
  standard_environment_available_ = false;
}
inline bool LocationMetadata::standard_environment_available() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.LocationMetadata.standard_environment_available)
  return standard_environment_available_;
}
inline void LocationMetadata::set_standard_environment_available(bool value) {
  
  standard_environment_available_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.LocationMetadata.standard_environment_available)
}

// bool flexible_environment_available = 4;
inline void LocationMetadata::clear_flexible_environment_available() {
  flexible_environment_available_ = false;
}
inline bool LocationMetadata::flexible_environment_available() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.LocationMetadata.flexible_environment_available)
  return flexible_environment_available_;
}
inline void LocationMetadata::set_flexible_environment_available(bool value) {
  
  flexible_environment_available_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.LocationMetadata.flexible_environment_available)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace appengine
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fappengine_2fv1_2flocation_2eproto__INCLUDED
