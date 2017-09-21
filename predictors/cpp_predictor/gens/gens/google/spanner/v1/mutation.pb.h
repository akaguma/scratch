// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/spanner/v1/mutation.proto

#ifndef PROTOBUF_google_2fspanner_2fv1_2fmutation_2eproto__INCLUDED
#define PROTOBUF_google_2fspanner_2fv1_2fmutation_2eproto__INCLUDED

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
#include <google/protobuf/struct.pb.h>
#include "google/spanner/v1/keys.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace spanner {
namespace v1 {
class Mutation;
class MutationDefaultTypeInternal;
extern MutationDefaultTypeInternal _Mutation_default_instance_;
class Mutation_Delete;
class Mutation_DeleteDefaultTypeInternal;
extern Mutation_DeleteDefaultTypeInternal _Mutation_Delete_default_instance_;
class Mutation_Write;
class Mutation_WriteDefaultTypeInternal;
extern Mutation_WriteDefaultTypeInternal _Mutation_Write_default_instance_;
}  // namespace v1
}  // namespace spanner
}  // namespace google

namespace google {
namespace spanner {
namespace v1 {

namespace protobuf_google_2fspanner_2fv1_2fmutation_2eproto {
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
}  // namespace protobuf_google_2fspanner_2fv1_2fmutation_2eproto

// ===================================================================

class Mutation_Write : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.Mutation.Write) */ {
 public:
  Mutation_Write();
  virtual ~Mutation_Write();

  Mutation_Write(const Mutation_Write& from);

  inline Mutation_Write& operator=(const Mutation_Write& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Mutation_Write(Mutation_Write&& from) noexcept
    : Mutation_Write() {
    *this = ::std::move(from);
  }

  inline Mutation_Write& operator=(Mutation_Write&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Mutation_Write& default_instance();

  static inline const Mutation_Write* internal_default_instance() {
    return reinterpret_cast<const Mutation_Write*>(
               &_Mutation_Write_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Mutation_Write* other);
  friend void swap(Mutation_Write& a, Mutation_Write& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Mutation_Write* New() const PROTOBUF_FINAL { return New(NULL); }

  Mutation_Write* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Mutation_Write& from);
  void MergeFrom(const Mutation_Write& from);
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
  void InternalSwap(Mutation_Write* other);
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

  // repeated string columns = 2;
  int columns_size() const;
  void clear_columns();
  static const int kColumnsFieldNumber = 2;
  const ::std::string& columns(int index) const;
  ::std::string* mutable_columns(int index);
  void set_columns(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_columns(int index, ::std::string&& value);
  #endif
  void set_columns(int index, const char* value);
  void set_columns(int index, const char* value, size_t size);
  ::std::string* add_columns();
  void add_columns(const ::std::string& value);
  #if LANG_CXX11
  void add_columns(::std::string&& value);
  #endif
  void add_columns(const char* value);
  void add_columns(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& columns() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_columns();

  // repeated .google.protobuf.ListValue values = 3;
  int values_size() const;
  void clear_values();
  static const int kValuesFieldNumber = 3;
  const ::google::protobuf::ListValue& values(int index) const;
  ::google::protobuf::ListValue* mutable_values(int index);
  ::google::protobuf::ListValue* add_values();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >*
      mutable_values();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >&
      values() const;

  // string table = 1;
  void clear_table();
  static const int kTableFieldNumber = 1;
  const ::std::string& table() const;
  void set_table(const ::std::string& value);
  #if LANG_CXX11
  void set_table(::std::string&& value);
  #endif
  void set_table(const char* value);
  void set_table(const char* value, size_t size);
  ::std::string* mutable_table();
  ::std::string* release_table();
  void set_allocated_table(::std::string* table);

  // @@protoc_insertion_point(class_scope:google.spanner.v1.Mutation.Write)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> columns_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue > values_;
  ::google::protobuf::internal::ArenaStringPtr table_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2fmutation_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Mutation_Delete : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.Mutation.Delete) */ {
 public:
  Mutation_Delete();
  virtual ~Mutation_Delete();

  Mutation_Delete(const Mutation_Delete& from);

  inline Mutation_Delete& operator=(const Mutation_Delete& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Mutation_Delete(Mutation_Delete&& from) noexcept
    : Mutation_Delete() {
    *this = ::std::move(from);
  }

  inline Mutation_Delete& operator=(Mutation_Delete&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Mutation_Delete& default_instance();

  static inline const Mutation_Delete* internal_default_instance() {
    return reinterpret_cast<const Mutation_Delete*>(
               &_Mutation_Delete_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Mutation_Delete* other);
  friend void swap(Mutation_Delete& a, Mutation_Delete& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Mutation_Delete* New() const PROTOBUF_FINAL { return New(NULL); }

  Mutation_Delete* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Mutation_Delete& from);
  void MergeFrom(const Mutation_Delete& from);
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
  void InternalSwap(Mutation_Delete* other);
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

  // string table = 1;
  void clear_table();
  static const int kTableFieldNumber = 1;
  const ::std::string& table() const;
  void set_table(const ::std::string& value);
  #if LANG_CXX11
  void set_table(::std::string&& value);
  #endif
  void set_table(const char* value);
  void set_table(const char* value, size_t size);
  ::std::string* mutable_table();
  ::std::string* release_table();
  void set_allocated_table(::std::string* table);

  // .google.spanner.v1.KeySet key_set = 2;
  bool has_key_set() const;
  void clear_key_set();
  static const int kKeySetFieldNumber = 2;
  const ::google::spanner::v1::KeySet& key_set() const;
  ::google::spanner::v1::KeySet* mutable_key_set();
  ::google::spanner::v1::KeySet* release_key_set();
  void set_allocated_key_set(::google::spanner::v1::KeySet* key_set);

  // @@protoc_insertion_point(class_scope:google.spanner.v1.Mutation.Delete)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr table_;
  ::google::spanner::v1::KeySet* key_set_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2fmutation_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Mutation : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.Mutation) */ {
 public:
  Mutation();
  virtual ~Mutation();

  Mutation(const Mutation& from);

  inline Mutation& operator=(const Mutation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Mutation(Mutation&& from) noexcept
    : Mutation() {
    *this = ::std::move(from);
  }

  inline Mutation& operator=(Mutation&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Mutation& default_instance();

  enum OperationCase {
    kInsert = 1,
    kUpdate = 2,
    kInsertOrUpdate = 3,
    kReplace = 4,
    kDelete = 5,
    OPERATION_NOT_SET = 0,
  };

  static inline const Mutation* internal_default_instance() {
    return reinterpret_cast<const Mutation*>(
               &_Mutation_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Mutation* other);
  friend void swap(Mutation& a, Mutation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Mutation* New() const PROTOBUF_FINAL { return New(NULL); }

  Mutation* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Mutation& from);
  void MergeFrom(const Mutation& from);
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
  void InternalSwap(Mutation* other);
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

  typedef Mutation_Write Write;
  typedef Mutation_Delete Delete;

  // accessors -------------------------------------------------------

  // .google.spanner.v1.Mutation.Write insert = 1;
  bool has_insert() const;
  void clear_insert();
  static const int kInsertFieldNumber = 1;
  const ::google::spanner::v1::Mutation_Write& insert() const;
  ::google::spanner::v1::Mutation_Write* mutable_insert();
  ::google::spanner::v1::Mutation_Write* release_insert();
  void set_allocated_insert(::google::spanner::v1::Mutation_Write* insert);

  // .google.spanner.v1.Mutation.Write update = 2;
  bool has_update() const;
  void clear_update();
  static const int kUpdateFieldNumber = 2;
  const ::google::spanner::v1::Mutation_Write& update() const;
  ::google::spanner::v1::Mutation_Write* mutable_update();
  ::google::spanner::v1::Mutation_Write* release_update();
  void set_allocated_update(::google::spanner::v1::Mutation_Write* update);

  // .google.spanner.v1.Mutation.Write insert_or_update = 3;
  bool has_insert_or_update() const;
  void clear_insert_or_update();
  static const int kInsertOrUpdateFieldNumber = 3;
  const ::google::spanner::v1::Mutation_Write& insert_or_update() const;
  ::google::spanner::v1::Mutation_Write* mutable_insert_or_update();
  ::google::spanner::v1::Mutation_Write* release_insert_or_update();
  void set_allocated_insert_or_update(::google::spanner::v1::Mutation_Write* insert_or_update);

  // .google.spanner.v1.Mutation.Write replace = 4;
  bool has_replace() const;
  void clear_replace();
  static const int kReplaceFieldNumber = 4;
  const ::google::spanner::v1::Mutation_Write& replace() const;
  ::google::spanner::v1::Mutation_Write* mutable_replace();
  ::google::spanner::v1::Mutation_Write* release_replace();
  void set_allocated_replace(::google::spanner::v1::Mutation_Write* replace);

  // .google.spanner.v1.Mutation.Delete delete = 5;
  bool has_delete_() const;
  void clear_delete_();
  static const int kDeleteFieldNumber = 5;
  const ::google::spanner::v1::Mutation_Delete& delete_() const;
  ::google::spanner::v1::Mutation_Delete* mutable_delete_();
  ::google::spanner::v1::Mutation_Delete* release_delete_();
  void set_allocated_delete_(::google::spanner::v1::Mutation_Delete* delete_);

  OperationCase operation_case() const;
  // @@protoc_insertion_point(class_scope:google.spanner.v1.Mutation)
 private:
  void set_has_insert();
  void set_has_update();
  void set_has_insert_or_update();
  void set_has_replace();
  void set_has_delete_();

  inline bool has_operation() const;
  void clear_operation();
  inline void clear_has_operation();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union OperationUnion {
    OperationUnion() {}
    ::google::spanner::v1::Mutation_Write* insert_;
    ::google::spanner::v1::Mutation_Write* update_;
    ::google::spanner::v1::Mutation_Write* insert_or_update_;
    ::google::spanner::v1::Mutation_Write* replace_;
    ::google::spanner::v1::Mutation_Delete* delete__;
  } operation_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct protobuf_google_2fspanner_2fv1_2fmutation_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Mutation_Write

// string table = 1;
inline void Mutation_Write::clear_table() {
  table_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Mutation_Write::table() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.Write.table)
  return table_.GetNoArena();
}
inline void Mutation_Write::set_table(const ::std::string& value) {
  
  table_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.spanner.v1.Mutation.Write.table)
}
#if LANG_CXX11
inline void Mutation_Write::set_table(::std::string&& value) {
  
  table_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.spanner.v1.Mutation.Write.table)
}
#endif
inline void Mutation_Write::set_table(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  table_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.spanner.v1.Mutation.Write.table)
}
inline void Mutation_Write::set_table(const char* value, size_t size) {
  
  table_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.spanner.v1.Mutation.Write.table)
}
inline ::std::string* Mutation_Write::mutable_table() {
  
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.Write.table)
  return table_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mutation_Write::release_table() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Mutation.Write.table)
  
  return table_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mutation_Write::set_allocated_table(::std::string* table) {
  if (table != NULL) {
    
  } else {
    
  }
  table_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), table);
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Mutation.Write.table)
}

// repeated string columns = 2;
inline int Mutation_Write::columns_size() const {
  return columns_.size();
}
inline void Mutation_Write::clear_columns() {
  columns_.Clear();
}
inline const ::std::string& Mutation_Write::columns(int index) const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.Write.columns)
  return columns_.Get(index);
}
inline ::std::string* Mutation_Write::mutable_columns(int index) {
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.Write.columns)
  return columns_.Mutable(index);
}
inline void Mutation_Write::set_columns(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.spanner.v1.Mutation.Write.columns)
  columns_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Mutation_Write::set_columns(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.spanner.v1.Mutation.Write.columns)
  columns_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Mutation_Write::set_columns(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  columns_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.spanner.v1.Mutation.Write.columns)
}
inline void Mutation_Write::set_columns(int index, const char* value, size_t size) {
  columns_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.spanner.v1.Mutation.Write.columns)
}
inline ::std::string* Mutation_Write::add_columns() {
  // @@protoc_insertion_point(field_add_mutable:google.spanner.v1.Mutation.Write.columns)
  return columns_.Add();
}
inline void Mutation_Write::add_columns(const ::std::string& value) {
  columns_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.spanner.v1.Mutation.Write.columns)
}
#if LANG_CXX11
inline void Mutation_Write::add_columns(::std::string&& value) {
  columns_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.spanner.v1.Mutation.Write.columns)
}
#endif
inline void Mutation_Write::add_columns(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  columns_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.spanner.v1.Mutation.Write.columns)
}
inline void Mutation_Write::add_columns(const char* value, size_t size) {
  columns_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.spanner.v1.Mutation.Write.columns)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Mutation_Write::columns() const {
  // @@protoc_insertion_point(field_list:google.spanner.v1.Mutation.Write.columns)
  return columns_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Mutation_Write::mutable_columns() {
  // @@protoc_insertion_point(field_mutable_list:google.spanner.v1.Mutation.Write.columns)
  return &columns_;
}

// repeated .google.protobuf.ListValue values = 3;
inline int Mutation_Write::values_size() const {
  return values_.size();
}
inline void Mutation_Write::clear_values() {
  values_.Clear();
}
inline const ::google::protobuf::ListValue& Mutation_Write::values(int index) const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.Write.values)
  return values_.Get(index);
}
inline ::google::protobuf::ListValue* Mutation_Write::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.Write.values)
  return values_.Mutable(index);
}
inline ::google::protobuf::ListValue* Mutation_Write::add_values() {
  // @@protoc_insertion_point(field_add:google.spanner.v1.Mutation.Write.values)
  return values_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >*
Mutation_Write::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:google.spanner.v1.Mutation.Write.values)
  return &values_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >&
Mutation_Write::values() const {
  // @@protoc_insertion_point(field_list:google.spanner.v1.Mutation.Write.values)
  return values_;
}

// -------------------------------------------------------------------

// Mutation_Delete

// string table = 1;
inline void Mutation_Delete::clear_table() {
  table_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Mutation_Delete::table() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.Delete.table)
  return table_.GetNoArena();
}
inline void Mutation_Delete::set_table(const ::std::string& value) {
  
  table_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.spanner.v1.Mutation.Delete.table)
}
#if LANG_CXX11
inline void Mutation_Delete::set_table(::std::string&& value) {
  
  table_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.spanner.v1.Mutation.Delete.table)
}
#endif
inline void Mutation_Delete::set_table(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  table_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.spanner.v1.Mutation.Delete.table)
}
inline void Mutation_Delete::set_table(const char* value, size_t size) {
  
  table_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.spanner.v1.Mutation.Delete.table)
}
inline ::std::string* Mutation_Delete::mutable_table() {
  
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.Delete.table)
  return table_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mutation_Delete::release_table() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Mutation.Delete.table)
  
  return table_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mutation_Delete::set_allocated_table(::std::string* table) {
  if (table != NULL) {
    
  } else {
    
  }
  table_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), table);
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Mutation.Delete.table)
}

// .google.spanner.v1.KeySet key_set = 2;
inline bool Mutation_Delete::has_key_set() const {
  return this != internal_default_instance() && key_set_ != NULL;
}
inline void Mutation_Delete::clear_key_set() {
  if (GetArenaNoVirtual() == NULL && key_set_ != NULL) delete key_set_;
  key_set_ = NULL;
}
inline const ::google::spanner::v1::KeySet& Mutation_Delete::key_set() const {
  const ::google::spanner::v1::KeySet* p = key_set_;
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.Delete.key_set)
  return p != NULL ? *p : *reinterpret_cast<const ::google::spanner::v1::KeySet*>(
      &::google::spanner::v1::_KeySet_default_instance_);
}
inline ::google::spanner::v1::KeySet* Mutation_Delete::mutable_key_set() {
  
  if (key_set_ == NULL) {
    key_set_ = new ::google::spanner::v1::KeySet;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.Delete.key_set)
  return key_set_;
}
inline ::google::spanner::v1::KeySet* Mutation_Delete::release_key_set() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Mutation.Delete.key_set)
  
  ::google::spanner::v1::KeySet* temp = key_set_;
  key_set_ = NULL;
  return temp;
}
inline void Mutation_Delete::set_allocated_key_set(::google::spanner::v1::KeySet* key_set) {
  delete key_set_;
  key_set_ = key_set;
  if (key_set) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Mutation.Delete.key_set)
}

// -------------------------------------------------------------------

// Mutation

// .google.spanner.v1.Mutation.Write insert = 1;
inline bool Mutation::has_insert() const {
  return operation_case() == kInsert;
}
inline void Mutation::set_has_insert() {
  _oneof_case_[0] = kInsert;
}
inline void Mutation::clear_insert() {
  if (has_insert()) {
    delete operation_.insert_;
    clear_has_operation();
  }
}
inline  const ::google::spanner::v1::Mutation_Write& Mutation::insert() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.insert)
  return has_insert()
      ? *operation_.insert_
      : ::google::spanner::v1::Mutation_Write::default_instance();
}
inline ::google::spanner::v1::Mutation_Write* Mutation::mutable_insert() {
  if (!has_insert()) {
    clear_operation();
    set_has_insert();
    operation_.insert_ = new ::google::spanner::v1::Mutation_Write;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.insert)
  return operation_.insert_;
}
inline ::google::spanner::v1::Mutation_Write* Mutation::release_insert() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Mutation.insert)
  if (has_insert()) {
    clear_has_operation();
    ::google::spanner::v1::Mutation_Write* temp = operation_.insert_;
    operation_.insert_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Mutation::set_allocated_insert(::google::spanner::v1::Mutation_Write* insert) {
  clear_operation();
  if (insert) {
    set_has_insert();
    operation_.insert_ = insert;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Mutation.insert)
}

// .google.spanner.v1.Mutation.Write update = 2;
inline bool Mutation::has_update() const {
  return operation_case() == kUpdate;
}
inline void Mutation::set_has_update() {
  _oneof_case_[0] = kUpdate;
}
inline void Mutation::clear_update() {
  if (has_update()) {
    delete operation_.update_;
    clear_has_operation();
  }
}
inline  const ::google::spanner::v1::Mutation_Write& Mutation::update() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.update)
  return has_update()
      ? *operation_.update_
      : ::google::spanner::v1::Mutation_Write::default_instance();
}
inline ::google::spanner::v1::Mutation_Write* Mutation::mutable_update() {
  if (!has_update()) {
    clear_operation();
    set_has_update();
    operation_.update_ = new ::google::spanner::v1::Mutation_Write;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.update)
  return operation_.update_;
}
inline ::google::spanner::v1::Mutation_Write* Mutation::release_update() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Mutation.update)
  if (has_update()) {
    clear_has_operation();
    ::google::spanner::v1::Mutation_Write* temp = operation_.update_;
    operation_.update_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Mutation::set_allocated_update(::google::spanner::v1::Mutation_Write* update) {
  clear_operation();
  if (update) {
    set_has_update();
    operation_.update_ = update;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Mutation.update)
}

// .google.spanner.v1.Mutation.Write insert_or_update = 3;
inline bool Mutation::has_insert_or_update() const {
  return operation_case() == kInsertOrUpdate;
}
inline void Mutation::set_has_insert_or_update() {
  _oneof_case_[0] = kInsertOrUpdate;
}
inline void Mutation::clear_insert_or_update() {
  if (has_insert_or_update()) {
    delete operation_.insert_or_update_;
    clear_has_operation();
  }
}
inline  const ::google::spanner::v1::Mutation_Write& Mutation::insert_or_update() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.insert_or_update)
  return has_insert_or_update()
      ? *operation_.insert_or_update_
      : ::google::spanner::v1::Mutation_Write::default_instance();
}
inline ::google::spanner::v1::Mutation_Write* Mutation::mutable_insert_or_update() {
  if (!has_insert_or_update()) {
    clear_operation();
    set_has_insert_or_update();
    operation_.insert_or_update_ = new ::google::spanner::v1::Mutation_Write;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.insert_or_update)
  return operation_.insert_or_update_;
}
inline ::google::spanner::v1::Mutation_Write* Mutation::release_insert_or_update() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Mutation.insert_or_update)
  if (has_insert_or_update()) {
    clear_has_operation();
    ::google::spanner::v1::Mutation_Write* temp = operation_.insert_or_update_;
    operation_.insert_or_update_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Mutation::set_allocated_insert_or_update(::google::spanner::v1::Mutation_Write* insert_or_update) {
  clear_operation();
  if (insert_or_update) {
    set_has_insert_or_update();
    operation_.insert_or_update_ = insert_or_update;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Mutation.insert_or_update)
}

// .google.spanner.v1.Mutation.Write replace = 4;
inline bool Mutation::has_replace() const {
  return operation_case() == kReplace;
}
inline void Mutation::set_has_replace() {
  _oneof_case_[0] = kReplace;
}
inline void Mutation::clear_replace() {
  if (has_replace()) {
    delete operation_.replace_;
    clear_has_operation();
  }
}
inline  const ::google::spanner::v1::Mutation_Write& Mutation::replace() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.replace)
  return has_replace()
      ? *operation_.replace_
      : ::google::spanner::v1::Mutation_Write::default_instance();
}
inline ::google::spanner::v1::Mutation_Write* Mutation::mutable_replace() {
  if (!has_replace()) {
    clear_operation();
    set_has_replace();
    operation_.replace_ = new ::google::spanner::v1::Mutation_Write;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.replace)
  return operation_.replace_;
}
inline ::google::spanner::v1::Mutation_Write* Mutation::release_replace() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Mutation.replace)
  if (has_replace()) {
    clear_has_operation();
    ::google::spanner::v1::Mutation_Write* temp = operation_.replace_;
    operation_.replace_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Mutation::set_allocated_replace(::google::spanner::v1::Mutation_Write* replace) {
  clear_operation();
  if (replace) {
    set_has_replace();
    operation_.replace_ = replace;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Mutation.replace)
}

// .google.spanner.v1.Mutation.Delete delete = 5;
inline bool Mutation::has_delete_() const {
  return operation_case() == kDelete;
}
inline void Mutation::set_has_delete_() {
  _oneof_case_[0] = kDelete;
}
inline void Mutation::clear_delete_() {
  if (has_delete_()) {
    delete operation_.delete__;
    clear_has_operation();
  }
}
inline  const ::google::spanner::v1::Mutation_Delete& Mutation::delete_() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Mutation.delete)
  return has_delete_()
      ? *operation_.delete__
      : ::google::spanner::v1::Mutation_Delete::default_instance();
}
inline ::google::spanner::v1::Mutation_Delete* Mutation::mutable_delete_() {
  if (!has_delete_()) {
    clear_operation();
    set_has_delete_();
    operation_.delete__ = new ::google::spanner::v1::Mutation_Delete;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Mutation.delete)
  return operation_.delete__;
}
inline ::google::spanner::v1::Mutation_Delete* Mutation::release_delete_() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Mutation.delete)
  if (has_delete_()) {
    clear_has_operation();
    ::google::spanner::v1::Mutation_Delete* temp = operation_.delete__;
    operation_.delete__ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Mutation::set_allocated_delete_(::google::spanner::v1::Mutation_Delete* delete_) {
  clear_operation();
  if (delete_) {
    set_has_delete_();
    operation_.delete__ = delete_;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Mutation.delete)
}

inline bool Mutation::has_operation() const {
  return operation_case() != OPERATION_NOT_SET;
}
inline void Mutation::clear_has_operation() {
  _oneof_case_[0] = OPERATION_NOT_SET;
}
inline Mutation::OperationCase Mutation::operation_case() const {
  return Mutation::OperationCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace spanner
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fspanner_2fv1_2fmutation_2eproto__INCLUDED
