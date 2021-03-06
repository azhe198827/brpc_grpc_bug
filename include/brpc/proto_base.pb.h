// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/proto_base.proto

#ifndef PROTOBUF_brpc_2fproto_5fbase_2eproto__INCLUDED
#define PROTOBUF_brpc_2fproto_5fbase_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace brpc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_brpc_2fproto_5fbase_2eproto();
void protobuf_AssignDesc_brpc_2fproto_5fbase_2eproto();
void protobuf_ShutdownFile_brpc_2fproto_5fbase_2eproto();

class RedisRequestBase;
class RedisResponseBase;
class EspMessageBase;
class MemcacheRequestBase;
class MemcacheResponseBase;
class NsheadMessageBase;
class SerializedRequestBase;
class ThriftFramedMessageBase;

// ===================================================================

class RedisRequestBase : public ::google::protobuf::Message {
 public:
  RedisRequestBase();
  virtual ~RedisRequestBase();

  RedisRequestBase(const RedisRequestBase& from);

  inline RedisRequestBase& operator=(const RedisRequestBase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RedisRequestBase& default_instance();

  void Swap(RedisRequestBase* other);

  // implements Message ----------------------------------------------

  RedisRequestBase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RedisRequestBase& from);
  void MergeFrom(const RedisRequestBase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.RedisRequestBase)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_AssignDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fproto_5fbase_2eproto();

  void InitAsDefaultInstance();
  static RedisRequestBase* default_instance_;
};
// -------------------------------------------------------------------

class RedisResponseBase : public ::google::protobuf::Message {
 public:
  RedisResponseBase();
  virtual ~RedisResponseBase();

  RedisResponseBase(const RedisResponseBase& from);

  inline RedisResponseBase& operator=(const RedisResponseBase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RedisResponseBase& default_instance();

  void Swap(RedisResponseBase* other);

  // implements Message ----------------------------------------------

  RedisResponseBase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RedisResponseBase& from);
  void MergeFrom(const RedisResponseBase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.RedisResponseBase)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_AssignDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fproto_5fbase_2eproto();

  void InitAsDefaultInstance();
  static RedisResponseBase* default_instance_;
};
// -------------------------------------------------------------------

class EspMessageBase : public ::google::protobuf::Message {
 public:
  EspMessageBase();
  virtual ~EspMessageBase();

  EspMessageBase(const EspMessageBase& from);

  inline EspMessageBase& operator=(const EspMessageBase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EspMessageBase& default_instance();

  void Swap(EspMessageBase* other);

  // implements Message ----------------------------------------------

  EspMessageBase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EspMessageBase& from);
  void MergeFrom(const EspMessageBase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.EspMessageBase)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_AssignDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fproto_5fbase_2eproto();

  void InitAsDefaultInstance();
  static EspMessageBase* default_instance_;
};
// -------------------------------------------------------------------

class MemcacheRequestBase : public ::google::protobuf::Message {
 public:
  MemcacheRequestBase();
  virtual ~MemcacheRequestBase();

  MemcacheRequestBase(const MemcacheRequestBase& from);

  inline MemcacheRequestBase& operator=(const MemcacheRequestBase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MemcacheRequestBase& default_instance();

  void Swap(MemcacheRequestBase* other);

  // implements Message ----------------------------------------------

  MemcacheRequestBase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MemcacheRequestBase& from);
  void MergeFrom(const MemcacheRequestBase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.MemcacheRequestBase)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_AssignDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fproto_5fbase_2eproto();

  void InitAsDefaultInstance();
  static MemcacheRequestBase* default_instance_;
};
// -------------------------------------------------------------------

class MemcacheResponseBase : public ::google::protobuf::Message {
 public:
  MemcacheResponseBase();
  virtual ~MemcacheResponseBase();

  MemcacheResponseBase(const MemcacheResponseBase& from);

  inline MemcacheResponseBase& operator=(const MemcacheResponseBase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MemcacheResponseBase& default_instance();

  void Swap(MemcacheResponseBase* other);

  // implements Message ----------------------------------------------

  MemcacheResponseBase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MemcacheResponseBase& from);
  void MergeFrom(const MemcacheResponseBase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.MemcacheResponseBase)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_AssignDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fproto_5fbase_2eproto();

  void InitAsDefaultInstance();
  static MemcacheResponseBase* default_instance_;
};
// -------------------------------------------------------------------

class NsheadMessageBase : public ::google::protobuf::Message {
 public:
  NsheadMessageBase();
  virtual ~NsheadMessageBase();

  NsheadMessageBase(const NsheadMessageBase& from);

  inline NsheadMessageBase& operator=(const NsheadMessageBase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NsheadMessageBase& default_instance();

  void Swap(NsheadMessageBase* other);

  // implements Message ----------------------------------------------

  NsheadMessageBase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NsheadMessageBase& from);
  void MergeFrom(const NsheadMessageBase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.NsheadMessageBase)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_AssignDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fproto_5fbase_2eproto();

  void InitAsDefaultInstance();
  static NsheadMessageBase* default_instance_;
};
// -------------------------------------------------------------------

class SerializedRequestBase : public ::google::protobuf::Message {
 public:
  SerializedRequestBase();
  virtual ~SerializedRequestBase();

  SerializedRequestBase(const SerializedRequestBase& from);

  inline SerializedRequestBase& operator=(const SerializedRequestBase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SerializedRequestBase& default_instance();

  void Swap(SerializedRequestBase* other);

  // implements Message ----------------------------------------------

  SerializedRequestBase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SerializedRequestBase& from);
  void MergeFrom(const SerializedRequestBase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.SerializedRequestBase)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_AssignDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fproto_5fbase_2eproto();

  void InitAsDefaultInstance();
  static SerializedRequestBase* default_instance_;
};
// -------------------------------------------------------------------

class ThriftFramedMessageBase : public ::google::protobuf::Message {
 public:
  ThriftFramedMessageBase();
  virtual ~ThriftFramedMessageBase();

  ThriftFramedMessageBase(const ThriftFramedMessageBase& from);

  inline ThriftFramedMessageBase& operator=(const ThriftFramedMessageBase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ThriftFramedMessageBase& default_instance();

  void Swap(ThriftFramedMessageBase* other);

  // implements Message ----------------------------------------------

  ThriftFramedMessageBase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ThriftFramedMessageBase& from);
  void MergeFrom(const ThriftFramedMessageBase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.ThriftFramedMessageBase)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_AssignDesc_brpc_2fproto_5fbase_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fproto_5fbase_2eproto();

  void InitAsDefaultInstance();
  static ThriftFramedMessageBase* default_instance_;
};
// ===================================================================


// ===================================================================

// RedisRequestBase

// -------------------------------------------------------------------

// RedisResponseBase

// -------------------------------------------------------------------

// EspMessageBase

// -------------------------------------------------------------------

// MemcacheRequestBase

// -------------------------------------------------------------------

// MemcacheResponseBase

// -------------------------------------------------------------------

// NsheadMessageBase

// -------------------------------------------------------------------

// SerializedRequestBase

// -------------------------------------------------------------------

// ThriftFramedMessageBase


// @@protoc_insertion_point(namespace_scope)

}  // namespace brpc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_brpc_2fproto_5fbase_2eproto__INCLUDED
