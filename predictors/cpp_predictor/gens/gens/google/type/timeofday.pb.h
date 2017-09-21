// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/timeofday.proto

#ifndef PROTOBUF_google_2ftype_2ftimeofday_2eproto__INCLUDED
#define PROTOBUF_google_2ftype_2ftimeofday_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace google {
namespace type {
class TimeOfDay;
class TimeOfDayDefaultTypeInternal;
extern TimeOfDayDefaultTypeInternal _TimeOfDay_default_instance_;
}  // namespace type
}  // namespace google

namespace google {
namespace type {

namespace protobuf_google_2ftype_2ftimeofday_2eproto {
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
}  // namespace protobuf_google_2ftype_2ftimeofday_2eproto

// ===================================================================

class TimeOfDay : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.type.TimeOfDay) */ {
 public:
  TimeOfDay();
  virtual ~TimeOfDay();

  TimeOfDay(const TimeOfDay& from);

  inline TimeOfDay& operator=(const TimeOfDay& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TimeOfDay(TimeOfDay&& from) noexcept
    : TimeOfDay() {
    *this = ::std::move(from);
  }

  inline TimeOfDay& operator=(TimeOfDay&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TimeOfDay& default_instance();

  static inline const TimeOfDay* internal_default_instance() {
    return reinterpret_cast<const TimeOfDay*>(
               &_TimeOfDay_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(TimeOfDay* other);
  friend void swap(TimeOfDay& a, TimeOfDay& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TimeOfDay* New() const PROTOBUF_FINAL { return New(NULL); }

  TimeOfDay* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TimeOfDay& from);
  void MergeFrom(const TimeOfDay& from);
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
  void InternalSwap(TimeOfDay* other);
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

  // int32 hours = 1;
  void clear_hours();
  static const int kHoursFieldNumber = 1;
  ::google::protobuf::int32 hours() const;
  void set_hours(::google::protobuf::int32 value);

  // int32 minutes = 2;
  void clear_minutes();
  static const int kMinutesFieldNumber = 2;
  ::google::protobuf::int32 minutes() const;
  void set_minutes(::google::protobuf::int32 value);

  // int32 seconds = 3;
  void clear_seconds();
  static const int kSecondsFieldNumber = 3;
  ::google::protobuf::int32 seconds() const;
  void set_seconds(::google::protobuf::int32 value);

  // int32 nanos = 4;
  void clear_nanos();
  static const int kNanosFieldNumber = 4;
  ::google::protobuf::int32 nanos() const;
  void set_nanos(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:google.type.TimeOfDay)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 hours_;
  ::google::protobuf::int32 minutes_;
  ::google::protobuf::int32 seconds_;
  ::google::protobuf::int32 nanos_;
  mutable int _cached_size_;
  friend struct protobuf_google_2ftype_2ftimeofday_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TimeOfDay

// int32 hours = 1;
inline void TimeOfDay::clear_hours() {
  hours_ = 0;
}
inline ::google::protobuf::int32 TimeOfDay::hours() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.hours)
  return hours_;
}
inline void TimeOfDay::set_hours(::google::protobuf::int32 value) {
  
  hours_ = value;
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.hours)
}

// int32 minutes = 2;
inline void TimeOfDay::clear_minutes() {
  minutes_ = 0;
}
inline ::google::protobuf::int32 TimeOfDay::minutes() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.minutes)
  return minutes_;
}
inline void TimeOfDay::set_minutes(::google::protobuf::int32 value) {
  
  minutes_ = value;
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.minutes)
}

// int32 seconds = 3;
inline void TimeOfDay::clear_seconds() {
  seconds_ = 0;
}
inline ::google::protobuf::int32 TimeOfDay::seconds() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.seconds)
  return seconds_;
}
inline void TimeOfDay::set_seconds(::google::protobuf::int32 value) {
  
  seconds_ = value;
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.seconds)
}

// int32 nanos = 4;
inline void TimeOfDay::clear_nanos() {
  nanos_ = 0;
}
inline ::google::protobuf::int32 TimeOfDay::nanos() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.nanos)
  return nanos_;
}
inline void TimeOfDay::set_nanos(::google::protobuf::int32 value) {
  
  nanos_ = value;
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.nanos)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2ftype_2ftimeofday_2eproto__INCLUDED
