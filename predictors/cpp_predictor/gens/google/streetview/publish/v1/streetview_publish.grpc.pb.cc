// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/streetview/publish/v1/streetview_publish.proto

#include "google/streetview/publish/v1/streetview_publish.pb.h"
#include "google/streetview/publish/v1/streetview_publish.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace streetview {
namespace publish {
namespace v1 {

static const char* StreetViewPublishService_method_names[] = {
  "/google.streetview.publish.v1.StreetViewPublishService/StartUpload",
  "/google.streetview.publish.v1.StreetViewPublishService/CreatePhoto",
  "/google.streetview.publish.v1.StreetViewPublishService/GetPhoto",
  "/google.streetview.publish.v1.StreetViewPublishService/BatchGetPhotos",
  "/google.streetview.publish.v1.StreetViewPublishService/ListPhotos",
  "/google.streetview.publish.v1.StreetViewPublishService/UpdatePhoto",
  "/google.streetview.publish.v1.StreetViewPublishService/BatchUpdatePhotos",
  "/google.streetview.publish.v1.StreetViewPublishService/DeletePhoto",
  "/google.streetview.publish.v1.StreetViewPublishService/BatchDeletePhotos",
};

std::unique_ptr< StreetViewPublishService::Stub> StreetViewPublishService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< StreetViewPublishService::Stub> stub(new StreetViewPublishService::Stub(channel));
  return stub;
}

StreetViewPublishService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_StartUpload_(StreetViewPublishService_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreatePhoto_(StreetViewPublishService_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetPhoto_(StreetViewPublishService_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchGetPhotos_(StreetViewPublishService_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListPhotos_(StreetViewPublishService_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdatePhoto_(StreetViewPublishService_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchUpdatePhotos_(StreetViewPublishService_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeletePhoto_(StreetViewPublishService_method_names[7], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchDeletePhotos_(StreetViewPublishService_method_names[8], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status StreetViewPublishService::Stub::StartUpload(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::google::streetview::publish::v1::UploadRef* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_StartUpload_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::UploadRef>* StreetViewPublishService::Stub::AsyncStartUploadRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::UploadRef>::Create(channel_.get(), cq, rpcmethod_StartUpload_, context, request);
}

::grpc::Status StreetViewPublishService::Stub::CreatePhoto(::grpc::ClientContext* context, const ::google::streetview::publish::v1::CreatePhotoRequest& request, ::google::streetview::publish::v1::Photo* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreatePhoto_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::Photo>* StreetViewPublishService::Stub::AsyncCreatePhotoRaw(::grpc::ClientContext* context, const ::google::streetview::publish::v1::CreatePhotoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::Photo>::Create(channel_.get(), cq, rpcmethod_CreatePhoto_, context, request);
}

::grpc::Status StreetViewPublishService::Stub::GetPhoto(::grpc::ClientContext* context, const ::google::streetview::publish::v1::GetPhotoRequest& request, ::google::streetview::publish::v1::Photo* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetPhoto_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::Photo>* StreetViewPublishService::Stub::AsyncGetPhotoRaw(::grpc::ClientContext* context, const ::google::streetview::publish::v1::GetPhotoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::Photo>::Create(channel_.get(), cq, rpcmethod_GetPhoto_, context, request);
}

::grpc::Status StreetViewPublishService::Stub::BatchGetPhotos(::grpc::ClientContext* context, const ::google::streetview::publish::v1::BatchGetPhotosRequest& request, ::google::streetview::publish::v1::BatchGetPhotosResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_BatchGetPhotos_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::BatchGetPhotosResponse>* StreetViewPublishService::Stub::AsyncBatchGetPhotosRaw(::grpc::ClientContext* context, const ::google::streetview::publish::v1::BatchGetPhotosRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::BatchGetPhotosResponse>::Create(channel_.get(), cq, rpcmethod_BatchGetPhotos_, context, request);
}

::grpc::Status StreetViewPublishService::Stub::ListPhotos(::grpc::ClientContext* context, const ::google::streetview::publish::v1::ListPhotosRequest& request, ::google::streetview::publish::v1::ListPhotosResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListPhotos_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::ListPhotosResponse>* StreetViewPublishService::Stub::AsyncListPhotosRaw(::grpc::ClientContext* context, const ::google::streetview::publish::v1::ListPhotosRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::ListPhotosResponse>::Create(channel_.get(), cq, rpcmethod_ListPhotos_, context, request);
}

::grpc::Status StreetViewPublishService::Stub::UpdatePhoto(::grpc::ClientContext* context, const ::google::streetview::publish::v1::UpdatePhotoRequest& request, ::google::streetview::publish::v1::Photo* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpdatePhoto_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::Photo>* StreetViewPublishService::Stub::AsyncUpdatePhotoRaw(::grpc::ClientContext* context, const ::google::streetview::publish::v1::UpdatePhotoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::Photo>::Create(channel_.get(), cq, rpcmethod_UpdatePhoto_, context, request);
}

::grpc::Status StreetViewPublishService::Stub::BatchUpdatePhotos(::grpc::ClientContext* context, const ::google::streetview::publish::v1::BatchUpdatePhotosRequest& request, ::google::streetview::publish::v1::BatchUpdatePhotosResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_BatchUpdatePhotos_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::BatchUpdatePhotosResponse>* StreetViewPublishService::Stub::AsyncBatchUpdatePhotosRaw(::grpc::ClientContext* context, const ::google::streetview::publish::v1::BatchUpdatePhotosRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::BatchUpdatePhotosResponse>::Create(channel_.get(), cq, rpcmethod_BatchUpdatePhotos_, context, request);
}

::grpc::Status StreetViewPublishService::Stub::DeletePhoto(::grpc::ClientContext* context, const ::google::streetview::publish::v1::DeletePhotoRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeletePhoto_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* StreetViewPublishService::Stub::AsyncDeletePhotoRaw(::grpc::ClientContext* context, const ::google::streetview::publish::v1::DeletePhotoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeletePhoto_, context, request);
}

::grpc::Status StreetViewPublishService::Stub::BatchDeletePhotos(::grpc::ClientContext* context, const ::google::streetview::publish::v1::BatchDeletePhotosRequest& request, ::google::streetview::publish::v1::BatchDeletePhotosResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_BatchDeletePhotos_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::BatchDeletePhotosResponse>* StreetViewPublishService::Stub::AsyncBatchDeletePhotosRaw(::grpc::ClientContext* context, const ::google::streetview::publish::v1::BatchDeletePhotosRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::streetview::publish::v1::BatchDeletePhotosResponse>::Create(channel_.get(), cq, rpcmethod_BatchDeletePhotos_, context, request);
}

StreetViewPublishService::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      StreetViewPublishService_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StreetViewPublishService::Service, ::google::protobuf::Empty, ::google::streetview::publish::v1::UploadRef>(
          std::mem_fn(&StreetViewPublishService::Service::StartUpload), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StreetViewPublishService_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StreetViewPublishService::Service, ::google::streetview::publish::v1::CreatePhotoRequest, ::google::streetview::publish::v1::Photo>(
          std::mem_fn(&StreetViewPublishService::Service::CreatePhoto), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StreetViewPublishService_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StreetViewPublishService::Service, ::google::streetview::publish::v1::GetPhotoRequest, ::google::streetview::publish::v1::Photo>(
          std::mem_fn(&StreetViewPublishService::Service::GetPhoto), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StreetViewPublishService_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StreetViewPublishService::Service, ::google::streetview::publish::v1::BatchGetPhotosRequest, ::google::streetview::publish::v1::BatchGetPhotosResponse>(
          std::mem_fn(&StreetViewPublishService::Service::BatchGetPhotos), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StreetViewPublishService_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StreetViewPublishService::Service, ::google::streetview::publish::v1::ListPhotosRequest, ::google::streetview::publish::v1::ListPhotosResponse>(
          std::mem_fn(&StreetViewPublishService::Service::ListPhotos), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StreetViewPublishService_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StreetViewPublishService::Service, ::google::streetview::publish::v1::UpdatePhotoRequest, ::google::streetview::publish::v1::Photo>(
          std::mem_fn(&StreetViewPublishService::Service::UpdatePhoto), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StreetViewPublishService_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StreetViewPublishService::Service, ::google::streetview::publish::v1::BatchUpdatePhotosRequest, ::google::streetview::publish::v1::BatchUpdatePhotosResponse>(
          std::mem_fn(&StreetViewPublishService::Service::BatchUpdatePhotos), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StreetViewPublishService_method_names[7],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StreetViewPublishService::Service, ::google::streetview::publish::v1::DeletePhotoRequest, ::google::protobuf::Empty>(
          std::mem_fn(&StreetViewPublishService::Service::DeletePhoto), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StreetViewPublishService_method_names[8],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StreetViewPublishService::Service, ::google::streetview::publish::v1::BatchDeletePhotosRequest, ::google::streetview::publish::v1::BatchDeletePhotosResponse>(
          std::mem_fn(&StreetViewPublishService::Service::BatchDeletePhotos), this)));
}

StreetViewPublishService::Service::~Service() {
}

::grpc::Status StreetViewPublishService::Service::StartUpload(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::google::streetview::publish::v1::UploadRef* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StreetViewPublishService::Service::CreatePhoto(::grpc::ServerContext* context, const ::google::streetview::publish::v1::CreatePhotoRequest* request, ::google::streetview::publish::v1::Photo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StreetViewPublishService::Service::GetPhoto(::grpc::ServerContext* context, const ::google::streetview::publish::v1::GetPhotoRequest* request, ::google::streetview::publish::v1::Photo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StreetViewPublishService::Service::BatchGetPhotos(::grpc::ServerContext* context, const ::google::streetview::publish::v1::BatchGetPhotosRequest* request, ::google::streetview::publish::v1::BatchGetPhotosResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StreetViewPublishService::Service::ListPhotos(::grpc::ServerContext* context, const ::google::streetview::publish::v1::ListPhotosRequest* request, ::google::streetview::publish::v1::ListPhotosResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StreetViewPublishService::Service::UpdatePhoto(::grpc::ServerContext* context, const ::google::streetview::publish::v1::UpdatePhotoRequest* request, ::google::streetview::publish::v1::Photo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StreetViewPublishService::Service::BatchUpdatePhotos(::grpc::ServerContext* context, const ::google::streetview::publish::v1::BatchUpdatePhotosRequest* request, ::google::streetview::publish::v1::BatchUpdatePhotosResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StreetViewPublishService::Service::DeletePhoto(::grpc::ServerContext* context, const ::google::streetview::publish::v1::DeletePhotoRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StreetViewPublishService::Service::BatchDeletePhotos(::grpc::ServerContext* context, const ::google::streetview::publish::v1::BatchDeletePhotosRequest* request, ::google::streetview::publish::v1::BatchDeletePhotosResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace streetview
}  // namespace publish
}  // namespace v1

