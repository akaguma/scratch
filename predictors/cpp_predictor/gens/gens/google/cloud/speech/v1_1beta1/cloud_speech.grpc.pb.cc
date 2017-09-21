// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/speech/v1_1beta1/cloud_speech.proto

#include "google/cloud/speech/v1_1beta1/cloud_speech.pb.h"
#include "google/cloud/speech/v1_1beta1/cloud_speech.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace cloud {
namespace speech {
namespace v1p1beta1 {

static const char* Speech_method_names[] = {
  "/google.cloud.speech.v1p1beta1.Speech/Recognize",
  "/google.cloud.speech.v1p1beta1.Speech/LongRunningRecognize",
  "/google.cloud.speech.v1p1beta1.Speech/StreamingRecognize",
};

std::unique_ptr< Speech::Stub> Speech::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Speech::Stub> stub(new Speech::Stub(channel));
  return stub;
}

Speech::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Recognize_(Speech_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_LongRunningRecognize_(Speech_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StreamingRecognize_(Speech_method_names[2], ::grpc::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::Status Speech::Stub::Recognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Recognize_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>* Speech::Stub::AsyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>::Create(channel_.get(), cq, rpcmethod_Recognize_, context, request);
}

::grpc::Status Speech::Stub::LongRunningRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_LongRunningRecognize_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Speech::Stub::AsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_LongRunningRecognize_, context, request);
}

::grpc::ClientReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* Speech::Stub::StreamingRecognizeRaw(::grpc::ClientContext* context) {
  return new ::grpc::ClientReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>(channel_.get(), rpcmethod_StreamingRecognize_, context);
}

::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* Speech::Stub::AsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>::Create(channel_.get(), cq, rpcmethod_StreamingRecognize_, context, tag);
}

Speech::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      Speech_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Speech::Service, ::google::cloud::speech::v1p1beta1::RecognizeRequest, ::google::cloud::speech::v1p1beta1::RecognizeResponse>(
          std::mem_fn(&Speech::Service::Recognize), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Speech_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Speech::Service, ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest, ::google::longrunning::Operation>(
          std::mem_fn(&Speech::Service::LongRunningRecognize), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Speech_method_names[2],
      ::grpc::RpcMethod::BIDI_STREAMING,
      new ::grpc::BidiStreamingHandler< Speech::Service, ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>(
          std::mem_fn(&Speech::Service::StreamingRecognize), this)));
}

Speech::Service::~Service() {
}

::grpc::Status Speech::Service::Recognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest* request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Speech::Service::LongRunningRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Speech::Service::StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace speech
}  // namespace v1p1beta1

