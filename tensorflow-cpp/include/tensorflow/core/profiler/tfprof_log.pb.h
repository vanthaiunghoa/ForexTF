// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/profiler/tfprof_log.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {
namespace tfprof {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();
void protobuf_InitDefaults_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();
void protobuf_AssignDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();
void protobuf_ShutdownFile_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();

class CodeDef;
class CodeDef_Trace;
class OpLogEntry;
class OpLogProto;

// ===================================================================

class CodeDef_Trace : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.tfprof.CodeDef.Trace) */ {
 public:
  CodeDef_Trace();
  virtual ~CodeDef_Trace();

  CodeDef_Trace(const CodeDef_Trace& from);

  inline CodeDef_Trace& operator=(const CodeDef_Trace& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CodeDef_Trace& default_instance();

  static const CodeDef_Trace* internal_default_instance();

  void Swap(CodeDef_Trace* other);

  // implements Message ----------------------------------------------

  inline CodeDef_Trace* New() const { return New(NULL); }

  CodeDef_Trace* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CodeDef_Trace& from);
  void MergeFrom(const CodeDef_Trace& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CodeDef_Trace* other);
  void UnsafeMergeFrom(const CodeDef_Trace& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string file = 1;
  void clear_file();
  static const int kFileFieldNumber = 1;
  const ::std::string& file() const;
  void set_file(const ::std::string& value);
  void set_file(const char* value);
  void set_file(const char* value, size_t size);
  ::std::string* mutable_file();
  ::std::string* release_file();
  void set_allocated_file(::std::string* file);

  // optional int32 lineno = 2;
  void clear_lineno();
  static const int kLinenoFieldNumber = 2;
  ::google::protobuf::int32 lineno() const;
  void set_lineno(::google::protobuf::int32 value);

  // optional string function = 3;
  void clear_function();
  static const int kFunctionFieldNumber = 3;
  const ::std::string& function() const;
  void set_function(const ::std::string& value);
  void set_function(const char* value);
  void set_function(const char* value, size_t size);
  ::std::string* mutable_function();
  ::std::string* release_function();
  void set_allocated_function(::std::string* function);

  // optional string line = 4;
  void clear_line();
  static const int kLineFieldNumber = 4;
  const ::std::string& line() const;
  void set_line(const ::std::string& value);
  void set_line(const char* value);
  void set_line(const char* value, size_t size);
  ::std::string* mutable_line();
  ::std::string* release_line();
  void set_allocated_line(::std::string* line);

  // @@protoc_insertion_point(class_scope:tensorflow.tfprof.CodeDef.Trace)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr file_;
  ::google::protobuf::internal::ArenaStringPtr function_;
  ::google::protobuf::internal::ArenaStringPtr line_;
  ::google::protobuf::int32 lineno_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<CodeDef_Trace> CodeDef_Trace_default_instance_;

// -------------------------------------------------------------------

class CodeDef : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.tfprof.CodeDef) */ {
 public:
  CodeDef();
  virtual ~CodeDef();

  CodeDef(const CodeDef& from);

  inline CodeDef& operator=(const CodeDef& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CodeDef& default_instance();

  static const CodeDef* internal_default_instance();

  void Swap(CodeDef* other);

  // implements Message ----------------------------------------------

  inline CodeDef* New() const { return New(NULL); }

  CodeDef* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CodeDef& from);
  void MergeFrom(const CodeDef& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CodeDef* other);
  void UnsafeMergeFrom(const CodeDef& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef CodeDef_Trace Trace;

  // accessors -------------------------------------------------------

  // repeated .tensorflow.tfprof.CodeDef.Trace traces = 1;
  int traces_size() const;
  void clear_traces();
  static const int kTracesFieldNumber = 1;
  const ::tensorflow::tfprof::CodeDef_Trace& traces(int index) const;
  ::tensorflow::tfprof::CodeDef_Trace* mutable_traces(int index);
  ::tensorflow::tfprof::CodeDef_Trace* add_traces();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::CodeDef_Trace >*
      mutable_traces();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::CodeDef_Trace >&
      traces() const;

  // @@protoc_insertion_point(class_scope:tensorflow.tfprof.CodeDef)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::CodeDef_Trace > traces_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<CodeDef> CodeDef_default_instance_;

// -------------------------------------------------------------------

class OpLogEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.tfprof.OpLogEntry) */ {
 public:
  OpLogEntry();
  virtual ~OpLogEntry();

  OpLogEntry(const OpLogEntry& from);

  inline OpLogEntry& operator=(const OpLogEntry& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const OpLogEntry& default_instance();

  static const OpLogEntry* internal_default_instance();

  void Swap(OpLogEntry* other);

  // implements Message ----------------------------------------------

  inline OpLogEntry* New() const { return New(NULL); }

  OpLogEntry* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OpLogEntry& from);
  void MergeFrom(const OpLogEntry& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(OpLogEntry* other);
  void UnsafeMergeFrom(const OpLogEntry& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional int64 float_ops = 2;
  void clear_float_ops();
  static const int kFloatOpsFieldNumber = 2;
  ::google::protobuf::int64 float_ops() const;
  void set_float_ops(::google::protobuf::int64 value);

  // repeated string types = 3;
  int types_size() const;
  void clear_types();
  static const int kTypesFieldNumber = 3;
  const ::std::string& types(int index) const;
  ::std::string* mutable_types(int index);
  void set_types(int index, const ::std::string& value);
  void set_types(int index, const char* value);
  void set_types(int index, const char* value, size_t size);
  ::std::string* add_types();
  void add_types(const ::std::string& value);
  void add_types(const char* value);
  void add_types(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& types() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_types();

  // optional .tensorflow.tfprof.CodeDef code_def = 4;
  bool has_code_def() const;
  void clear_code_def();
  static const int kCodeDefFieldNumber = 4;
  const ::tensorflow::tfprof::CodeDef& code_def() const;
  ::tensorflow::tfprof::CodeDef* mutable_code_def();
  ::tensorflow::tfprof::CodeDef* release_code_def();
  void set_allocated_code_def(::tensorflow::tfprof::CodeDef* code_def);

  // @@protoc_insertion_point(class_scope:tensorflow.tfprof.OpLogEntry)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> types_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::tensorflow::tfprof::CodeDef* code_def_;
  ::google::protobuf::int64 float_ops_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<OpLogEntry> OpLogEntry_default_instance_;

// -------------------------------------------------------------------

class OpLogProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.tfprof.OpLogProto) */ {
 public:
  OpLogProto();
  virtual ~OpLogProto();

  OpLogProto(const OpLogProto& from);

  inline OpLogProto& operator=(const OpLogProto& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const OpLogProto& default_instance();

  static const OpLogProto* internal_default_instance();

  void Swap(OpLogProto* other);

  // implements Message ----------------------------------------------

  inline OpLogProto* New() const { return New(NULL); }

  OpLogProto* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OpLogProto& from);
  void MergeFrom(const OpLogProto& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(OpLogProto* other);
  void UnsafeMergeFrom(const OpLogProto& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.tfprof.OpLogEntry log_entries = 1;
  int log_entries_size() const;
  void clear_log_entries();
  static const int kLogEntriesFieldNumber = 1;
  const ::tensorflow::tfprof::OpLogEntry& log_entries(int index) const;
  ::tensorflow::tfprof::OpLogEntry* mutable_log_entries(int index);
  ::tensorflow::tfprof::OpLogEntry* add_log_entries();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::OpLogEntry >*
      mutable_log_entries();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::OpLogEntry >&
      log_entries() const;

  // @@protoc_insertion_point(class_scope:tensorflow.tfprof.OpLogProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::OpLogEntry > log_entries_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<OpLogProto> OpLogProto_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CodeDef_Trace

// optional string file = 1;
inline void CodeDef_Trace::clear_file() {
  file_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CodeDef_Trace::file() const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.CodeDef.Trace.file)
  return file_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeDef_Trace::set_file(const ::std::string& value) {
  
  file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.tfprof.CodeDef.Trace.file)
}
inline void CodeDef_Trace::set_file(const char* value) {
  
  file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.tfprof.CodeDef.Trace.file)
}
inline void CodeDef_Trace::set_file(const char* value, size_t size) {
  
  file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.tfprof.CodeDef.Trace.file)
}
inline ::std::string* CodeDef_Trace::mutable_file() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.tfprof.CodeDef.Trace.file)
  return file_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CodeDef_Trace::release_file() {
  // @@protoc_insertion_point(field_release:tensorflow.tfprof.CodeDef.Trace.file)
  
  return file_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeDef_Trace::set_allocated_file(::std::string* file) {
  if (file != NULL) {
    
  } else {
    
  }
  file_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tfprof.CodeDef.Trace.file)
}

// optional int32 lineno = 2;
inline void CodeDef_Trace::clear_lineno() {
  lineno_ = 0;
}
inline ::google::protobuf::int32 CodeDef_Trace::lineno() const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.CodeDef.Trace.lineno)
  return lineno_;
}
inline void CodeDef_Trace::set_lineno(::google::protobuf::int32 value) {
  
  lineno_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tfprof.CodeDef.Trace.lineno)
}

// optional string function = 3;
inline void CodeDef_Trace::clear_function() {
  function_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CodeDef_Trace::function() const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.CodeDef.Trace.function)
  return function_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeDef_Trace::set_function(const ::std::string& value) {
  
  function_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.tfprof.CodeDef.Trace.function)
}
inline void CodeDef_Trace::set_function(const char* value) {
  
  function_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.tfprof.CodeDef.Trace.function)
}
inline void CodeDef_Trace::set_function(const char* value, size_t size) {
  
  function_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.tfprof.CodeDef.Trace.function)
}
inline ::std::string* CodeDef_Trace::mutable_function() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.tfprof.CodeDef.Trace.function)
  return function_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CodeDef_Trace::release_function() {
  // @@protoc_insertion_point(field_release:tensorflow.tfprof.CodeDef.Trace.function)
  
  return function_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeDef_Trace::set_allocated_function(::std::string* function) {
  if (function != NULL) {
    
  } else {
    
  }
  function_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), function);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tfprof.CodeDef.Trace.function)
}

// optional string line = 4;
inline void CodeDef_Trace::clear_line() {
  line_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CodeDef_Trace::line() const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.CodeDef.Trace.line)
  return line_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeDef_Trace::set_line(const ::std::string& value) {
  
  line_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.tfprof.CodeDef.Trace.line)
}
inline void CodeDef_Trace::set_line(const char* value) {
  
  line_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.tfprof.CodeDef.Trace.line)
}
inline void CodeDef_Trace::set_line(const char* value, size_t size) {
  
  line_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.tfprof.CodeDef.Trace.line)
}
inline ::std::string* CodeDef_Trace::mutable_line() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.tfprof.CodeDef.Trace.line)
  return line_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CodeDef_Trace::release_line() {
  // @@protoc_insertion_point(field_release:tensorflow.tfprof.CodeDef.Trace.line)
  
  return line_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeDef_Trace::set_allocated_line(::std::string* line) {
  if (line != NULL) {
    
  } else {
    
  }
  line_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), line);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tfprof.CodeDef.Trace.line)
}

inline const CodeDef_Trace* CodeDef_Trace::internal_default_instance() {
  return &CodeDef_Trace_default_instance_.get();
}
// -------------------------------------------------------------------

// CodeDef

// repeated .tensorflow.tfprof.CodeDef.Trace traces = 1;
inline int CodeDef::traces_size() const {
  return traces_.size();
}
inline void CodeDef::clear_traces() {
  traces_.Clear();
}
inline const ::tensorflow::tfprof::CodeDef_Trace& CodeDef::traces(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.CodeDef.traces)
  return traces_.Get(index);
}
inline ::tensorflow::tfprof::CodeDef_Trace* CodeDef::mutable_traces(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.tfprof.CodeDef.traces)
  return traces_.Mutable(index);
}
inline ::tensorflow::tfprof::CodeDef_Trace* CodeDef::add_traces() {
  // @@protoc_insertion_point(field_add:tensorflow.tfprof.CodeDef.traces)
  return traces_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::CodeDef_Trace >*
CodeDef::mutable_traces() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.tfprof.CodeDef.traces)
  return &traces_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::CodeDef_Trace >&
CodeDef::traces() const {
  // @@protoc_insertion_point(field_list:tensorflow.tfprof.CodeDef.traces)
  return traces_;
}

inline const CodeDef* CodeDef::internal_default_instance() {
  return &CodeDef_default_instance_.get();
}
// -------------------------------------------------------------------

// OpLogEntry

// optional string name = 1;
inline void OpLogEntry::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OpLogEntry::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.OpLogEntry.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OpLogEntry::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.tfprof.OpLogEntry.name)
}
inline void OpLogEntry::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.tfprof.OpLogEntry.name)
}
inline void OpLogEntry::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.tfprof.OpLogEntry.name)
}
inline ::std::string* OpLogEntry::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.tfprof.OpLogEntry.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OpLogEntry::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.tfprof.OpLogEntry.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OpLogEntry::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tfprof.OpLogEntry.name)
}

// optional int64 float_ops = 2;
inline void OpLogEntry::clear_float_ops() {
  float_ops_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 OpLogEntry::float_ops() const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.OpLogEntry.float_ops)
  return float_ops_;
}
inline void OpLogEntry::set_float_ops(::google::protobuf::int64 value) {
  
  float_ops_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tfprof.OpLogEntry.float_ops)
}

// repeated string types = 3;
inline int OpLogEntry::types_size() const {
  return types_.size();
}
inline void OpLogEntry::clear_types() {
  types_.Clear();
}
inline const ::std::string& OpLogEntry::types(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.OpLogEntry.types)
  return types_.Get(index);
}
inline ::std::string* OpLogEntry::mutable_types(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.tfprof.OpLogEntry.types)
  return types_.Mutable(index);
}
inline void OpLogEntry::set_types(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.tfprof.OpLogEntry.types)
  types_.Mutable(index)->assign(value);
}
inline void OpLogEntry::set_types(int index, const char* value) {
  types_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.tfprof.OpLogEntry.types)
}
inline void OpLogEntry::set_types(int index, const char* value, size_t size) {
  types_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.tfprof.OpLogEntry.types)
}
inline ::std::string* OpLogEntry::add_types() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.tfprof.OpLogEntry.types)
  return types_.Add();
}
inline void OpLogEntry::add_types(const ::std::string& value) {
  types_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.tfprof.OpLogEntry.types)
}
inline void OpLogEntry::add_types(const char* value) {
  types_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.tfprof.OpLogEntry.types)
}
inline void OpLogEntry::add_types(const char* value, size_t size) {
  types_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.tfprof.OpLogEntry.types)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
OpLogEntry::types() const {
  // @@protoc_insertion_point(field_list:tensorflow.tfprof.OpLogEntry.types)
  return types_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
OpLogEntry::mutable_types() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.tfprof.OpLogEntry.types)
  return &types_;
}

// optional .tensorflow.tfprof.CodeDef code_def = 4;
inline bool OpLogEntry::has_code_def() const {
  return this != internal_default_instance() && code_def_ != NULL;
}
inline void OpLogEntry::clear_code_def() {
  if (GetArenaNoVirtual() == NULL && code_def_ != NULL) delete code_def_;
  code_def_ = NULL;
}
inline const ::tensorflow::tfprof::CodeDef& OpLogEntry::code_def() const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.OpLogEntry.code_def)
  return code_def_ != NULL ? *code_def_
                         : *::tensorflow::tfprof::CodeDef::internal_default_instance();
}
inline ::tensorflow::tfprof::CodeDef* OpLogEntry::mutable_code_def() {
  
  if (code_def_ == NULL) {
    code_def_ = new ::tensorflow::tfprof::CodeDef;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.tfprof.OpLogEntry.code_def)
  return code_def_;
}
inline ::tensorflow::tfprof::CodeDef* OpLogEntry::release_code_def() {
  // @@protoc_insertion_point(field_release:tensorflow.tfprof.OpLogEntry.code_def)
  
  ::tensorflow::tfprof::CodeDef* temp = code_def_;
  code_def_ = NULL;
  return temp;
}
inline void OpLogEntry::set_allocated_code_def(::tensorflow::tfprof::CodeDef* code_def) {
  delete code_def_;
  code_def_ = code_def;
  if (code_def) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tfprof.OpLogEntry.code_def)
}

inline const OpLogEntry* OpLogEntry::internal_default_instance() {
  return &OpLogEntry_default_instance_.get();
}
// -------------------------------------------------------------------

// OpLogProto

// repeated .tensorflow.tfprof.OpLogEntry log_entries = 1;
inline int OpLogProto::log_entries_size() const {
  return log_entries_.size();
}
inline void OpLogProto::clear_log_entries() {
  log_entries_.Clear();
}
inline const ::tensorflow::tfprof::OpLogEntry& OpLogProto::log_entries(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.tfprof.OpLogProto.log_entries)
  return log_entries_.Get(index);
}
inline ::tensorflow::tfprof::OpLogEntry* OpLogProto::mutable_log_entries(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.tfprof.OpLogProto.log_entries)
  return log_entries_.Mutable(index);
}
inline ::tensorflow::tfprof::OpLogEntry* OpLogProto::add_log_entries() {
  // @@protoc_insertion_point(field_add:tensorflow.tfprof.OpLogProto.log_entries)
  return log_entries_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::OpLogEntry >*
OpLogProto::mutable_log_entries() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.tfprof.OpLogProto.log_entries)
  return &log_entries_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::tfprof::OpLogEntry >&
OpLogProto::log_entries() const {
  // @@protoc_insertion_point(field_list:tensorflow.tfprof.OpLogProto.log_entries)
  return log_entries_;
}

inline const OpLogProto* OpLogProto::internal_default_instance() {
  return &OpLogProto_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tfprof
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fprofiler_2ftfprof_5flog_2eproto__INCLUDED
