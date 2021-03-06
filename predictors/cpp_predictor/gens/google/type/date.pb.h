// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/date.proto

#ifndef PROTOBUF_google_2ftype_2fdate_2eproto__INCLUDED
#define PROTOBUF_google_2ftype_2fdate_2eproto__INCLUDED

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
class Date;
class DateDefaultTypeInternal;
extern DateDefaultTypeInternal _Date_default_instance_;
}  // namespace type
}  // namespace google

namespace google {
namespace type {

namespace protobuf_google_2ftype_2fdate_2eproto {
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
}  // namespace protobuf_google_2ftype_2fdate_2eproto

// ===================================================================

class Date : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.type.Date) */ {
 public:
  Date();
  virtual ~Date();

  Date(const Date& from);

  inline Date& operator=(const Date& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Date(Date&& from) noexcept
    : Date() {
    *this = ::std::move(from);
  }

  inline Date& operator=(Date&& from) noexcept {
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
  static const Date& default_instance();

  static inline const Date* internal_default_instance() {
    return reinterpret_cast<const Date*>(
               &_Date_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(Date* other);
  void Swap(Date* other);
  friend void swap(Date& a, Date& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Date* New() const PROTOBUF_FINAL { return New(NULL); }

  Date* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Date& from);
  void MergeFrom(const Date& from);
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
  void InternalSwap(Date* other);
  protected:
  explicit Date(::google::protobuf::Arena* arena);
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

  // accessors -------------------------------------------------------

  // int32 year = 1;
  void clear_year();
  static const int kYearFieldNumber = 1;
  ::google::protobuf::int32 year() const;
  void set_year(::google::protobuf::int32 value);

  // int32 month = 2;
  void clear_month();
  static const int kMonthFieldNumber = 2;
  ::google::protobuf::int32 month() const;
  void set_month(::google::protobuf::int32 value);

  // int32 day = 3;
  void clear_day();
  static const int kDayFieldNumber = 3;
  ::google::protobuf::int32 day() const;
  void set_day(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:google.type.Date)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::int32 year_;
  ::google::protobuf::int32 month_;
  ::google::protobuf::int32 day_;
  mutable int _cached_size_;
  friend struct protobuf_google_2ftype_2fdate_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Date

// int32 year = 1;
inline void Date::clear_year() {
  year_ = 0;
}
inline ::google::protobuf::int32 Date::year() const {
  // @@protoc_insertion_point(field_get:google.type.Date.year)
  return year_;
}
inline void Date::set_year(::google::protobuf::int32 value) {
  
  year_ = value;
  // @@protoc_insertion_point(field_set:google.type.Date.year)
}

// int32 month = 2;
inline void Date::clear_month() {
  month_ = 0;
}
inline ::google::protobuf::int32 Date::month() const {
  // @@protoc_insertion_point(field_get:google.type.Date.month)
  return month_;
}
inline void Date::set_month(::google::protobuf::int32 value) {
  
  month_ = value;
  // @@protoc_insertion_point(field_set:google.type.Date.month)
}

// int32 day = 3;
inline void Date::clear_day() {
  day_ = 0;
}
inline ::google::protobuf::int32 Date::day() const {
  // @@protoc_insertion_point(field_get:google.type.Date.day)
  return day_;
}
inline void Date::set_day(::google::protobuf::int32 value) {
  
  day_ = value;
  // @@protoc_insertion_point(field_set:google.type.Date.day)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2ftype_2fdate_2eproto__INCLUDED
