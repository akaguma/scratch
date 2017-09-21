// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/genomics/v1/readgroupset.proto

#ifndef PROTOBUF_google_2fgenomics_2fv1_2freadgroupset_2eproto__INCLUDED
#define PROTOBUF_google_2fgenomics_2fv1_2freadgroupset_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/genomics/v1/readgroup.pb.h"
#include <google/protobuf/struct.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace genomics {
namespace v1 {
class ReadGroupSet;
class ReadGroupSetDefaultTypeInternal;
extern ReadGroupSetDefaultTypeInternal _ReadGroupSet_default_instance_;
class ReadGroupSet_InfoEntry;
class ReadGroupSet_InfoEntryDefaultTypeInternal;
extern ReadGroupSet_InfoEntryDefaultTypeInternal _ReadGroupSet_InfoEntry_default_instance_;
}  // namespace v1
}  // namespace genomics
}  // namespace google

namespace google {
namespace genomics {
namespace v1 {

namespace protobuf_google_2fgenomics_2fv1_2freadgroupset_2eproto {
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
}  // namespace protobuf_google_2fgenomics_2fv1_2freadgroupset_2eproto

// ===================================================================


// -------------------------------------------------------------------

class ReadGroupSet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.genomics.v1.ReadGroupSet) */ {
 public:
  ReadGroupSet();
  virtual ~ReadGroupSet();

  ReadGroupSet(const ReadGroupSet& from);

  inline ReadGroupSet& operator=(const ReadGroupSet& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ReadGroupSet(ReadGroupSet&& from) noexcept
    : ReadGroupSet() {
    *this = ::std::move(from);
  }

  inline ReadGroupSet& operator=(ReadGroupSet&& from) noexcept {
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
  static const ReadGroupSet& default_instance();

  static inline const ReadGroupSet* internal_default_instance() {
    return reinterpret_cast<const ReadGroupSet*>(
               &_ReadGroupSet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(ReadGroupSet* other);
  void Swap(ReadGroupSet* other);
  friend void swap(ReadGroupSet& a, ReadGroupSet& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ReadGroupSet* New() const PROTOBUF_FINAL { return New(NULL); }

  ReadGroupSet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ReadGroupSet& from);
  void MergeFrom(const ReadGroupSet& from);
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
  void InternalSwap(ReadGroupSet* other);
  protected:
  explicit ReadGroupSet(::google::protobuf::Arena* arena);
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

  // repeated .google.genomics.v1.ReadGroup read_groups = 6;
  int read_groups_size() const;
  void clear_read_groups();
  static const int kReadGroupsFieldNumber = 6;
  const ::google::genomics::v1::ReadGroup& read_groups(int index) const;
  ::google::genomics::v1::ReadGroup* mutable_read_groups(int index);
  ::google::genomics::v1::ReadGroup* add_read_groups();
  ::google::protobuf::RepeatedPtrField< ::google::genomics::v1::ReadGroup >*
      mutable_read_groups();
  const ::google::protobuf::RepeatedPtrField< ::google::genomics::v1::ReadGroup >&
      read_groups() const;

  // map<string, .google.protobuf.ListValue> info = 7;
  int info_size() const;
  void clear_info();
  static const int kInfoFieldNumber = 7;
  const ::google::protobuf::Map< ::std::string, ::google::protobuf::ListValue >&
      info() const;
  ::google::protobuf::Map< ::std::string, ::google::protobuf::ListValue >*
      mutable_info();

  // string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);
  ::std::string* unsafe_arena_release_id();
  void unsafe_arena_set_allocated_id(
      ::std::string* id);

  // string dataset_id = 2;
  void clear_dataset_id();
  static const int kDatasetIdFieldNumber = 2;
  const ::std::string& dataset_id() const;
  void set_dataset_id(const ::std::string& value);
  #if LANG_CXX11
  void set_dataset_id(::std::string&& value);
  #endif
  void set_dataset_id(const char* value);
  void set_dataset_id(const char* value, size_t size);
  ::std::string* mutable_dataset_id();
  ::std::string* release_dataset_id();
  void set_allocated_dataset_id(::std::string* dataset_id);
  ::std::string* unsafe_arena_release_dataset_id();
  void unsafe_arena_set_allocated_dataset_id(
      ::std::string* dataset_id);

  // string reference_set_id = 3;
  void clear_reference_set_id();
  static const int kReferenceSetIdFieldNumber = 3;
  const ::std::string& reference_set_id() const;
  void set_reference_set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_reference_set_id(::std::string&& value);
  #endif
  void set_reference_set_id(const char* value);
  void set_reference_set_id(const char* value, size_t size);
  ::std::string* mutable_reference_set_id();
  ::std::string* release_reference_set_id();
  void set_allocated_reference_set_id(::std::string* reference_set_id);
  ::std::string* unsafe_arena_release_reference_set_id();
  void unsafe_arena_set_allocated_reference_set_id(
      ::std::string* reference_set_id);

  // string name = 4;
  void clear_name();
  static const int kNameFieldNumber = 4;
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
  ::std::string* unsafe_arena_release_name();
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // string filename = 5;
  void clear_filename();
  static const int kFilenameFieldNumber = 5;
  const ::std::string& filename() const;
  void set_filename(const ::std::string& value);
  #if LANG_CXX11
  void set_filename(::std::string&& value);
  #endif
  void set_filename(const char* value);
  void set_filename(const char* value, size_t size);
  ::std::string* mutable_filename();
  ::std::string* release_filename();
  void set_allocated_filename(::std::string* filename);
  ::std::string* unsafe_arena_release_filename();
  void unsafe_arena_set_allocated_filename(
      ::std::string* filename);

  // @@protoc_insertion_point(class_scope:google.genomics.v1.ReadGroupSet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::google::genomics::v1::ReadGroup > read_groups_;
  public:
  class ReadGroupSet_InfoEntry : public ::google::protobuf::internal::MapEntry<ReadGroupSet_InfoEntry, 
      ::std::string, ::google::protobuf::ListValue,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<ReadGroupSet_InfoEntry, 
      ::std::string, ::google::protobuf::ListValue,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > SuperType;
    ReadGroupSet_InfoEntry();
    ReadGroupSet_InfoEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const ReadGroupSet_InfoEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_ReadGroupSet_InfoEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      ReadGroupSet_InfoEntry,
      ::std::string, ::google::protobuf::ListValue,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > info_;
  private:
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr dataset_id_;
  ::google::protobuf::internal::ArenaStringPtr reference_set_id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr filename_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fgenomics_2fv1_2freadgroupset_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ReadGroupSet

// string id = 1;
inline void ReadGroupSet::clear_id() {
  id_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ReadGroupSet::id() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.ReadGroupSet.id)
  return id_.Get();
}
inline void ReadGroupSet::set_id(const ::std::string& value) {
  
  id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.genomics.v1.ReadGroupSet.id)
}
#if LANG_CXX11
inline void ReadGroupSet::set_id(::std::string&& value) {
  
  id_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.genomics.v1.ReadGroupSet.id)
}
#endif
inline void ReadGroupSet::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.genomics.v1.ReadGroupSet.id)
}
inline void ReadGroupSet::set_id(const char* value,
    size_t size) {
  
  id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.genomics.v1.ReadGroupSet.id)
}
inline ::std::string* ReadGroupSet::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.ReadGroupSet.id)
  return id_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::release_id() {
  // @@protoc_insertion_point(field_release:google.genomics.v1.ReadGroupSet.id)
  
  return id_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::unsafe_arena_release_id() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.genomics.v1.ReadGroupSet.id)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return id_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ReadGroupSet::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.genomics.v1.ReadGroupSet.id)
}
inline void ReadGroupSet::unsafe_arena_set_allocated_id(
    ::std::string* id) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (id != NULL) {
    
  } else {
    
  }
  id_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      id, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.genomics.v1.ReadGroupSet.id)
}

// string dataset_id = 2;
inline void ReadGroupSet::clear_dataset_id() {
  dataset_id_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ReadGroupSet::dataset_id() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.ReadGroupSet.dataset_id)
  return dataset_id_.Get();
}
inline void ReadGroupSet::set_dataset_id(const ::std::string& value) {
  
  dataset_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.genomics.v1.ReadGroupSet.dataset_id)
}
#if LANG_CXX11
inline void ReadGroupSet::set_dataset_id(::std::string&& value) {
  
  dataset_id_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.genomics.v1.ReadGroupSet.dataset_id)
}
#endif
inline void ReadGroupSet::set_dataset_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  dataset_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.genomics.v1.ReadGroupSet.dataset_id)
}
inline void ReadGroupSet::set_dataset_id(const char* value,
    size_t size) {
  
  dataset_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.genomics.v1.ReadGroupSet.dataset_id)
}
inline ::std::string* ReadGroupSet::mutable_dataset_id() {
  
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.ReadGroupSet.dataset_id)
  return dataset_id_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::release_dataset_id() {
  // @@protoc_insertion_point(field_release:google.genomics.v1.ReadGroupSet.dataset_id)
  
  return dataset_id_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::unsafe_arena_release_dataset_id() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.genomics.v1.ReadGroupSet.dataset_id)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return dataset_id_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ReadGroupSet::set_allocated_dataset_id(::std::string* dataset_id) {
  if (dataset_id != NULL) {
    
  } else {
    
  }
  dataset_id_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dataset_id,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.genomics.v1.ReadGroupSet.dataset_id)
}
inline void ReadGroupSet::unsafe_arena_set_allocated_dataset_id(
    ::std::string* dataset_id) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (dataset_id != NULL) {
    
  } else {
    
  }
  dataset_id_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      dataset_id, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.genomics.v1.ReadGroupSet.dataset_id)
}

// string reference_set_id = 3;
inline void ReadGroupSet::clear_reference_set_id() {
  reference_set_id_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ReadGroupSet::reference_set_id() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.ReadGroupSet.reference_set_id)
  return reference_set_id_.Get();
}
inline void ReadGroupSet::set_reference_set_id(const ::std::string& value) {
  
  reference_set_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.genomics.v1.ReadGroupSet.reference_set_id)
}
#if LANG_CXX11
inline void ReadGroupSet::set_reference_set_id(::std::string&& value) {
  
  reference_set_id_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.genomics.v1.ReadGroupSet.reference_set_id)
}
#endif
inline void ReadGroupSet::set_reference_set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  reference_set_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.genomics.v1.ReadGroupSet.reference_set_id)
}
inline void ReadGroupSet::set_reference_set_id(const char* value,
    size_t size) {
  
  reference_set_id_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.genomics.v1.ReadGroupSet.reference_set_id)
}
inline ::std::string* ReadGroupSet::mutable_reference_set_id() {
  
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.ReadGroupSet.reference_set_id)
  return reference_set_id_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::release_reference_set_id() {
  // @@protoc_insertion_point(field_release:google.genomics.v1.ReadGroupSet.reference_set_id)
  
  return reference_set_id_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::unsafe_arena_release_reference_set_id() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.genomics.v1.ReadGroupSet.reference_set_id)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return reference_set_id_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ReadGroupSet::set_allocated_reference_set_id(::std::string* reference_set_id) {
  if (reference_set_id != NULL) {
    
  } else {
    
  }
  reference_set_id_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reference_set_id,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.genomics.v1.ReadGroupSet.reference_set_id)
}
inline void ReadGroupSet::unsafe_arena_set_allocated_reference_set_id(
    ::std::string* reference_set_id) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (reference_set_id != NULL) {
    
  } else {
    
  }
  reference_set_id_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      reference_set_id, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.genomics.v1.ReadGroupSet.reference_set_id)
}

// string name = 4;
inline void ReadGroupSet::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ReadGroupSet::name() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.ReadGroupSet.name)
  return name_.Get();
}
inline void ReadGroupSet::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.genomics.v1.ReadGroupSet.name)
}
#if LANG_CXX11
inline void ReadGroupSet::set_name(::std::string&& value) {
  
  name_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.genomics.v1.ReadGroupSet.name)
}
#endif
inline void ReadGroupSet::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.genomics.v1.ReadGroupSet.name)
}
inline void ReadGroupSet::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.genomics.v1.ReadGroupSet.name)
}
inline ::std::string* ReadGroupSet::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.ReadGroupSet.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::release_name() {
  // @@protoc_insertion_point(field_release:google.genomics.v1.ReadGroupSet.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.genomics.v1.ReadGroupSet.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ReadGroupSet::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.genomics.v1.ReadGroupSet.name)
}
inline void ReadGroupSet::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.genomics.v1.ReadGroupSet.name)
}

// string filename = 5;
inline void ReadGroupSet::clear_filename() {
  filename_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ReadGroupSet::filename() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.ReadGroupSet.filename)
  return filename_.Get();
}
inline void ReadGroupSet::set_filename(const ::std::string& value) {
  
  filename_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.genomics.v1.ReadGroupSet.filename)
}
#if LANG_CXX11
inline void ReadGroupSet::set_filename(::std::string&& value) {
  
  filename_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.genomics.v1.ReadGroupSet.filename)
}
#endif
inline void ReadGroupSet::set_filename(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  filename_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.genomics.v1.ReadGroupSet.filename)
}
inline void ReadGroupSet::set_filename(const char* value,
    size_t size) {
  
  filename_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.genomics.v1.ReadGroupSet.filename)
}
inline ::std::string* ReadGroupSet::mutable_filename() {
  
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.ReadGroupSet.filename)
  return filename_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::release_filename() {
  // @@protoc_insertion_point(field_release:google.genomics.v1.ReadGroupSet.filename)
  
  return filename_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReadGroupSet::unsafe_arena_release_filename() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.genomics.v1.ReadGroupSet.filename)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return filename_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ReadGroupSet::set_allocated_filename(::std::string* filename) {
  if (filename != NULL) {
    
  } else {
    
  }
  filename_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), filename,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.genomics.v1.ReadGroupSet.filename)
}
inline void ReadGroupSet::unsafe_arena_set_allocated_filename(
    ::std::string* filename) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (filename != NULL) {
    
  } else {
    
  }
  filename_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      filename, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.genomics.v1.ReadGroupSet.filename)
}

// repeated .google.genomics.v1.ReadGroup read_groups = 6;
inline int ReadGroupSet::read_groups_size() const {
  return read_groups_.size();
}
inline void ReadGroupSet::clear_read_groups() {
  read_groups_.Clear();
}
inline const ::google::genomics::v1::ReadGroup& ReadGroupSet::read_groups(int index) const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.ReadGroupSet.read_groups)
  return read_groups_.Get(index);
}
inline ::google::genomics::v1::ReadGroup* ReadGroupSet::mutable_read_groups(int index) {
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.ReadGroupSet.read_groups)
  return read_groups_.Mutable(index);
}
inline ::google::genomics::v1::ReadGroup* ReadGroupSet::add_read_groups() {
  // @@protoc_insertion_point(field_add:google.genomics.v1.ReadGroupSet.read_groups)
  return read_groups_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::genomics::v1::ReadGroup >*
ReadGroupSet::mutable_read_groups() {
  // @@protoc_insertion_point(field_mutable_list:google.genomics.v1.ReadGroupSet.read_groups)
  return &read_groups_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::genomics::v1::ReadGroup >&
ReadGroupSet::read_groups() const {
  // @@protoc_insertion_point(field_list:google.genomics.v1.ReadGroupSet.read_groups)
  return read_groups_;
}

// map<string, .google.protobuf.ListValue> info = 7;
inline int ReadGroupSet::info_size() const {
  return info_.size();
}
inline void ReadGroupSet::clear_info() {
  info_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::google::protobuf::ListValue >&
ReadGroupSet::info() const {
  // @@protoc_insertion_point(field_map:google.genomics.v1.ReadGroupSet.info)
  return info_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::google::protobuf::ListValue >*
ReadGroupSet::mutable_info() {
  // @@protoc_insertion_point(field_mutable_map:google.genomics.v1.ReadGroupSet.info)
  return info_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace genomics
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fgenomics_2fv1_2freadgroupset_2eproto__INCLUDED
