// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/get_favicon.proto

#ifndef PROTOBUF_brpc_2fget_5ffavicon_2eproto__INCLUDED
#define PROTOBUF_brpc_2fget_5ffavicon_2eproto__INCLUDED

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
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace brpc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_brpc_2fget_5ffavicon_2eproto();
void protobuf_AssignDesc_brpc_2fget_5ffavicon_2eproto();
void protobuf_ShutdownFile_brpc_2fget_5ffavicon_2eproto();

class GetFaviconRequest;
class GetFaviconResponse;

// ===================================================================

class GetFaviconRequest : public ::google::protobuf::Message {
 public:
  GetFaviconRequest();
  virtual ~GetFaviconRequest();

  GetFaviconRequest(const GetFaviconRequest& from);

  inline GetFaviconRequest& operator=(const GetFaviconRequest& from) {
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
  static const GetFaviconRequest& default_instance();

  void Swap(GetFaviconRequest* other);

  // implements Message ----------------------------------------------

  GetFaviconRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetFaviconRequest& from);
  void MergeFrom(const GetFaviconRequest& from);
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

  // @@protoc_insertion_point(class_scope:brpc.GetFaviconRequest)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fget_5ffavicon_2eproto();
  friend void protobuf_AssignDesc_brpc_2fget_5ffavicon_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fget_5ffavicon_2eproto();

  void InitAsDefaultInstance();
  static GetFaviconRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetFaviconResponse : public ::google::protobuf::Message {
 public:
  GetFaviconResponse();
  virtual ~GetFaviconResponse();

  GetFaviconResponse(const GetFaviconResponse& from);

  inline GetFaviconResponse& operator=(const GetFaviconResponse& from) {
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
  static const GetFaviconResponse& default_instance();

  void Swap(GetFaviconResponse* other);

  // implements Message ----------------------------------------------

  GetFaviconResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetFaviconResponse& from);
  void MergeFrom(const GetFaviconResponse& from);
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

  // @@protoc_insertion_point(class_scope:brpc.GetFaviconResponse)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fget_5ffavicon_2eproto();
  friend void protobuf_AssignDesc_brpc_2fget_5ffavicon_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fget_5ffavicon_2eproto();

  void InitAsDefaultInstance();
  static GetFaviconResponse* default_instance_;
};
// ===================================================================

class ico_Stub;

class ico : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline ico() {};
 public:
  virtual ~ico();

  typedef ico_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void default_method(::google::protobuf::RpcController* controller,
                       const ::brpc::GetFaviconRequest* request,
                       ::brpc::GetFaviconResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ico);
};

class ico_Stub : public ico {
 public:
  ico_Stub(::google::protobuf::RpcChannel* channel);
  ico_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~ico_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements ico ------------------------------------------

  void default_method(::google::protobuf::RpcController* controller,
                       const ::brpc::GetFaviconRequest* request,
                       ::brpc::GetFaviconResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ico_Stub);
};


// ===================================================================


// ===================================================================

// GetFaviconRequest

// -------------------------------------------------------------------

// GetFaviconResponse


// @@protoc_insertion_point(namespace_scope)

}  // namespace brpc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_brpc_2fget_5ffavicon_2eproto__INCLUDED
