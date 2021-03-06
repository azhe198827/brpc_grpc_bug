// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: http.proto

#ifndef PROTOBUF_http_2eproto__INCLUDED
#define PROTOBUF_http_2eproto__INCLUDED

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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_http_2eproto();
void protobuf_AssignDesc_http_2eproto();
void protobuf_ShutdownFile_http_2eproto();

class HttpRequest;
class HttpResponse;

// ===================================================================

class HttpRequest : public ::google::protobuf::Message {
 public:
  HttpRequest();
  virtual ~HttpRequest();

  HttpRequest(const HttpRequest& from);

  inline HttpRequest& operator=(const HttpRequest& from) {
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
  static const HttpRequest& default_instance();

  void Swap(HttpRequest* other);

  // implements Message ----------------------------------------------

  HttpRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HttpRequest& from);
  void MergeFrom(const HttpRequest& from);
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

  // optional int32 size = 1;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 1;
  inline ::google::protobuf::int32 size() const;
  inline void set_size(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:HttpRequest)
 private:
  inline void set_has_size();
  inline void clear_has_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_http_2eproto();
  friend void protobuf_AssignDesc_http_2eproto();
  friend void protobuf_ShutdownFile_http_2eproto();

  void InitAsDefaultInstance();
  static HttpRequest* default_instance_;
};
// -------------------------------------------------------------------

class HttpResponse : public ::google::protobuf::Message {
 public:
  HttpResponse();
  virtual ~HttpResponse();

  HttpResponse(const HttpResponse& from);

  inline HttpResponse& operator=(const HttpResponse& from) {
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
  static const HttpResponse& default_instance();

  void Swap(HttpResponse* other);

  // implements Message ----------------------------------------------

  HttpResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HttpResponse& from);
  void MergeFrom(const HttpResponse& from);
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

  // required string result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline const ::std::string& result() const;
  inline void set_result(const ::std::string& value);
  inline void set_result(const char* value);
  inline void set_result(const char* value, size_t size);
  inline ::std::string* mutable_result();
  inline ::std::string* release_result();
  inline void set_allocated_result(::std::string* result);

  // @@protoc_insertion_point(class_scope:HttpResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_http_2eproto();
  friend void protobuf_AssignDesc_http_2eproto();
  friend void protobuf_ShutdownFile_http_2eproto();

  void InitAsDefaultInstance();
  static HttpResponse* default_instance_;
};
// ===================================================================

class HttpService_Stub;

class HttpService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline HttpService() {};
 public:
  virtual ~HttpService();

  typedef HttpService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void Echo(::google::protobuf::RpcController* controller,
                       const ::HttpRequest* request,
                       ::HttpResponse* response,
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
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(HttpService);
};

class HttpService_Stub : public HttpService {
 public:
  HttpService_Stub(::google::protobuf::RpcChannel* channel);
  HttpService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~HttpService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements HttpService ------------------------------------------

  void Echo(::google::protobuf::RpcController* controller,
                       const ::HttpRequest* request,
                       ::HttpResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(HttpService_Stub);
};


// ===================================================================


// ===================================================================

// HttpRequest

// optional int32 size = 1;
inline bool HttpRequest::has_size() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HttpRequest::set_has_size() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HttpRequest::clear_has_size() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HttpRequest::clear_size() {
  size_ = 0;
  clear_has_size();
}
inline ::google::protobuf::int32 HttpRequest::size() const {
  return size_;
}
inline void HttpRequest::set_size(::google::protobuf::int32 value) {
  set_has_size();
  size_ = value;
}

// -------------------------------------------------------------------

// HttpResponse

// required string result = 1;
inline bool HttpResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HttpResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HttpResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HttpResponse::clear_result() {
  if (result_ != &::google::protobuf::internal::kEmptyString) {
    result_->clear();
  }
  clear_has_result();
}
inline const ::std::string& HttpResponse::result() const {
  return *result_;
}
inline void HttpResponse::set_result(const ::std::string& value) {
  set_has_result();
  if (result_ == &::google::protobuf::internal::kEmptyString) {
    result_ = new ::std::string;
  }
  result_->assign(value);
}
inline void HttpResponse::set_result(const char* value) {
  set_has_result();
  if (result_ == &::google::protobuf::internal::kEmptyString) {
    result_ = new ::std::string;
  }
  result_->assign(value);
}
inline void HttpResponse::set_result(const char* value, size_t size) {
  set_has_result();
  if (result_ == &::google::protobuf::internal::kEmptyString) {
    result_ = new ::std::string;
  }
  result_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HttpResponse::mutable_result() {
  set_has_result();
  if (result_ == &::google::protobuf::internal::kEmptyString) {
    result_ = new ::std::string;
  }
  return result_;
}
inline ::std::string* HttpResponse::release_result() {
  clear_has_result();
  if (result_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = result_;
    result_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void HttpResponse::set_allocated_result(::std::string* result) {
  if (result_ != &::google::protobuf::internal::kEmptyString) {
    delete result_;
  }
  if (result) {
    set_has_result();
    result_ = result;
  } else {
    clear_has_result();
    result_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_http_2eproto__INCLUDED