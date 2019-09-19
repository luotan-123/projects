// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_test_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_test_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_2eproto;
namespace test {
class Student;
class StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class Team;
class TeamDefaultTypeInternal;
extern TeamDefaultTypeInternal _Team_default_instance_;
}  // namespace test
PROTOBUF_NAMESPACE_OPEN
template<> ::test::Student* Arena::CreateMaybeMessage<::test::Student>(Arena*);
template<> ::test::Team* Arena::CreateMaybeMessage<::test::Team>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace test {

enum Sex : int {
  BOY = 0,
  GIRL = 1,
  Sex_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Sex_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Sex_IsValid(int value);
constexpr Sex Sex_MIN = BOY;
constexpr Sex Sex_MAX = GIRL;
constexpr int Sex_ARRAYSIZE = Sex_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Sex_descriptor();
template<typename T>
inline const std::string& Sex_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Sex>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Sex_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Sex_descriptor(), enum_t_value);
}
inline bool Sex_Parse(
    const std::string& name, Sex* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Sex>(
    Sex_descriptor(), name, value);
}
// ===================================================================

class Student :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:test.Student) */ {
 public:
  Student();
  virtual ~Student();

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Student& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return CreateMaybeMessage<Student>(nullptr);
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "test.Student";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kIdFieldNumber = 1,
    kSexFieldNumber = 3,
  };
  // string Name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 Id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // .test.Sex Sex = 3;
  void clear_sex();
  ::test::Sex sex() const;
  void set_sex(::test::Sex value);
  private:
  ::test::Sex _internal_sex() const;
  void _internal_set_sex(::test::Sex value);
  public:

  // @@protoc_insertion_point(class_scope:test.Student)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  int sex_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// -------------------------------------------------------------------

class Team :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:test.Team) */ {
 public:
  Team();
  virtual ~Team();

  Team(const Team& from);
  Team(Team&& from) noexcept
    : Team() {
    *this = ::std::move(from);
  }

  inline Team& operator=(const Team& from) {
    CopyFrom(from);
    return *this;
  }
  inline Team& operator=(Team&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Team& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Team* internal_default_instance() {
    return reinterpret_cast<const Team*>(
               &_Team_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Team& a, Team& b) {
    a.Swap(&b);
  }
  inline void Swap(Team* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Team* New() const final {
    return CreateMaybeMessage<Team>(nullptr);
  }

  Team* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Team>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Team& from);
  void MergeFrom(const Team& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Team* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "test.Team";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStudentFieldNumber = 3,
    kNameFieldNumber = 2,
    kIdFieldNumber = 1,
  };
  // repeated .test.Student Student = 3;
  int student_size() const;
  private:
  int _internal_student_size() const;
  public:
  void clear_student();
  ::test::Student* mutable_student(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::test::Student >*
      mutable_student();
  private:
  const ::test::Student& _internal_student(int index) const;
  ::test::Student* _internal_add_student();
  public:
  const ::test::Student& student(int index) const;
  ::test::Student* add_student();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::test::Student >&
      student() const;

  // string Name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 Id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:test.Team)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::test::Student > student_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Student

// int32 Id = 1;
inline void Student::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::id() const {
  // @@protoc_insertion_point(field_get:test.Student.Id)
  return _internal_id();
}
inline void Student::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void Student::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:test.Student.Id)
}

// string Name = 2;
inline void Student::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Student::name() const {
  // @@protoc_insertion_point(field_get:test.Student.Name)
  return _internal_name();
}
inline void Student::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:test.Student.Name)
}
inline std::string* Student::mutable_name() {
  // @@protoc_insertion_point(field_mutable:test.Student.Name)
  return _internal_mutable_name();
}
inline const std::string& Student::_internal_name() const {
  return name_.GetNoArena();
}
inline void Student::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Student::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:test.Student.Name)
}
inline void Student::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:test.Student.Name)
}
inline void Student::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:test.Student.Name)
}
inline std::string* Student::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Student::release_name() {
  // @@protoc_insertion_point(field_release:test.Student.Name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Student::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:test.Student.Name)
}

// .test.Sex Sex = 3;
inline void Student::clear_sex() {
  sex_ = 0;
}
inline ::test::Sex Student::_internal_sex() const {
  return static_cast< ::test::Sex >(sex_);
}
inline ::test::Sex Student::sex() const {
  // @@protoc_insertion_point(field_get:test.Student.Sex)
  return _internal_sex();
}
inline void Student::_internal_set_sex(::test::Sex value) {
  
  sex_ = value;
}
inline void Student::set_sex(::test::Sex value) {
  _internal_set_sex(value);
  // @@protoc_insertion_point(field_set:test.Student.Sex)
}

// -------------------------------------------------------------------

// Team

// int32 Id = 1;
inline void Team::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Team::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Team::id() const {
  // @@protoc_insertion_point(field_get:test.Team.Id)
  return _internal_id();
}
inline void Team::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void Team::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:test.Team.Id)
}

// string Name = 2;
inline void Team::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Team::name() const {
  // @@protoc_insertion_point(field_get:test.Team.Name)
  return _internal_name();
}
inline void Team::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:test.Team.Name)
}
inline std::string* Team::mutable_name() {
  // @@protoc_insertion_point(field_mutable:test.Team.Name)
  return _internal_mutable_name();
}
inline const std::string& Team::_internal_name() const {
  return name_.GetNoArena();
}
inline void Team::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Team::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:test.Team.Name)
}
inline void Team::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:test.Team.Name)
}
inline void Team::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:test.Team.Name)
}
inline std::string* Team::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Team::release_name() {
  // @@protoc_insertion_point(field_release:test.Team.Name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Team::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:test.Team.Name)
}

// repeated .test.Student Student = 3;
inline int Team::_internal_student_size() const {
  return student_.size();
}
inline int Team::student_size() const {
  return _internal_student_size();
}
inline void Team::clear_student() {
  student_.Clear();
}
inline ::test::Student* Team::mutable_student(int index) {
  // @@protoc_insertion_point(field_mutable:test.Team.Student)
  return student_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::test::Student >*
Team::mutable_student() {
  // @@protoc_insertion_point(field_mutable_list:test.Team.Student)
  return &student_;
}
inline const ::test::Student& Team::_internal_student(int index) const {
  return student_.Get(index);
}
inline const ::test::Student& Team::student(int index) const {
  // @@protoc_insertion_point(field_get:test.Team.Student)
  return _internal_student(index);
}
inline ::test::Student* Team::_internal_add_student() {
  return student_.Add();
}
inline ::test::Student* Team::add_student() {
  // @@protoc_insertion_point(field_add:test.Team.Student)
  return _internal_add_student();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::test::Student >&
Team::student() const {
  // @@protoc_insertion_point(field_list:test.Team.Student)
  return student_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace test

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::test::Sex> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::test::Sex>() {
  return ::test::Sex_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_test_2eproto
