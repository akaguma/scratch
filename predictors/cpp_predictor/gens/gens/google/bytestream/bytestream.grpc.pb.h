// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/bytestream/bytestream.proto
// Original file comments:
// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_google_2fbytestream_2fbytestream_2eproto__INCLUDED
#define GRPC_google_2fbytestream_2fbytestream_2eproto__INCLUDED

#include "google/bytestream/bytestream.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace google {
namespace bytestream {

// #### Introduction
//
// The Byte Stream API enables a client to read and write a stream of bytes to
// and from a resource. Resources have names, and these names are supplied in
// the API calls below to identify the resource that is being read from or
// written to.
//
// All implementations of the Byte Stream API export the interface defined here:
//
// * `Read()`: Reads the contents of a resource.
//
// * `Write()`: Writes the contents of a resource. The client can call `Write()`
//   multiple times with the same resource and can check the status of the write
//   by calling `QueryWriteStatus()`.
//
// #### Service parameters and metadata
//
// The ByteStream API provides no direct way to access/modify any metadata
// associated with the resource.
//
// #### Errors
//
// The errors returned by the service are in the Google canonical error space.
class ByteStream final {
 public:
  static constexpr char const* service_full_name() {
    return "google.bytestream.ByteStream";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // `Read()` is used to retrieve the contents of a resource as a sequence
    // of bytes. The bytes are returned in a sequence of responses, and the
    // responses are delivered as the results of a server-side streaming RPC.
    std::unique_ptr< ::grpc::ClientReaderInterface< ::google::bytestream::ReadResponse>> Read(::grpc::ClientContext* context, const ::google::bytestream::ReadRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::google::bytestream::ReadResponse>>(ReadRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::google::bytestream::ReadResponse>> AsyncRead(::grpc::ClientContext* context, const ::google::bytestream::ReadRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::google::bytestream::ReadResponse>>(AsyncReadRaw(context, request, cq, tag));
    }
    // `Write()` is used to send the contents of a resource as a sequence of
    // bytes. The bytes are sent in a sequence of request protos of a client-side
    // streaming RPC.
    //
    // A `Write()` action is resumable. If there is an error or the connection is
    // broken during the `Write()`, the client should check the status of the
    // `Write()` by calling `QueryWriteStatus()` and continue writing from the
    // returned `committed_size`. This may be less than the amount of data the
    // client previously sent.
    //
    // Calling `Write()` on a resource name that was previously written and
    // finalized could cause an error, depending on whether the underlying service
    // allows over-writing of previously written resources.
    //
    // When the client closes the request channel, the service will respond with
    // a `WriteResponse`. The service will not view the resource as `complete`
    // until the client has sent a `WriteRequest` with `finish_write` set to
    // `true`. Sending any requests on a stream after sending a request with
    // `finish_write` set to `true` will cause an error. The client **should**
    // check the `WriteResponse` it receives to determine how much data the
    // service was able to commit and whether the service views the resource as
    // `complete` or not.
    std::unique_ptr< ::grpc::ClientWriterInterface< ::google::bytestream::WriteRequest>> Write(::grpc::ClientContext* context, ::google::bytestream::WriteResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::google::bytestream::WriteRequest>>(WriteRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::google::bytestream::WriteRequest>> AsyncWrite(::grpc::ClientContext* context, ::google::bytestream::WriteResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::google::bytestream::WriteRequest>>(AsyncWriteRaw(context, response, cq, tag));
    }
    // `QueryWriteStatus()` is used to find the `committed_size` for a resource
    // that is being written, which can then be used as the `write_offset` for
    // the next `Write()` call.
    //
    // If the resource does not exist (i.e., the resource has been deleted, or the
    // first `Write()` has not yet reached the service), this method returns the
    // error `NOT_FOUND`.
    //
    // The client **may** call `QueryWriteStatus()` at any time to determine how
    // much data has been processed for this resource. This is useful if the
    // client is buffering data and needs to know which data can be safely
    // evicted. For any sequence of `QueryWriteStatus()` calls for a given
    // resource name, the sequence of returned `committed_size` values will be
    // non-decreasing.
    virtual ::grpc::Status QueryWriteStatus(::grpc::ClientContext* context, const ::google::bytestream::QueryWriteStatusRequest& request, ::google::bytestream::QueryWriteStatusResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bytestream::QueryWriteStatusResponse>> AsyncQueryWriteStatus(::grpc::ClientContext* context, const ::google::bytestream::QueryWriteStatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bytestream::QueryWriteStatusResponse>>(AsyncQueryWriteStatusRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientReaderInterface< ::google::bytestream::ReadResponse>* ReadRaw(::grpc::ClientContext* context, const ::google::bytestream::ReadRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::google::bytestream::ReadResponse>* AsyncReadRaw(::grpc::ClientContext* context, const ::google::bytestream::ReadRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientWriterInterface< ::google::bytestream::WriteRequest>* WriteRaw(::grpc::ClientContext* context, ::google::bytestream::WriteResponse* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::google::bytestream::WriteRequest>* AsyncWriteRaw(::grpc::ClientContext* context, ::google::bytestream::WriteResponse* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::bytestream::QueryWriteStatusResponse>* AsyncQueryWriteStatusRaw(::grpc::ClientContext* context, const ::google::bytestream::QueryWriteStatusRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::google::bytestream::ReadResponse>> Read(::grpc::ClientContext* context, const ::google::bytestream::ReadRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::google::bytestream::ReadResponse>>(ReadRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::google::bytestream::ReadResponse>> AsyncRead(::grpc::ClientContext* context, const ::google::bytestream::ReadRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::google::bytestream::ReadResponse>>(AsyncReadRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientWriter< ::google::bytestream::WriteRequest>> Write(::grpc::ClientContext* context, ::google::bytestream::WriteResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::google::bytestream::WriteRequest>>(WriteRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::google::bytestream::WriteRequest>> AsyncWrite(::grpc::ClientContext* context, ::google::bytestream::WriteResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::google::bytestream::WriteRequest>>(AsyncWriteRaw(context, response, cq, tag));
    }
    ::grpc::Status QueryWriteStatus(::grpc::ClientContext* context, const ::google::bytestream::QueryWriteStatusRequest& request, ::google::bytestream::QueryWriteStatusResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bytestream::QueryWriteStatusResponse>> AsyncQueryWriteStatus(::grpc::ClientContext* context, const ::google::bytestream::QueryWriteStatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bytestream::QueryWriteStatusResponse>>(AsyncQueryWriteStatusRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientReader< ::google::bytestream::ReadResponse>* ReadRaw(::grpc::ClientContext* context, const ::google::bytestream::ReadRequest& request) override;
    ::grpc::ClientAsyncReader< ::google::bytestream::ReadResponse>* AsyncReadRaw(::grpc::ClientContext* context, const ::google::bytestream::ReadRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientWriter< ::google::bytestream::WriteRequest>* WriteRaw(::grpc::ClientContext* context, ::google::bytestream::WriteResponse* response) override;
    ::grpc::ClientAsyncWriter< ::google::bytestream::WriteRequest>* AsyncWriteRaw(::grpc::ClientContext* context, ::google::bytestream::WriteResponse* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncResponseReader< ::google::bytestream::QueryWriteStatusResponse>* AsyncQueryWriteStatusRaw(::grpc::ClientContext* context, const ::google::bytestream::QueryWriteStatusRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_Read_;
    const ::grpc::RpcMethod rpcmethod_Write_;
    const ::grpc::RpcMethod rpcmethod_QueryWriteStatus_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // `Read()` is used to retrieve the contents of a resource as a sequence
    // of bytes. The bytes are returned in a sequence of responses, and the
    // responses are delivered as the results of a server-side streaming RPC.
    virtual ::grpc::Status Read(::grpc::ServerContext* context, const ::google::bytestream::ReadRequest* request, ::grpc::ServerWriter< ::google::bytestream::ReadResponse>* writer);
    // `Write()` is used to send the contents of a resource as a sequence of
    // bytes. The bytes are sent in a sequence of request protos of a client-side
    // streaming RPC.
    //
    // A `Write()` action is resumable. If there is an error or the connection is
    // broken during the `Write()`, the client should check the status of the
    // `Write()` by calling `QueryWriteStatus()` and continue writing from the
    // returned `committed_size`. This may be less than the amount of data the
    // client previously sent.
    //
    // Calling `Write()` on a resource name that was previously written and
    // finalized could cause an error, depending on whether the underlying service
    // allows over-writing of previously written resources.
    //
    // When the client closes the request channel, the service will respond with
    // a `WriteResponse`. The service will not view the resource as `complete`
    // until the client has sent a `WriteRequest` with `finish_write` set to
    // `true`. Sending any requests on a stream after sending a request with
    // `finish_write` set to `true` will cause an error. The client **should**
    // check the `WriteResponse` it receives to determine how much data the
    // service was able to commit and whether the service views the resource as
    // `complete` or not.
    virtual ::grpc::Status Write(::grpc::ServerContext* context, ::grpc::ServerReader< ::google::bytestream::WriteRequest>* reader, ::google::bytestream::WriteResponse* response);
    // `QueryWriteStatus()` is used to find the `committed_size` for a resource
    // that is being written, which can then be used as the `write_offset` for
    // the next `Write()` call.
    //
    // If the resource does not exist (i.e., the resource has been deleted, or the
    // first `Write()` has not yet reached the service), this method returns the
    // error `NOT_FOUND`.
    //
    // The client **may** call `QueryWriteStatus()` at any time to determine how
    // much data has been processed for this resource. This is useful if the
    // client is buffering data and needs to know which data can be safely
    // evicted. For any sequence of `QueryWriteStatus()` calls for a given
    // resource name, the sequence of returned `committed_size` values will be
    // non-decreasing.
    virtual ::grpc::Status QueryWriteStatus(::grpc::ServerContext* context, const ::google::bytestream::QueryWriteStatusRequest* request, ::google::bytestream::QueryWriteStatusResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Read : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Read() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Read() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Read(::grpc::ServerContext* context, const ::google::bytestream::ReadRequest* request, ::grpc::ServerWriter< ::google::bytestream::ReadResponse>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRead(::grpc::ServerContext* context, ::google::bytestream::ReadRequest* request, ::grpc::ServerAsyncWriter< ::google::bytestream::ReadResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Write : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Write() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Write() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Write(::grpc::ServerContext* context, ::grpc::ServerReader< ::google::bytestream::WriteRequest>* reader, ::google::bytestream::WriteResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWrite(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::google::bytestream::WriteResponse, ::google::bytestream::WriteRequest>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(1, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_QueryWriteStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_QueryWriteStatus() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_QueryWriteStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryWriteStatus(::grpc::ServerContext* context, const ::google::bytestream::QueryWriteStatusRequest* request, ::google::bytestream::QueryWriteStatusResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestQueryWriteStatus(::grpc::ServerContext* context, ::google::bytestream::QueryWriteStatusRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::bytestream::QueryWriteStatusResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Read<WithAsyncMethod_Write<WithAsyncMethod_QueryWriteStatus<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Read : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Read() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Read() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Read(::grpc::ServerContext* context, const ::google::bytestream::ReadRequest* request, ::grpc::ServerWriter< ::google::bytestream::ReadResponse>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Write : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Write() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Write() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Write(::grpc::ServerContext* context, ::grpc::ServerReader< ::google::bytestream::WriteRequest>* reader, ::google::bytestream::WriteResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_QueryWriteStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_QueryWriteStatus() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_QueryWriteStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryWriteStatus(::grpc::ServerContext* context, const ::google::bytestream::QueryWriteStatusRequest* request, ::google::bytestream::QueryWriteStatusResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_QueryWriteStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_QueryWriteStatus() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::StreamedUnaryHandler< ::google::bytestream::QueryWriteStatusRequest, ::google::bytestream::QueryWriteStatusResponse>(std::bind(&WithStreamedUnaryMethod_QueryWriteStatus<BaseClass>::StreamedQueryWriteStatus, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_QueryWriteStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status QueryWriteStatus(::grpc::ServerContext* context, const ::google::bytestream::QueryWriteStatusRequest* request, ::google::bytestream::QueryWriteStatusResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedQueryWriteStatus(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::bytestream::QueryWriteStatusRequest,::google::bytestream::QueryWriteStatusResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_QueryWriteStatus<Service > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_Read : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_Read() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::SplitServerStreamingHandler< ::google::bytestream::ReadRequest, ::google::bytestream::ReadResponse>(std::bind(&WithSplitStreamingMethod_Read<BaseClass>::StreamedRead, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_Read() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Read(::grpc::ServerContext* context, const ::google::bytestream::ReadRequest* request, ::grpc::ServerWriter< ::google::bytestream::ReadResponse>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedRead(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::google::bytestream::ReadRequest,::google::bytestream::ReadResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_Read<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_Read<WithStreamedUnaryMethod_QueryWriteStatus<Service > > StreamedService;
};

}  // namespace bytestream
}  // namespace google


#endif  // GRPC_google_2fbytestream_2fbytestream_2eproto__INCLUDED
