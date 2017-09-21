// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/servicecontrol/v1/operation.proto

#ifndef PROTOBUF_google_2fapi_2fservicecontrol_2fv1_2foperation_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fservicecontrol_2fv1_2foperation_2eproto__INCLUDED

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
#include "google/api/annotations.pb.h"
#include "google/api/servicecontrol/v1/log_entry.pb.h"
#include "google/api/servicecontrol/v1/metric_value.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {
class Operation;
class OperationDefaultTypeInternal;
extern OperationDefaultTypeInternal _Operation_default_instance_;
class Operation_LabelsEntry;
class Operation_LabelsEntryDefaultTypeInternal;
extern Operation_LabelsEntryDefaultTypeInternal _Operation_LabelsEntry_default_instance_;
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google

namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {

namespace protobuf_google_2fapi_2fservicecontrol_2fv1_2foperation_2eproto {
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
}  // namespace protobuf_google_2fapi_2fservicecontrol_2fv1_2foperation_2eproto

enum Operation_Importance {
  Operation_Importance_LOW = 0,
  Operation_Importance_HIGH = 1,
  Operation_Importance_Operation_Importance_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Operation_Importance_Operation_Importance_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Operation_Importance_IsValid(int value);
const Operation_Importance Operation_Importance_Importance_MIN = Operation_Importance_LOW;
const Operation_Importance Operation_Importance_Importance_MAX = Operation_Importance_HIGH;
const int Operation_Importance_Importance_ARRAYSIZE = Operation_Importance_Importance_MAX + 1;

const ::google::protobuf::EnumDescriptor* Operation_Importance_descriptor();
inline const ::std::string& Operation_Importance_Name(Operation_Importance value) {
  return ::google::protobuf::internal::NameOfEnum(
    Operation_Importance_descriptor(), value);
}
inline bool Operation_Importance_Parse(
    const ::std::string& name, Operation_Importance* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Operation_Importance>(
    Operation_Importance_descriptor(), name, value);
}
// ===================================================================


// -------------------------------------------------------------------

class Operation : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.servicecontrol.v1.Operation) */ {
 public:
  Operation();
  virtual ~Operation();

  Operation(const Operation& from);

  inline Operation& operator=(const Operation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Operation(Operation&& from) noexcept
    : Operation() {
    *this = ::std::move(from);
  }

  inline Operation& operator=(Operation&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Operation& default_instance();

  static inline const Operation* internal_default_instance() {
    return reinterpret_cast<const Operation*>(
               &_Operation_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(Operation* other);
  void Swap(Operation* other);
  friend void swap(Operation& a, Operation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Operation* New() const PROTOBUF_FINAL { return New(NULL); }

  Operation* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Operation& from);
  void MergeFrom(const Operation& from);
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
  void InternalSwap(Operation* other);
  protected:
  explicit Operation(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  typedef Operation_Importance Importance;
  static const Importance LOW =
    Operation_Importance_LOW;
  static const Importance HIGH =
    Operation_Importance_HIGH;
  static inline bool Importance_IsValid(int value) {
    return Operation_Importance_IsValid(value);
  }
  static const Importance Importance_MIN =
    Operation_Importance_Importance_MIN;
  static const Importance Importance_MAX =
    Operation_Importance_Importance_MAX;
  static const int Importance_ARRAYSIZE =
    Operation_Importance_Importance_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Importance_descriptor() {
    return Operation_Importance_descriptor();
  }
  static inline const ::std::string& Importance_Name(Importance value) {
    return Operation_Importance_Name(value);
  }
  static inline bool Importance_Parse(const ::std::string& name,
      Importance* value) {
    return Operation_Importance_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // map<string, string> labels = 6;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 6;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      labels() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_labels();

  // repeated .google.api.servicecontrol.v1.MetricValueSet metric_value_sets = 7;
  int metric_value_sets_size() const;
  void clear_metric_value_sets();
  static const int kMetricValueSetsFieldNumber = 7;
  const ::google::api::servicecontrol::v1::MetricValueSet& metric_value_sets(int index) const;
  ::google::api::servicecontrol::v1::MetricValueSet* mutable_metric_value_sets(int index);
  ::google::api::servicecontrol::v1::MetricValueSet* add_metric_value_sets();
  ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::MetricValueSet >*
      mutable_metric_value_sets();
  const ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::MetricValueSet >&
      metric_value_sets() const;

  // repeated .google.api.servicecontrol.v1.LogEntry log_entries = 8;
  int log_entries_size() const;
  void clear_log_entries();
  static const int kLogEntriesFieldNumber = 8;
  const ::google::api::servicecontrol::v1::LogEntry& log_entries(int index) const;
  ::google::api::servicecontrol::v1::LogEntry* mutable_log_entries(int index);
  ::google::api::servicecontrol::v1::LogEntry* add_log_entries();
  ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::LogEntry >*
      mutable_log_entries();
  const ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::LogEntry >&
      log_entries() const;

  // string operation_id = 1;
  void clear_operation_id();
  static const int kOperationIdFieldNumber = 1;
  const ::std::string& operation_id() const;
  void set_operation_id(const ::std::string& value);
  #if LANG_CXX11
  void set_operation_id(::std::string&& value);
  #endif
  void set_operation_id(const char* value);
  void set_operation_id(const char* value, size_t size);
  ::std::string* mutable_operation_id();
  ::std::string* release_operation_id();
  void set_allocated_operation_id(::std::string* operation_id);
  ::std::string* unsafe_arena_release_operation_id();
  void unsafe_arena_set_allocated_operation_id(
      ::std::string* operation_id);

  // string operation_name = 2;
  void clear_operation_name();
  static const int kOperationNameFieldNumber = 2;
  const ::std::string& operation_name() const;
  void set_operation_name(const ::std::string& value);
  #if LANG_CXX11
  void set_operation_name(::std::string&& value);
  #endif
  void set_operation_name(const char* value);
  void set_operation_name(const char* value, size_t size);
  ::std::string* mutable_operation_name();
  ::std::string* release_operation_name();
  void set_allocated_operation_name(::std::string* operation_name);
  ::std::string* unsafe_arena_release_operation_name();
  void unsafe_arena_set_allocated_operation_name(
      ::std::string* operation_name);

  // string consumer_id = 3;
  void clear_consumer_id();
  static const int kConsumerIdFieldNumber = 3;
  const ::std::string& consumer_id() const;
  void set_consumer_id(const ::std::string& value);
  #if LANG_CXX11
  void set_consumer_id(::std::string&& value);
  #endif
  void set_consumer_id(const char* value);
  void set_consumer_id(const char* value, size_t size);
  ::std::string* mutable_consumer_id();
  ::std::string* release_consumer_id();
  void set_allocated_consumer_id(::std::string* consumer_id);
  ::std::string* unsafe_arena_release_consumer_id();
  void unsafe_arena_set_allocated_consumer_id(
      ::std::string* consumer_id);

  // .google.protobuf.Timestamp start_time = 4;
  bool has_start_time() const;
  void clear_start_time();
  static const int kStartTimeFieldNumber = 4;
  private:
  void _slow_mutable_start_time();
  void _slow_set_allocated_start_time(
      ::google::protobuf::Arena* message_arena, ::google::protobuf::Timestamp** start_time);
  ::google::protobuf::Timestamp* _slow_release_start_time();
  public:
  const ::google::protobuf::Timestamp& start_time() const;
  ::google::protobuf::Timestamp* mutable_start_time();
  ::google::protobuf::Timestamp* release_start_time();
  void set_allocated_start_time(::google::protobuf::Timestamp* start_time);
  ::google::protobuf::Timestamp* unsafe_arena_release_start_time();
  void unsafe_arena_set_allocated_start_time(
      ::google::protobuf::Timestamp* start_time);

  // .google.protobuf.Timestamp end_time = 5;
  bool has_end_time() const;
  void clear_end_time();
  static const int kEndTimeFieldNumber = 5;
  private:
  void _slow_mutable_end_time();
  void _slow_set_allocated_end_time(
      ::google::protobuf::Arena* message_arena, ::google::protobuf::Timestamp** end_time);
  ::google::protobuf::Timestamp* _slow_release_end_time();
  public:
  const ::google::protobuf::Timestamp& end_time() const;
  ::google::protobuf::Timestamp* mutable_end_time();
  ::google::protobuf::Timestamp* release_end_time();
  void set_allocated_end_time(::google::protobuf::Timestamp* end_time);
  ::google::protobuf::Timestamp* unsafe_arena_release_end_time();
  void unsafe_arena_set_allocated_end_time(
      ::google::protobuf::Timestamp* end_time);

  // .google.api.servicecontrol.v1.Operation.Importance importance = 11;
  void clear_importance();
  static const int kImportanceFieldNumber = 11;
  ::google::api::servicecontrol::v1::Operation_Importance importance() const;
  void set_importance(::google::api::servicecontrol::v1::Operation_Importance value);

  // @@protoc_insertion_point(class_scope:google.api.servicecontrol.v1.Operation)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  public:
  class Operation_LabelsEntry : public ::google::protobuf::internal::MapEntry<Operation_LabelsEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<Operation_LabelsEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > SuperType;
    Operation_LabelsEntry();
    Operation_LabelsEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const Operation_LabelsEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_Operation_LabelsEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      Operation_LabelsEntry,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > labels_;
  private:
  ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::MetricValueSet > metric_value_sets_;
  ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::LogEntry > log_entries_;
  ::google::protobuf::internal::ArenaStringPtr operation_id_;
  ::google::protobuf::internal::ArenaStringPtr operation_name_;
  ::google::protobuf::internal::ArenaStringPtr consumer_id_;
  ::google::protobuf::Timestamp* start_time_;
  ::google::protobuf::Timestamp* end_time_;
  int importance_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fapi_2fservicecontrol_2fv1_2foperation_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Operation

// string operation_id = 1;
inline void Operation::clear_operation_id() {
  operation_id_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& Operation::operation_id() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.Operation.operation_id)
  return operation_id_.Get();
}
inline void Operation::set_operation_id(const ::std::string& value) {
  
  operation_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.Operation.operation_id)
}
#if LANG_CXX11
inline void Operation::set_operation_id(::std::string&& value) {
  
  operation_id_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.servicecontrol.v1.Operation.operation_id)
}
#endif
inline void Operation::set_operation_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  operation_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.servicecontrol.v1.Operation.operation_id)
}
inline void Operation::set_operation_id(const char* value,
    size_t size) {
  
  operation_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.servicecontrol.v1.Operation.operation_id)
}
inline ::std::string* Operation::mutable_operation_id() {
  
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.Operation.operation_id)
  return operation_id_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* Operation::release_operation_id() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.Operation.operation_id)
  
  return operation_id_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* Operation::unsafe_arena_release_operation_id() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.servicecontrol.v1.Operation.operation_id)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return operation_id_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void Operation::set_allocated_operation_id(::std::string* operation_id) {
  if (operation_id != NULL) {
    
  } else {
    
  }
  operation_id_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), operation_id,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.Operation.operation_id)
}
inline void Operation::unsafe_arena_set_allocated_operation_id(
    ::std::string* operation_id) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (operation_id != NULL) {
    
  } else {
    
  }
  operation_id_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      operation_id, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.servicecontrol.v1.Operation.operation_id)
}

// string operation_name = 2;
inline void Operation::clear_operation_name() {
  operation_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& Operation::operation_name() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.Operation.operation_name)
  return operation_name_.Get();
}
inline void Operation::set_operation_name(const ::std::string& value) {
  
  operation_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.Operation.operation_name)
}
#if LANG_CXX11
inline void Operation::set_operation_name(::std::string&& value) {
  
  operation_name_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.servicecontrol.v1.Operation.operation_name)
}
#endif
inline void Operation::set_operation_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  operation_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.servicecontrol.v1.Operation.operation_name)
}
inline void Operation::set_operation_name(const char* value,
    size_t size) {
  
  operation_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.servicecontrol.v1.Operation.operation_name)
}
inline ::std::string* Operation::mutable_operation_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.Operation.operation_name)
  return operation_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* Operation::release_operation_name() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.Operation.operation_name)
  
  return operation_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* Operation::unsafe_arena_release_operation_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.servicecontrol.v1.Operation.operation_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return operation_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void Operation::set_allocated_operation_name(::std::string* operation_name) {
  if (operation_name != NULL) {
    
  } else {
    
  }
  operation_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), operation_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.Operation.operation_name)
}
inline void Operation::unsafe_arena_set_allocated_operation_name(
    ::std::string* operation_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (operation_name != NULL) {
    
  } else {
    
  }
  operation_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      operation_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.servicecontrol.v1.Operation.operation_name)
}

// string consumer_id = 3;
inline void Operation::clear_consumer_id() {
  consumer_id_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& Operation::consumer_id() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.Operation.consumer_id)
  return consumer_id_.Get();
}
inline void Operation::set_consumer_id(const ::std::string& value) {
  
  consumer_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.Operation.consumer_id)
}
#if LANG_CXX11
inline void Operation::set_consumer_id(::std::string&& value) {
  
  consumer_id_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.servicecontrol.v1.Operation.consumer_id)
}
#endif
inline void Operation::set_consumer_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  consumer_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.servicecontrol.v1.Operation.consumer_id)
}
inline void Operation::set_consumer_id(const char* value,
    size_t size) {
  
  consumer_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.servicecontrol.v1.Operation.consumer_id)
}
inline ::std::string* Operation::mutable_consumer_id() {
  
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.Operation.consumer_id)
  return consumer_id_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* Operation::release_consumer_id() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.Operation.consumer_id)
  
  return consumer_id_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* Operation::unsafe_arena_release_consumer_id() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.servicecontrol.v1.Operation.consumer_id)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return consumer_id_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void Operation::set_allocated_consumer_id(::std::string* consumer_id) {
  if (consumer_id != NULL) {
    
  } else {
    
  }
  consumer_id_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), consumer_id,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.Operation.consumer_id)
}
inline void Operation::unsafe_arena_set_allocated_consumer_id(
    ::std::string* consumer_id) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (consumer_id != NULL) {
    
  } else {
    
  }
  consumer_id_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      consumer_id, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.servicecontrol.v1.Operation.consumer_id)
}

// .google.protobuf.Timestamp start_time = 4;
inline bool Operation::has_start_time() const {
  return this != internal_default_instance() && start_time_ != NULL;
}
inline void Operation::clear_start_time() {
  if (GetArenaNoVirtual() == NULL && start_time_ != NULL) delete start_time_;
  start_time_ = NULL;
}
inline const ::google::protobuf::Timestamp& Operation::start_time() const {
  const ::google::protobuf::Timestamp* p = start_time_;
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.Operation.start_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* Operation::mutable_start_time() {
  
  if (start_time_ == NULL) {
    _slow_mutable_start_time();
  }
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.Operation.start_time)
  return start_time_;
}
inline ::google::protobuf::Timestamp* Operation::release_start_time() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.Operation.start_time)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_start_time();
  } else {
    ::google::protobuf::Timestamp* temp = start_time_;
    start_time_ = NULL;
    return temp;
  }
}
inline  void Operation::set_allocated_start_time(::google::protobuf::Timestamp* start_time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete start_time_;
  }
  if (start_time != NULL) {
    _slow_set_allocated_start_time(message_arena, &start_time);
  }
  start_time_ = start_time;
  if (start_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.Operation.start_time)
}

// .google.protobuf.Timestamp end_time = 5;
inline bool Operation::has_end_time() const {
  return this != internal_default_instance() && end_time_ != NULL;
}
inline void Operation::clear_end_time() {
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) delete end_time_;
  end_time_ = NULL;
}
inline const ::google::protobuf::Timestamp& Operation::end_time() const {
  const ::google::protobuf::Timestamp* p = end_time_;
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.Operation.end_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* Operation::mutable_end_time() {
  
  if (end_time_ == NULL) {
    _slow_mutable_end_time();
  }
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.Operation.end_time)
  return end_time_;
}
inline ::google::protobuf::Timestamp* Operation::release_end_time() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.Operation.end_time)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_end_time();
  } else {
    ::google::protobuf::Timestamp* temp = end_time_;
    end_time_ = NULL;
    return temp;
  }
}
inline  void Operation::set_allocated_end_time(::google::protobuf::Timestamp* end_time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete end_time_;
  }
  if (end_time != NULL) {
    _slow_set_allocated_end_time(message_arena, &end_time);
  }
  end_time_ = end_time;
  if (end_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.Operation.end_time)
}

// map<string, string> labels = 6;
inline int Operation::labels_size() const {
  return labels_.size();
}
inline void Operation::clear_labels() {
  labels_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
Operation::labels() const {
  // @@protoc_insertion_point(field_map:google.api.servicecontrol.v1.Operation.labels)
  return labels_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
Operation::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_map:google.api.servicecontrol.v1.Operation.labels)
  return labels_.MutableMap();
}

// repeated .google.api.servicecontrol.v1.MetricValueSet metric_value_sets = 7;
inline int Operation::metric_value_sets_size() const {
  return metric_value_sets_.size();
}
inline void Operation::clear_metric_value_sets() {
  metric_value_sets_.Clear();
}
inline const ::google::api::servicecontrol::v1::MetricValueSet& Operation::metric_value_sets(int index) const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.Operation.metric_value_sets)
  return metric_value_sets_.Get(index);
}
inline ::google::api::servicecontrol::v1::MetricValueSet* Operation::mutable_metric_value_sets(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.Operation.metric_value_sets)
  return metric_value_sets_.Mutable(index);
}
inline ::google::api::servicecontrol::v1::MetricValueSet* Operation::add_metric_value_sets() {
  // @@protoc_insertion_point(field_add:google.api.servicecontrol.v1.Operation.metric_value_sets)
  return metric_value_sets_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::MetricValueSet >*
Operation::mutable_metric_value_sets() {
  // @@protoc_insertion_point(field_mutable_list:google.api.servicecontrol.v1.Operation.metric_value_sets)
  return &metric_value_sets_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::MetricValueSet >&
Operation::metric_value_sets() const {
  // @@protoc_insertion_point(field_list:google.api.servicecontrol.v1.Operation.metric_value_sets)
  return metric_value_sets_;
}

// repeated .google.api.servicecontrol.v1.LogEntry log_entries = 8;
inline int Operation::log_entries_size() const {
  return log_entries_.size();
}
inline void Operation::clear_log_entries() {
  log_entries_.Clear();
}
inline const ::google::api::servicecontrol::v1::LogEntry& Operation::log_entries(int index) const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.Operation.log_entries)
  return log_entries_.Get(index);
}
inline ::google::api::servicecontrol::v1::LogEntry* Operation::mutable_log_entries(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.Operation.log_entries)
  return log_entries_.Mutable(index);
}
inline ::google::api::servicecontrol::v1::LogEntry* Operation::add_log_entries() {
  // @@protoc_insertion_point(field_add:google.api.servicecontrol.v1.Operation.log_entries)
  return log_entries_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::LogEntry >*
Operation::mutable_log_entries() {
  // @@protoc_insertion_point(field_mutable_list:google.api.servicecontrol.v1.Operation.log_entries)
  return &log_entries_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::servicecontrol::v1::LogEntry >&
Operation::log_entries() const {
  // @@protoc_insertion_point(field_list:google.api.servicecontrol.v1.Operation.log_entries)
  return log_entries_;
}

// .google.api.servicecontrol.v1.Operation.Importance importance = 11;
inline void Operation::clear_importance() {
  importance_ = 0;
}
inline ::google::api::servicecontrol::v1::Operation_Importance Operation::importance() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.Operation.importance)
  return static_cast< ::google::api::servicecontrol::v1::Operation_Importance >(importance_);
}
inline void Operation::set_importance(::google::api::servicecontrol::v1::Operation_Importance value) {
  
  importance_ = value;
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.Operation.importance)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::api::servicecontrol::v1::Operation_Importance> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::servicecontrol::v1::Operation_Importance>() {
  return ::google::api::servicecontrol::v1::Operation_Importance_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fservicecontrol_2fv1_2foperation_2eproto__INCLUDED
