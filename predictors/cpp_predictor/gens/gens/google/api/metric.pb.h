// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/metric.proto

#ifndef PROTOBUF_google_2fapi_2fmetric_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fmetric_2eproto__INCLUDED

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/label.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
class Metric;
class MetricDefaultTypeInternal;
extern MetricDefaultTypeInternal _Metric_default_instance_;
class MetricDescriptor;
class MetricDescriptorDefaultTypeInternal;
extern MetricDescriptorDefaultTypeInternal _MetricDescriptor_default_instance_;
class Metric_LabelsEntry;
class Metric_LabelsEntryDefaultTypeInternal;
extern Metric_LabelsEntryDefaultTypeInternal _Metric_LabelsEntry_default_instance_;
}  // namespace api
}  // namespace google

namespace google {
namespace api {

namespace protobuf_google_2fapi_2fmetric_2eproto {
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
}  // namespace protobuf_google_2fapi_2fmetric_2eproto

enum MetricDescriptor_MetricKind {
  MetricDescriptor_MetricKind_METRIC_KIND_UNSPECIFIED = 0,
  MetricDescriptor_MetricKind_GAUGE = 1,
  MetricDescriptor_MetricKind_DELTA = 2,
  MetricDescriptor_MetricKind_CUMULATIVE = 3,
  MetricDescriptor_MetricKind_MetricDescriptor_MetricKind_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MetricDescriptor_MetricKind_MetricDescriptor_MetricKind_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MetricDescriptor_MetricKind_IsValid(int value);
const MetricDescriptor_MetricKind MetricDescriptor_MetricKind_MetricKind_MIN = MetricDescriptor_MetricKind_METRIC_KIND_UNSPECIFIED;
const MetricDescriptor_MetricKind MetricDescriptor_MetricKind_MetricKind_MAX = MetricDescriptor_MetricKind_CUMULATIVE;
const int MetricDescriptor_MetricKind_MetricKind_ARRAYSIZE = MetricDescriptor_MetricKind_MetricKind_MAX + 1;

const ::google::protobuf::EnumDescriptor* MetricDescriptor_MetricKind_descriptor();
inline const ::std::string& MetricDescriptor_MetricKind_Name(MetricDescriptor_MetricKind value) {
  return ::google::protobuf::internal::NameOfEnum(
    MetricDescriptor_MetricKind_descriptor(), value);
}
inline bool MetricDescriptor_MetricKind_Parse(
    const ::std::string& name, MetricDescriptor_MetricKind* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MetricDescriptor_MetricKind>(
    MetricDescriptor_MetricKind_descriptor(), name, value);
}
enum MetricDescriptor_ValueType {
  MetricDescriptor_ValueType_VALUE_TYPE_UNSPECIFIED = 0,
  MetricDescriptor_ValueType_BOOL = 1,
  MetricDescriptor_ValueType_INT64 = 2,
  MetricDescriptor_ValueType_DOUBLE = 3,
  MetricDescriptor_ValueType_STRING = 4,
  MetricDescriptor_ValueType_DISTRIBUTION = 5,
  MetricDescriptor_ValueType_MONEY = 6,
  MetricDescriptor_ValueType_MetricDescriptor_ValueType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MetricDescriptor_ValueType_MetricDescriptor_ValueType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MetricDescriptor_ValueType_IsValid(int value);
const MetricDescriptor_ValueType MetricDescriptor_ValueType_ValueType_MIN = MetricDescriptor_ValueType_VALUE_TYPE_UNSPECIFIED;
const MetricDescriptor_ValueType MetricDescriptor_ValueType_ValueType_MAX = MetricDescriptor_ValueType_MONEY;
const int MetricDescriptor_ValueType_ValueType_ARRAYSIZE = MetricDescriptor_ValueType_ValueType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MetricDescriptor_ValueType_descriptor();
inline const ::std::string& MetricDescriptor_ValueType_Name(MetricDescriptor_ValueType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MetricDescriptor_ValueType_descriptor(), value);
}
inline bool MetricDescriptor_ValueType_Parse(
    const ::std::string& name, MetricDescriptor_ValueType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MetricDescriptor_ValueType>(
    MetricDescriptor_ValueType_descriptor(), name, value);
}
// ===================================================================

class MetricDescriptor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.MetricDescriptor) */ {
 public:
  MetricDescriptor();
  virtual ~MetricDescriptor();

  MetricDescriptor(const MetricDescriptor& from);

  inline MetricDescriptor& operator=(const MetricDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MetricDescriptor(MetricDescriptor&& from) noexcept
    : MetricDescriptor() {
    *this = ::std::move(from);
  }

  inline MetricDescriptor& operator=(MetricDescriptor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MetricDescriptor& default_instance();

  static inline const MetricDescriptor* internal_default_instance() {
    return reinterpret_cast<const MetricDescriptor*>(
               &_MetricDescriptor_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MetricDescriptor* other);
  friend void swap(MetricDescriptor& a, MetricDescriptor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MetricDescriptor* New() const PROTOBUF_FINAL { return New(NULL); }

  MetricDescriptor* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MetricDescriptor& from);
  void MergeFrom(const MetricDescriptor& from);
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
  void InternalSwap(MetricDescriptor* other);
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

  typedef MetricDescriptor_MetricKind MetricKind;
  static const MetricKind METRIC_KIND_UNSPECIFIED =
    MetricDescriptor_MetricKind_METRIC_KIND_UNSPECIFIED;
  static const MetricKind GAUGE =
    MetricDescriptor_MetricKind_GAUGE;
  static const MetricKind DELTA =
    MetricDescriptor_MetricKind_DELTA;
  static const MetricKind CUMULATIVE =
    MetricDescriptor_MetricKind_CUMULATIVE;
  static inline bool MetricKind_IsValid(int value) {
    return MetricDescriptor_MetricKind_IsValid(value);
  }
  static const MetricKind MetricKind_MIN =
    MetricDescriptor_MetricKind_MetricKind_MIN;
  static const MetricKind MetricKind_MAX =
    MetricDescriptor_MetricKind_MetricKind_MAX;
  static const int MetricKind_ARRAYSIZE =
    MetricDescriptor_MetricKind_MetricKind_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MetricKind_descriptor() {
    return MetricDescriptor_MetricKind_descriptor();
  }
  static inline const ::std::string& MetricKind_Name(MetricKind value) {
    return MetricDescriptor_MetricKind_Name(value);
  }
  static inline bool MetricKind_Parse(const ::std::string& name,
      MetricKind* value) {
    return MetricDescriptor_MetricKind_Parse(name, value);
  }

  typedef MetricDescriptor_ValueType ValueType;
  static const ValueType VALUE_TYPE_UNSPECIFIED =
    MetricDescriptor_ValueType_VALUE_TYPE_UNSPECIFIED;
  static const ValueType BOOL =
    MetricDescriptor_ValueType_BOOL;
  static const ValueType INT64 =
    MetricDescriptor_ValueType_INT64;
  static const ValueType DOUBLE =
    MetricDescriptor_ValueType_DOUBLE;
  static const ValueType STRING =
    MetricDescriptor_ValueType_STRING;
  static const ValueType DISTRIBUTION =
    MetricDescriptor_ValueType_DISTRIBUTION;
  static const ValueType MONEY =
    MetricDescriptor_ValueType_MONEY;
  static inline bool ValueType_IsValid(int value) {
    return MetricDescriptor_ValueType_IsValid(value);
  }
  static const ValueType ValueType_MIN =
    MetricDescriptor_ValueType_ValueType_MIN;
  static const ValueType ValueType_MAX =
    MetricDescriptor_ValueType_ValueType_MAX;
  static const int ValueType_ARRAYSIZE =
    MetricDescriptor_ValueType_ValueType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ValueType_descriptor() {
    return MetricDescriptor_ValueType_descriptor();
  }
  static inline const ::std::string& ValueType_Name(ValueType value) {
    return MetricDescriptor_ValueType_Name(value);
  }
  static inline bool ValueType_Parse(const ::std::string& name,
      ValueType* value) {
    return MetricDescriptor_ValueType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .google.api.LabelDescriptor labels = 2;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 2;
  const ::google::api::LabelDescriptor& labels(int index) const;
  ::google::api::LabelDescriptor* mutable_labels(int index);
  ::google::api::LabelDescriptor* add_labels();
  ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >*
      mutable_labels();
  const ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >&
      labels() const;

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

  // string unit = 5;
  void clear_unit();
  static const int kUnitFieldNumber = 5;
  const ::std::string& unit() const;
  void set_unit(const ::std::string& value);
  #if LANG_CXX11
  void set_unit(::std::string&& value);
  #endif
  void set_unit(const char* value);
  void set_unit(const char* value, size_t size);
  ::std::string* mutable_unit();
  ::std::string* release_unit();
  void set_allocated_unit(::std::string* unit);

  // string description = 6;
  void clear_description();
  static const int kDescriptionFieldNumber = 6;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // string display_name = 7;
  void clear_display_name();
  static const int kDisplayNameFieldNumber = 7;
  const ::std::string& display_name() const;
  void set_display_name(const ::std::string& value);
  #if LANG_CXX11
  void set_display_name(::std::string&& value);
  #endif
  void set_display_name(const char* value);
  void set_display_name(const char* value, size_t size);
  ::std::string* mutable_display_name();
  ::std::string* release_display_name();
  void set_allocated_display_name(::std::string* display_name);

  // string type = 8;
  void clear_type();
  static const int kTypeFieldNumber = 8;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // .google.api.MetricDescriptor.MetricKind metric_kind = 3;
  void clear_metric_kind();
  static const int kMetricKindFieldNumber = 3;
  ::google::api::MetricDescriptor_MetricKind metric_kind() const;
  void set_metric_kind(::google::api::MetricDescriptor_MetricKind value);

  // .google.api.MetricDescriptor.ValueType value_type = 4;
  void clear_value_type();
  static const int kValueTypeFieldNumber = 4;
  ::google::api::MetricDescriptor_ValueType value_type() const;
  void set_value_type(::google::api::MetricDescriptor_ValueType value);

  // @@protoc_insertion_point(class_scope:google.api.MetricDescriptor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor > labels_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr unit_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr display_name_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  int metric_kind_;
  int value_type_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fapi_2fmetric_2eproto::TableStruct;
};
// -------------------------------------------------------------------


// -------------------------------------------------------------------

class Metric : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Metric) */ {
 public:
  Metric();
  virtual ~Metric();

  Metric(const Metric& from);

  inline Metric& operator=(const Metric& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Metric(Metric&& from) noexcept
    : Metric() {
    *this = ::std::move(from);
  }

  inline Metric& operator=(Metric&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Metric& default_instance();

  static inline const Metric* internal_default_instance() {
    return reinterpret_cast<const Metric*>(
               &_Metric_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Metric* other);
  friend void swap(Metric& a, Metric& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Metric* New() const PROTOBUF_FINAL { return New(NULL); }

  Metric* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Metric& from);
  void MergeFrom(const Metric& from);
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
  void InternalSwap(Metric* other);
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

  // map<string, string> labels = 2;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 2;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      labels() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_labels();

  // string type = 3;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // @@protoc_insertion_point(class_scope:google.api.Metric)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  public:
  class Metric_LabelsEntry : public ::google::protobuf::internal::MapEntry<Metric_LabelsEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<Metric_LabelsEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > SuperType;
    Metric_LabelsEntry();
    Metric_LabelsEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const Metric_LabelsEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_Metric_LabelsEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      Metric_LabelsEntry,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > labels_;
  private:
  ::google::protobuf::internal::ArenaStringPtr type_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fapi_2fmetric_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MetricDescriptor

// string name = 1;
inline void MetricDescriptor::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MetricDescriptor::name() const {
  // @@protoc_insertion_point(field_get:google.api.MetricDescriptor.name)
  return name_.GetNoArena();
}
inline void MetricDescriptor::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.MetricDescriptor.name)
}
#if LANG_CXX11
inline void MetricDescriptor::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.MetricDescriptor.name)
}
#endif
inline void MetricDescriptor::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.MetricDescriptor.name)
}
inline void MetricDescriptor::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.MetricDescriptor.name)
}
inline ::std::string* MetricDescriptor::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MetricDescriptor.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MetricDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:google.api.MetricDescriptor.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MetricDescriptor::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.api.MetricDescriptor.name)
}

// string type = 8;
inline void MetricDescriptor::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MetricDescriptor::type() const {
  // @@protoc_insertion_point(field_get:google.api.MetricDescriptor.type)
  return type_.GetNoArena();
}
inline void MetricDescriptor::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.MetricDescriptor.type)
}
#if LANG_CXX11
inline void MetricDescriptor::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.MetricDescriptor.type)
}
#endif
inline void MetricDescriptor::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.MetricDescriptor.type)
}
inline void MetricDescriptor::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.MetricDescriptor.type)
}
inline ::std::string* MetricDescriptor::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MetricDescriptor.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MetricDescriptor::release_type() {
  // @@protoc_insertion_point(field_release:google.api.MetricDescriptor.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MetricDescriptor::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:google.api.MetricDescriptor.type)
}

// repeated .google.api.LabelDescriptor labels = 2;
inline int MetricDescriptor::labels_size() const {
  return labels_.size();
}
inline void MetricDescriptor::clear_labels() {
  labels_.Clear();
}
inline const ::google::api::LabelDescriptor& MetricDescriptor::labels(int index) const {
  // @@protoc_insertion_point(field_get:google.api.MetricDescriptor.labels)
  return labels_.Get(index);
}
inline ::google::api::LabelDescriptor* MetricDescriptor::mutable_labels(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.MetricDescriptor.labels)
  return labels_.Mutable(index);
}
inline ::google::api::LabelDescriptor* MetricDescriptor::add_labels() {
  // @@protoc_insertion_point(field_add:google.api.MetricDescriptor.labels)
  return labels_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >*
MetricDescriptor::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_list:google.api.MetricDescriptor.labels)
  return &labels_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >&
MetricDescriptor::labels() const {
  // @@protoc_insertion_point(field_list:google.api.MetricDescriptor.labels)
  return labels_;
}

// .google.api.MetricDescriptor.MetricKind metric_kind = 3;
inline void MetricDescriptor::clear_metric_kind() {
  metric_kind_ = 0;
}
inline ::google::api::MetricDescriptor_MetricKind MetricDescriptor::metric_kind() const {
  // @@protoc_insertion_point(field_get:google.api.MetricDescriptor.metric_kind)
  return static_cast< ::google::api::MetricDescriptor_MetricKind >(metric_kind_);
}
inline void MetricDescriptor::set_metric_kind(::google::api::MetricDescriptor_MetricKind value) {
  
  metric_kind_ = value;
  // @@protoc_insertion_point(field_set:google.api.MetricDescriptor.metric_kind)
}

// .google.api.MetricDescriptor.ValueType value_type = 4;
inline void MetricDescriptor::clear_value_type() {
  value_type_ = 0;
}
inline ::google::api::MetricDescriptor_ValueType MetricDescriptor::value_type() const {
  // @@protoc_insertion_point(field_get:google.api.MetricDescriptor.value_type)
  return static_cast< ::google::api::MetricDescriptor_ValueType >(value_type_);
}
inline void MetricDescriptor::set_value_type(::google::api::MetricDescriptor_ValueType value) {
  
  value_type_ = value;
  // @@protoc_insertion_point(field_set:google.api.MetricDescriptor.value_type)
}

// string unit = 5;
inline void MetricDescriptor::clear_unit() {
  unit_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MetricDescriptor::unit() const {
  // @@protoc_insertion_point(field_get:google.api.MetricDescriptor.unit)
  return unit_.GetNoArena();
}
inline void MetricDescriptor::set_unit(const ::std::string& value) {
  
  unit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.MetricDescriptor.unit)
}
#if LANG_CXX11
inline void MetricDescriptor::set_unit(::std::string&& value) {
  
  unit_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.MetricDescriptor.unit)
}
#endif
inline void MetricDescriptor::set_unit(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  unit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.MetricDescriptor.unit)
}
inline void MetricDescriptor::set_unit(const char* value, size_t size) {
  
  unit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.MetricDescriptor.unit)
}
inline ::std::string* MetricDescriptor::mutable_unit() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MetricDescriptor.unit)
  return unit_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MetricDescriptor::release_unit() {
  // @@protoc_insertion_point(field_release:google.api.MetricDescriptor.unit)
  
  return unit_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MetricDescriptor::set_allocated_unit(::std::string* unit) {
  if (unit != NULL) {
    
  } else {
    
  }
  unit_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), unit);
  // @@protoc_insertion_point(field_set_allocated:google.api.MetricDescriptor.unit)
}

// string description = 6;
inline void MetricDescriptor::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MetricDescriptor::description() const {
  // @@protoc_insertion_point(field_get:google.api.MetricDescriptor.description)
  return description_.GetNoArena();
}
inline void MetricDescriptor::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.MetricDescriptor.description)
}
#if LANG_CXX11
inline void MetricDescriptor::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.MetricDescriptor.description)
}
#endif
inline void MetricDescriptor::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.MetricDescriptor.description)
}
inline void MetricDescriptor::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.MetricDescriptor.description)
}
inline ::std::string* MetricDescriptor::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MetricDescriptor.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MetricDescriptor::release_description() {
  // @@protoc_insertion_point(field_release:google.api.MetricDescriptor.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MetricDescriptor::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:google.api.MetricDescriptor.description)
}

// string display_name = 7;
inline void MetricDescriptor::clear_display_name() {
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MetricDescriptor::display_name() const {
  // @@protoc_insertion_point(field_get:google.api.MetricDescriptor.display_name)
  return display_name_.GetNoArena();
}
inline void MetricDescriptor::set_display_name(const ::std::string& value) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.MetricDescriptor.display_name)
}
#if LANG_CXX11
inline void MetricDescriptor::set_display_name(::std::string&& value) {
  
  display_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.MetricDescriptor.display_name)
}
#endif
inline void MetricDescriptor::set_display_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.MetricDescriptor.display_name)
}
inline void MetricDescriptor::set_display_name(const char* value, size_t size) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.MetricDescriptor.display_name)
}
inline ::std::string* MetricDescriptor::mutable_display_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MetricDescriptor.display_name)
  return display_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MetricDescriptor::release_display_name() {
  // @@protoc_insertion_point(field_release:google.api.MetricDescriptor.display_name)
  
  return display_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MetricDescriptor::set_allocated_display_name(::std::string* display_name) {
  if (display_name != NULL) {
    
  } else {
    
  }
  display_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), display_name);
  // @@protoc_insertion_point(field_set_allocated:google.api.MetricDescriptor.display_name)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// Metric

// string type = 3;
inline void Metric::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Metric::type() const {
  // @@protoc_insertion_point(field_get:google.api.Metric.type)
  return type_.GetNoArena();
}
inline void Metric::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Metric.type)
}
#if LANG_CXX11
inline void Metric::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Metric.type)
}
#endif
inline void Metric::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Metric.type)
}
inline void Metric::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Metric.type)
}
inline ::std::string* Metric::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Metric.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Metric::release_type() {
  // @@protoc_insertion_point(field_release:google.api.Metric.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Metric::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:google.api.Metric.type)
}

// map<string, string> labels = 2;
inline int Metric::labels_size() const {
  return labels_.size();
}
inline void Metric::clear_labels() {
  labels_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
Metric::labels() const {
  // @@protoc_insertion_point(field_map:google.api.Metric.labels)
  return labels_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
Metric::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_map:google.api.Metric.labels)
  return labels_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace api
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::api::MetricDescriptor_MetricKind> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::MetricDescriptor_MetricKind>() {
  return ::google::api::MetricDescriptor_MetricKind_descriptor();
}
template <> struct is_proto_enum< ::google::api::MetricDescriptor_ValueType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::MetricDescriptor_ValueType>() {
  return ::google::api::MetricDescriptor_ValueType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fmetric_2eproto__INCLUDED
