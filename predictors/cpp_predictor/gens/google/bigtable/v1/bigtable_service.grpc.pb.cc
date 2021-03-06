// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/bigtable/v1/bigtable_service.proto

#include "google/bigtable/v1/bigtable_service.pb.h"
#include "google/bigtable/v1/bigtable_service.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace bigtable {
namespace v1 {

static const char* BigtableService_method_names[] = {
  "/google.bigtable.v1.BigtableService/ReadRows",
  "/google.bigtable.v1.BigtableService/SampleRowKeys",
  "/google.bigtable.v1.BigtableService/MutateRow",
  "/google.bigtable.v1.BigtableService/MutateRows",
  "/google.bigtable.v1.BigtableService/CheckAndMutateRow",
  "/google.bigtable.v1.BigtableService/ReadModifyWriteRow",
};

std::unique_ptr< BigtableService::Stub> BigtableService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< BigtableService::Stub> stub(new BigtableService::Stub(channel));
  return stub;
}

BigtableService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ReadRows_(BigtableService_method_names[0], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SampleRowKeys_(BigtableService_method_names[1], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_MutateRow_(BigtableService_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MutateRows_(BigtableService_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CheckAndMutateRow_(BigtableService_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ReadModifyWriteRow_(BigtableService_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::google::bigtable::v1::ReadRowsResponse>* BigtableService::Stub::ReadRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request) {
  return new ::grpc::ClientReader< ::google::bigtable::v1::ReadRowsResponse>(channel_.get(), rpcmethod_ReadRows_, context, request);
}

::grpc::ClientAsyncReader< ::google::bigtable::v1::ReadRowsResponse>* BigtableService::Stub::AsyncReadRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::ClientAsyncReader< ::google::bigtable::v1::ReadRowsResponse>::Create(channel_.get(), cq, rpcmethod_ReadRows_, context, request, tag);
}

::grpc::ClientReader< ::google::bigtable::v1::SampleRowKeysResponse>* BigtableService::Stub::SampleRowKeysRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request) {
  return new ::grpc::ClientReader< ::google::bigtable::v1::SampleRowKeysResponse>(channel_.get(), rpcmethod_SampleRowKeys_, context, request);
}

::grpc::ClientAsyncReader< ::google::bigtable::v1::SampleRowKeysResponse>* BigtableService::Stub::AsyncSampleRowKeysRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::ClientAsyncReader< ::google::bigtable::v1::SampleRowKeysResponse>::Create(channel_.get(), cq, rpcmethod_SampleRowKeys_, context, request, tag);
}

::grpc::Status BigtableService::Stub::MutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_MutateRow_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* BigtableService::Stub::AsyncMutateRowRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_MutateRow_, context, request);
}

::grpc::Status BigtableService::Stub::MutateRows(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowsRequest& request, ::google::bigtable::v1::MutateRowsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_MutateRows_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::MutateRowsResponse>* BigtableService::Stub::AsyncMutateRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::MutateRowsResponse>::Create(channel_.get(), cq, rpcmethod_MutateRows_, context, request);
}

::grpc::Status BigtableService::Stub::CheckAndMutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest& request, ::google::bigtable::v1::CheckAndMutateRowResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CheckAndMutateRow_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::CheckAndMutateRowResponse>* BigtableService::Stub::AsyncCheckAndMutateRowRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::CheckAndMutateRowResponse>::Create(channel_.get(), cq, rpcmethod_CheckAndMutateRow_, context, request);
}

::grpc::Status BigtableService::Stub::ReadModifyWriteRow(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest& request, ::google::bigtable::v1::Row* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ReadModifyWriteRow_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::Row>* BigtableService::Stub::AsyncReadModifyWriteRowRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::Row>::Create(channel_.get(), cq, rpcmethod_ReadModifyWriteRow_, context, request);
}

BigtableService::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableService_method_names[0],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< BigtableService::Service, ::google::bigtable::v1::ReadRowsRequest, ::google::bigtable::v1::ReadRowsResponse>(
          std::mem_fn(&BigtableService::Service::ReadRows), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableService_method_names[1],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< BigtableService::Service, ::google::bigtable::v1::SampleRowKeysRequest, ::google::bigtable::v1::SampleRowKeysResponse>(
          std::mem_fn(&BigtableService::Service::SampleRowKeys), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableService_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableService::Service, ::google::bigtable::v1::MutateRowRequest, ::google::protobuf::Empty>(
          std::mem_fn(&BigtableService::Service::MutateRow), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableService_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableService::Service, ::google::bigtable::v1::MutateRowsRequest, ::google::bigtable::v1::MutateRowsResponse>(
          std::mem_fn(&BigtableService::Service::MutateRows), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableService_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableService::Service, ::google::bigtable::v1::CheckAndMutateRowRequest, ::google::bigtable::v1::CheckAndMutateRowResponse>(
          std::mem_fn(&BigtableService::Service::CheckAndMutateRow), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableService_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableService::Service, ::google::bigtable::v1::ReadModifyWriteRowRequest, ::google::bigtable::v1::Row>(
          std::mem_fn(&BigtableService::Service::ReadModifyWriteRow), this)));
}

BigtableService::Service::~Service() {
}

::grpc::Status BigtableService::Service::ReadRows(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadRowsRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::ReadRowsResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableService::Service::SampleRowKeys(::grpc::ServerContext* context, const ::google::bigtable::v1::SampleRowKeysRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::SampleRowKeysResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableService::Service::MutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableService::Service::MutateRows(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowsRequest* request, ::google::bigtable::v1::MutateRowsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableService::Service::CheckAndMutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest* request, ::google::bigtable::v1::CheckAndMutateRowResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableService::Service::ReadModifyWriteRow(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest* request, ::google::bigtable::v1::Row* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace bigtable
}  // namespace v1

