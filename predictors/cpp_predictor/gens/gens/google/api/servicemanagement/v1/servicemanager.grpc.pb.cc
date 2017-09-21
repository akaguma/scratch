// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/api/servicemanagement/v1/servicemanager.pb.h"
#include "google/api/servicemanagement/v1/servicemanager.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace api {
namespace servicemanagement {
namespace v1 {

static const char* ServiceManager_method_names[] = {
  "/google.api.servicemanagement.v1.ServiceManager/ListServices",
  "/google.api.servicemanagement.v1.ServiceManager/GetService",
  "/google.api.servicemanagement.v1.ServiceManager/CreateService",
  "/google.api.servicemanagement.v1.ServiceManager/DeleteService",
  "/google.api.servicemanagement.v1.ServiceManager/UndeleteService",
  "/google.api.servicemanagement.v1.ServiceManager/ListServiceConfigs",
  "/google.api.servicemanagement.v1.ServiceManager/GetServiceConfig",
  "/google.api.servicemanagement.v1.ServiceManager/CreateServiceConfig",
  "/google.api.servicemanagement.v1.ServiceManager/SubmitConfigSource",
  "/google.api.servicemanagement.v1.ServiceManager/ListServiceRollouts",
  "/google.api.servicemanagement.v1.ServiceManager/GetServiceRollout",
  "/google.api.servicemanagement.v1.ServiceManager/CreateServiceRollout",
  "/google.api.servicemanagement.v1.ServiceManager/GenerateConfigReport",
  "/google.api.servicemanagement.v1.ServiceManager/EnableService",
  "/google.api.servicemanagement.v1.ServiceManager/DisableService",
};

std::unique_ptr< ServiceManager::Stub> ServiceManager::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< ServiceManager::Stub> stub(new ServiceManager::Stub(channel));
  return stub;
}

ServiceManager::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListServices_(ServiceManager_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetService_(ServiceManager_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateService_(ServiceManager_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteService_(ServiceManager_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UndeleteService_(ServiceManager_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListServiceConfigs_(ServiceManager_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceConfig_(ServiceManager_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateServiceConfig_(ServiceManager_method_names[7], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SubmitConfigSource_(ServiceManager_method_names[8], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListServiceRollouts_(ServiceManager_method_names[9], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceRollout_(ServiceManager_method_names[10], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateServiceRollout_(ServiceManager_method_names[11], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GenerateConfigReport_(ServiceManager_method_names[12], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EnableService_(ServiceManager_method_names[13], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DisableService_(ServiceManager_method_names[14], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ServiceManager::Stub::ListServices(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::ListServicesRequest& request, ::google::api::servicemanagement::v1::ListServicesResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListServices_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::ListServicesResponse>* ServiceManager::Stub::AsyncListServicesRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::ListServicesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::ListServicesResponse>::Create(channel_.get(), cq, rpcmethod_ListServices_, context, request);
}

::grpc::Status ServiceManager::Stub::GetService(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::GetServiceRequest& request, ::google::api::servicemanagement::v1::ManagedService* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetService_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::ManagedService>* ServiceManager::Stub::AsyncGetServiceRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::GetServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::ManagedService>::Create(channel_.get(), cq, rpcmethod_GetService_, context, request);
}

::grpc::Status ServiceManager::Stub::CreateService(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::CreateServiceRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateService_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ServiceManager::Stub::AsyncCreateServiceRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::CreateServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateService_, context, request);
}

::grpc::Status ServiceManager::Stub::DeleteService(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::DeleteServiceRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteService_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ServiceManager::Stub::AsyncDeleteServiceRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::DeleteServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_DeleteService_, context, request);
}

::grpc::Status ServiceManager::Stub::UndeleteService(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::UndeleteServiceRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UndeleteService_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ServiceManager::Stub::AsyncUndeleteServiceRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::UndeleteServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_UndeleteService_, context, request);
}

::grpc::Status ServiceManager::Stub::ListServiceConfigs(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::ListServiceConfigsRequest& request, ::google::api::servicemanagement::v1::ListServiceConfigsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListServiceConfigs_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::ListServiceConfigsResponse>* ServiceManager::Stub::AsyncListServiceConfigsRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::ListServiceConfigsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::ListServiceConfigsResponse>::Create(channel_.get(), cq, rpcmethod_ListServiceConfigs_, context, request);
}

::grpc::Status ServiceManager::Stub::GetServiceConfig(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::GetServiceConfigRequest& request, ::google::api::Service* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::Service>* ServiceManager::Stub::AsyncGetServiceConfigRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::GetServiceConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::api::Service>::Create(channel_.get(), cq, rpcmethod_GetServiceConfig_, context, request);
}

::grpc::Status ServiceManager::Stub::CreateServiceConfig(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::CreateServiceConfigRequest& request, ::google::api::Service* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateServiceConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::Service>* ServiceManager::Stub::AsyncCreateServiceConfigRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::CreateServiceConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::api::Service>::Create(channel_.get(), cq, rpcmethod_CreateServiceConfig_, context, request);
}

::grpc::Status ServiceManager::Stub::SubmitConfigSource(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::SubmitConfigSourceRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SubmitConfigSource_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ServiceManager::Stub::AsyncSubmitConfigSourceRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::SubmitConfigSourceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_SubmitConfigSource_, context, request);
}

::grpc::Status ServiceManager::Stub::ListServiceRollouts(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::ListServiceRolloutsRequest& request, ::google::api::servicemanagement::v1::ListServiceRolloutsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListServiceRollouts_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::ListServiceRolloutsResponse>* ServiceManager::Stub::AsyncListServiceRolloutsRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::ListServiceRolloutsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::ListServiceRolloutsResponse>::Create(channel_.get(), cq, rpcmethod_ListServiceRollouts_, context, request);
}

::grpc::Status ServiceManager::Stub::GetServiceRollout(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::GetServiceRolloutRequest& request, ::google::api::servicemanagement::v1::Rollout* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceRollout_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::Rollout>* ServiceManager::Stub::AsyncGetServiceRolloutRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::GetServiceRolloutRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::Rollout>::Create(channel_.get(), cq, rpcmethod_GetServiceRollout_, context, request);
}

::grpc::Status ServiceManager::Stub::CreateServiceRollout(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::CreateServiceRolloutRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateServiceRollout_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ServiceManager::Stub::AsyncCreateServiceRolloutRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::CreateServiceRolloutRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateServiceRollout_, context, request);
}

::grpc::Status ServiceManager::Stub::GenerateConfigReport(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::GenerateConfigReportRequest& request, ::google::api::servicemanagement::v1::GenerateConfigReportResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GenerateConfigReport_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::GenerateConfigReportResponse>* ServiceManager::Stub::AsyncGenerateConfigReportRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::GenerateConfigReportRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::api::servicemanagement::v1::GenerateConfigReportResponse>::Create(channel_.get(), cq, rpcmethod_GenerateConfigReport_, context, request);
}

::grpc::Status ServiceManager::Stub::EnableService(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::EnableServiceRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_EnableService_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ServiceManager::Stub::AsyncEnableServiceRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::EnableServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_EnableService_, context, request);
}

::grpc::Status ServiceManager::Stub::DisableService(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::DisableServiceRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DisableService_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ServiceManager::Stub::AsyncDisableServiceRaw(::grpc::ClientContext* context, const ::google::api::servicemanagement::v1::DisableServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_DisableService_, context, request);
}

ServiceManager::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::ListServicesRequest, ::google::api::servicemanagement::v1::ListServicesResponse>(
          std::mem_fn(&ServiceManager::Service::ListServices), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::GetServiceRequest, ::google::api::servicemanagement::v1::ManagedService>(
          std::mem_fn(&ServiceManager::Service::GetService), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::CreateServiceRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ServiceManager::Service::CreateService), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::DeleteServiceRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ServiceManager::Service::DeleteService), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::UndeleteServiceRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ServiceManager::Service::UndeleteService), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::ListServiceConfigsRequest, ::google::api::servicemanagement::v1::ListServiceConfigsResponse>(
          std::mem_fn(&ServiceManager::Service::ListServiceConfigs), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::GetServiceConfigRequest, ::google::api::Service>(
          std::mem_fn(&ServiceManager::Service::GetServiceConfig), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[7],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::CreateServiceConfigRequest, ::google::api::Service>(
          std::mem_fn(&ServiceManager::Service::CreateServiceConfig), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[8],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::SubmitConfigSourceRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ServiceManager::Service::SubmitConfigSource), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[9],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::ListServiceRolloutsRequest, ::google::api::servicemanagement::v1::ListServiceRolloutsResponse>(
          std::mem_fn(&ServiceManager::Service::ListServiceRollouts), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[10],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::GetServiceRolloutRequest, ::google::api::servicemanagement::v1::Rollout>(
          std::mem_fn(&ServiceManager::Service::GetServiceRollout), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[11],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::CreateServiceRolloutRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ServiceManager::Service::CreateServiceRollout), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[12],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::GenerateConfigReportRequest, ::google::api::servicemanagement::v1::GenerateConfigReportResponse>(
          std::mem_fn(&ServiceManager::Service::GenerateConfigReport), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[13],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::EnableServiceRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ServiceManager::Service::EnableService), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ServiceManager_method_names[14],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ServiceManager::Service, ::google::api::servicemanagement::v1::DisableServiceRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ServiceManager::Service::DisableService), this)));
}

ServiceManager::Service::~Service() {
}

::grpc::Status ServiceManager::Service::ListServices(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::ListServicesRequest* request, ::google::api::servicemanagement::v1::ListServicesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::GetService(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::GetServiceRequest* request, ::google::api::servicemanagement::v1::ManagedService* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::CreateService(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::CreateServiceRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::DeleteService(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::DeleteServiceRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::UndeleteService(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::UndeleteServiceRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::ListServiceConfigs(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::ListServiceConfigsRequest* request, ::google::api::servicemanagement::v1::ListServiceConfigsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::GetServiceConfig(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::GetServiceConfigRequest* request, ::google::api::Service* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::CreateServiceConfig(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::CreateServiceConfigRequest* request, ::google::api::Service* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::SubmitConfigSource(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::SubmitConfigSourceRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::ListServiceRollouts(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::ListServiceRolloutsRequest* request, ::google::api::servicemanagement::v1::ListServiceRolloutsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::GetServiceRollout(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::GetServiceRolloutRequest* request, ::google::api::servicemanagement::v1::Rollout* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::CreateServiceRollout(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::CreateServiceRolloutRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::GenerateConfigReport(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::GenerateConfigReportRequest* request, ::google::api::servicemanagement::v1::GenerateConfigReportResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::EnableService(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::EnableServiceRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceManager::Service::DisableService(::grpc::ServerContext* context, const ::google::api::servicemanagement::v1::DisableServiceRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace api
}  // namespace servicemanagement
}  // namespace v1

