// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/iam/admin/v1/iam.proto

#include "google/iam/admin/v1/iam.pb.h"
#include "google/iam/admin/v1/iam.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace iam {
namespace admin {
namespace v1 {

static const char* IAM_method_names[] = {
  "/google.iam.admin.v1.IAM/ListServiceAccounts",
  "/google.iam.admin.v1.IAM/GetServiceAccount",
  "/google.iam.admin.v1.IAM/CreateServiceAccount",
  "/google.iam.admin.v1.IAM/UpdateServiceAccount",
  "/google.iam.admin.v1.IAM/DeleteServiceAccount",
  "/google.iam.admin.v1.IAM/ListServiceAccountKeys",
  "/google.iam.admin.v1.IAM/GetServiceAccountKey",
  "/google.iam.admin.v1.IAM/CreateServiceAccountKey",
  "/google.iam.admin.v1.IAM/DeleteServiceAccountKey",
  "/google.iam.admin.v1.IAM/SignBlob",
  "/google.iam.admin.v1.IAM/SignJwt",
  "/google.iam.admin.v1.IAM/GetIamPolicy",
  "/google.iam.admin.v1.IAM/SetIamPolicy",
  "/google.iam.admin.v1.IAM/TestIamPermissions",
  "/google.iam.admin.v1.IAM/QueryGrantableRoles",
  "/google.iam.admin.v1.IAM/ListRoles",
  "/google.iam.admin.v1.IAM/GetRole",
  "/google.iam.admin.v1.IAM/CreateRole",
  "/google.iam.admin.v1.IAM/UpdateRole",
  "/google.iam.admin.v1.IAM/DeleteRole",
  "/google.iam.admin.v1.IAM/UndeleteRole",
  "/google.iam.admin.v1.IAM/QueryTestablePermissions",
};

std::unique_ptr< IAM::Stub> IAM::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< IAM::Stub> stub(new IAM::Stub(channel));
  return stub;
}

IAM::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListServiceAccounts_(IAM_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceAccount_(IAM_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateServiceAccount_(IAM_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateServiceAccount_(IAM_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteServiceAccount_(IAM_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListServiceAccountKeys_(IAM_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceAccountKey_(IAM_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateServiceAccountKey_(IAM_method_names[7], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteServiceAccountKey_(IAM_method_names[8], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SignBlob_(IAM_method_names[9], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SignJwt_(IAM_method_names[10], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetIamPolicy_(IAM_method_names[11], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetIamPolicy_(IAM_method_names[12], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TestIamPermissions_(IAM_method_names[13], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_QueryGrantableRoles_(IAM_method_names[14], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListRoles_(IAM_method_names[15], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetRole_(IAM_method_names[16], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateRole_(IAM_method_names[17], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateRole_(IAM_method_names[18], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteRole_(IAM_method_names[19], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UndeleteRole_(IAM_method_names[20], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_QueryTestablePermissions_(IAM_method_names[21], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IAM::Stub::ListServiceAccounts(::grpc::ClientContext* context, const ::google::iam::admin::v1::ListServiceAccountsRequest& request, ::google::iam::admin::v1::ListServiceAccountsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListServiceAccounts_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ListServiceAccountsResponse>* IAM::Stub::AsyncListServiceAccountsRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::ListServiceAccountsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ListServiceAccountsResponse>::Create(channel_.get(), cq, rpcmethod_ListServiceAccounts_, context, request);
}

::grpc::Status IAM::Stub::GetServiceAccount(::grpc::ClientContext* context, const ::google::iam::admin::v1::GetServiceAccountRequest& request, ::google::iam::admin::v1::ServiceAccount* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceAccount_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccount>* IAM::Stub::AsyncGetServiceAccountRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::GetServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccount>::Create(channel_.get(), cq, rpcmethod_GetServiceAccount_, context, request);
}

::grpc::Status IAM::Stub::CreateServiceAccount(::grpc::ClientContext* context, const ::google::iam::admin::v1::CreateServiceAccountRequest& request, ::google::iam::admin::v1::ServiceAccount* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateServiceAccount_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccount>* IAM::Stub::AsyncCreateServiceAccountRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::CreateServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccount>::Create(channel_.get(), cq, rpcmethod_CreateServiceAccount_, context, request);
}

::grpc::Status IAM::Stub::UpdateServiceAccount(::grpc::ClientContext* context, const ::google::iam::admin::v1::ServiceAccount& request, ::google::iam::admin::v1::ServiceAccount* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateServiceAccount_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccount>* IAM::Stub::AsyncUpdateServiceAccountRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::ServiceAccount& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccount>::Create(channel_.get(), cq, rpcmethod_UpdateServiceAccount_, context, request);
}

::grpc::Status IAM::Stub::DeleteServiceAccount(::grpc::ClientContext* context, const ::google::iam::admin::v1::DeleteServiceAccountRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteServiceAccount_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* IAM::Stub::AsyncDeleteServiceAccountRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::DeleteServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteServiceAccount_, context, request);
}

::grpc::Status IAM::Stub::ListServiceAccountKeys(::grpc::ClientContext* context, const ::google::iam::admin::v1::ListServiceAccountKeysRequest& request, ::google::iam::admin::v1::ListServiceAccountKeysResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListServiceAccountKeys_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ListServiceAccountKeysResponse>* IAM::Stub::AsyncListServiceAccountKeysRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::ListServiceAccountKeysRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ListServiceAccountKeysResponse>::Create(channel_.get(), cq, rpcmethod_ListServiceAccountKeys_, context, request);
}

::grpc::Status IAM::Stub::GetServiceAccountKey(::grpc::ClientContext* context, const ::google::iam::admin::v1::GetServiceAccountKeyRequest& request, ::google::iam::admin::v1::ServiceAccountKey* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceAccountKey_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccountKey>* IAM::Stub::AsyncGetServiceAccountKeyRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::GetServiceAccountKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccountKey>::Create(channel_.get(), cq, rpcmethod_GetServiceAccountKey_, context, request);
}

::grpc::Status IAM::Stub::CreateServiceAccountKey(::grpc::ClientContext* context, const ::google::iam::admin::v1::CreateServiceAccountKeyRequest& request, ::google::iam::admin::v1::ServiceAccountKey* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateServiceAccountKey_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccountKey>* IAM::Stub::AsyncCreateServiceAccountKeyRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::CreateServiceAccountKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ServiceAccountKey>::Create(channel_.get(), cq, rpcmethod_CreateServiceAccountKey_, context, request);
}

::grpc::Status IAM::Stub::DeleteServiceAccountKey(::grpc::ClientContext* context, const ::google::iam::admin::v1::DeleteServiceAccountKeyRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteServiceAccountKey_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* IAM::Stub::AsyncDeleteServiceAccountKeyRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::DeleteServiceAccountKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteServiceAccountKey_, context, request);
}

::grpc::Status IAM::Stub::SignBlob(::grpc::ClientContext* context, const ::google::iam::admin::v1::SignBlobRequest& request, ::google::iam::admin::v1::SignBlobResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SignBlob_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::SignBlobResponse>* IAM::Stub::AsyncSignBlobRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::SignBlobRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::SignBlobResponse>::Create(channel_.get(), cq, rpcmethod_SignBlob_, context, request);
}

::grpc::Status IAM::Stub::SignJwt(::grpc::ClientContext* context, const ::google::iam::admin::v1::SignJwtRequest& request, ::google::iam::admin::v1::SignJwtResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SignJwt_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::SignJwtResponse>* IAM::Stub::AsyncSignJwtRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::SignJwtRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::SignJwtResponse>::Create(channel_.get(), cq, rpcmethod_SignJwt_, context, request);
}

::grpc::Status IAM::Stub::GetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::google::iam::v1::Policy* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetIamPolicy_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* IAM::Stub::AsyncGetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>::Create(channel_.get(), cq, rpcmethod_GetIamPolicy_, context, request);
}

::grpc::Status IAM::Stub::SetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::google::iam::v1::Policy* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SetIamPolicy_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* IAM::Stub::AsyncSetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>::Create(channel_.get(), cq, rpcmethod_SetIamPolicy_, context, request);
}

::grpc::Status IAM::Stub::TestIamPermissions(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::google::iam::v1::TestIamPermissionsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_TestIamPermissions_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>* IAM::Stub::AsyncTestIamPermissionsRaw(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>::Create(channel_.get(), cq, rpcmethod_TestIamPermissions_, context, request);
}

::grpc::Status IAM::Stub::QueryGrantableRoles(::grpc::ClientContext* context, const ::google::iam::admin::v1::QueryGrantableRolesRequest& request, ::google::iam::admin::v1::QueryGrantableRolesResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_QueryGrantableRoles_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::QueryGrantableRolesResponse>* IAM::Stub::AsyncQueryGrantableRolesRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::QueryGrantableRolesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::QueryGrantableRolesResponse>::Create(channel_.get(), cq, rpcmethod_QueryGrantableRoles_, context, request);
}

::grpc::Status IAM::Stub::ListRoles(::grpc::ClientContext* context, const ::google::iam::admin::v1::ListRolesRequest& request, ::google::iam::admin::v1::ListRolesResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListRoles_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ListRolesResponse>* IAM::Stub::AsyncListRolesRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::ListRolesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::ListRolesResponse>::Create(channel_.get(), cq, rpcmethod_ListRoles_, context, request);
}

::grpc::Status IAM::Stub::GetRole(::grpc::ClientContext* context, const ::google::iam::admin::v1::GetRoleRequest& request, ::google::iam::admin::v1::Role* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetRole_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>* IAM::Stub::AsyncGetRoleRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::GetRoleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>::Create(channel_.get(), cq, rpcmethod_GetRole_, context, request);
}

::grpc::Status IAM::Stub::CreateRole(::grpc::ClientContext* context, const ::google::iam::admin::v1::CreateRoleRequest& request, ::google::iam::admin::v1::Role* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateRole_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>* IAM::Stub::AsyncCreateRoleRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::CreateRoleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>::Create(channel_.get(), cq, rpcmethod_CreateRole_, context, request);
}

::grpc::Status IAM::Stub::UpdateRole(::grpc::ClientContext* context, const ::google::iam::admin::v1::UpdateRoleRequest& request, ::google::iam::admin::v1::Role* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateRole_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>* IAM::Stub::AsyncUpdateRoleRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::UpdateRoleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>::Create(channel_.get(), cq, rpcmethod_UpdateRole_, context, request);
}

::grpc::Status IAM::Stub::DeleteRole(::grpc::ClientContext* context, const ::google::iam::admin::v1::DeleteRoleRequest& request, ::google::iam::admin::v1::Role* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteRole_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>* IAM::Stub::AsyncDeleteRoleRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::DeleteRoleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>::Create(channel_.get(), cq, rpcmethod_DeleteRole_, context, request);
}

::grpc::Status IAM::Stub::UndeleteRole(::grpc::ClientContext* context, const ::google::iam::admin::v1::UndeleteRoleRequest& request, ::google::iam::admin::v1::Role* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UndeleteRole_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>* IAM::Stub::AsyncUndeleteRoleRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::UndeleteRoleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::Role>::Create(channel_.get(), cq, rpcmethod_UndeleteRole_, context, request);
}

::grpc::Status IAM::Stub::QueryTestablePermissions(::grpc::ClientContext* context, const ::google::iam::admin::v1::QueryTestablePermissionsRequest& request, ::google::iam::admin::v1::QueryTestablePermissionsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_QueryTestablePermissions_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::QueryTestablePermissionsResponse>* IAM::Stub::AsyncQueryTestablePermissionsRaw(::grpc::ClientContext* context, const ::google::iam::admin::v1::QueryTestablePermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::admin::v1::QueryTestablePermissionsResponse>::Create(channel_.get(), cq, rpcmethod_QueryTestablePermissions_, context, request);
}

IAM::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::ListServiceAccountsRequest, ::google::iam::admin::v1::ListServiceAccountsResponse>(
          std::mem_fn(&IAM::Service::ListServiceAccounts), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::GetServiceAccountRequest, ::google::iam::admin::v1::ServiceAccount>(
          std::mem_fn(&IAM::Service::GetServiceAccount), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::CreateServiceAccountRequest, ::google::iam::admin::v1::ServiceAccount>(
          std::mem_fn(&IAM::Service::CreateServiceAccount), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::ServiceAccount, ::google::iam::admin::v1::ServiceAccount>(
          std::mem_fn(&IAM::Service::UpdateServiceAccount), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::DeleteServiceAccountRequest, ::google::protobuf::Empty>(
          std::mem_fn(&IAM::Service::DeleteServiceAccount), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::ListServiceAccountKeysRequest, ::google::iam::admin::v1::ListServiceAccountKeysResponse>(
          std::mem_fn(&IAM::Service::ListServiceAccountKeys), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::GetServiceAccountKeyRequest, ::google::iam::admin::v1::ServiceAccountKey>(
          std::mem_fn(&IAM::Service::GetServiceAccountKey), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[7],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::CreateServiceAccountKeyRequest, ::google::iam::admin::v1::ServiceAccountKey>(
          std::mem_fn(&IAM::Service::CreateServiceAccountKey), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[8],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::DeleteServiceAccountKeyRequest, ::google::protobuf::Empty>(
          std::mem_fn(&IAM::Service::DeleteServiceAccountKey), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[9],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::SignBlobRequest, ::google::iam::admin::v1::SignBlobResponse>(
          std::mem_fn(&IAM::Service::SignBlob), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[10],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::SignJwtRequest, ::google::iam::admin::v1::SignJwtResponse>(
          std::mem_fn(&IAM::Service::SignJwt), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[11],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::v1::GetIamPolicyRequest, ::google::iam::v1::Policy>(
          std::mem_fn(&IAM::Service::GetIamPolicy), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[12],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::v1::SetIamPolicyRequest, ::google::iam::v1::Policy>(
          std::mem_fn(&IAM::Service::SetIamPolicy), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[13],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::v1::TestIamPermissionsRequest, ::google::iam::v1::TestIamPermissionsResponse>(
          std::mem_fn(&IAM::Service::TestIamPermissions), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[14],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::QueryGrantableRolesRequest, ::google::iam::admin::v1::QueryGrantableRolesResponse>(
          std::mem_fn(&IAM::Service::QueryGrantableRoles), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[15],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::ListRolesRequest, ::google::iam::admin::v1::ListRolesResponse>(
          std::mem_fn(&IAM::Service::ListRoles), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[16],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::GetRoleRequest, ::google::iam::admin::v1::Role>(
          std::mem_fn(&IAM::Service::GetRole), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[17],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::CreateRoleRequest, ::google::iam::admin::v1::Role>(
          std::mem_fn(&IAM::Service::CreateRole), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[18],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::UpdateRoleRequest, ::google::iam::admin::v1::Role>(
          std::mem_fn(&IAM::Service::UpdateRole), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[19],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::DeleteRoleRequest, ::google::iam::admin::v1::Role>(
          std::mem_fn(&IAM::Service::DeleteRole), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[20],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::UndeleteRoleRequest, ::google::iam::admin::v1::Role>(
          std::mem_fn(&IAM::Service::UndeleteRole), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      IAM_method_names[21],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< IAM::Service, ::google::iam::admin::v1::QueryTestablePermissionsRequest, ::google::iam::admin::v1::QueryTestablePermissionsResponse>(
          std::mem_fn(&IAM::Service::QueryTestablePermissions), this)));
}

IAM::Service::~Service() {
}

::grpc::Status IAM::Service::ListServiceAccounts(::grpc::ServerContext* context, const ::google::iam::admin::v1::ListServiceAccountsRequest* request, ::google::iam::admin::v1::ListServiceAccountsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::GetServiceAccount(::grpc::ServerContext* context, const ::google::iam::admin::v1::GetServiceAccountRequest* request, ::google::iam::admin::v1::ServiceAccount* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::CreateServiceAccount(::grpc::ServerContext* context, const ::google::iam::admin::v1::CreateServiceAccountRequest* request, ::google::iam::admin::v1::ServiceAccount* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::UpdateServiceAccount(::grpc::ServerContext* context, const ::google::iam::admin::v1::ServiceAccount* request, ::google::iam::admin::v1::ServiceAccount* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::DeleteServiceAccount(::grpc::ServerContext* context, const ::google::iam::admin::v1::DeleteServiceAccountRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::ListServiceAccountKeys(::grpc::ServerContext* context, const ::google::iam::admin::v1::ListServiceAccountKeysRequest* request, ::google::iam::admin::v1::ListServiceAccountKeysResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::GetServiceAccountKey(::grpc::ServerContext* context, const ::google::iam::admin::v1::GetServiceAccountKeyRequest* request, ::google::iam::admin::v1::ServiceAccountKey* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::CreateServiceAccountKey(::grpc::ServerContext* context, const ::google::iam::admin::v1::CreateServiceAccountKeyRequest* request, ::google::iam::admin::v1::ServiceAccountKey* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::DeleteServiceAccountKey(::grpc::ServerContext* context, const ::google::iam::admin::v1::DeleteServiceAccountKeyRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::SignBlob(::grpc::ServerContext* context, const ::google::iam::admin::v1::SignBlobRequest* request, ::google::iam::admin::v1::SignBlobResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::SignJwt(::grpc::ServerContext* context, const ::google::iam::admin::v1::SignJwtRequest* request, ::google::iam::admin::v1::SignJwtResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::GetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::GetIamPolicyRequest* request, ::google::iam::v1::Policy* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::SetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::SetIamPolicyRequest* request, ::google::iam::v1::Policy* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::TestIamPermissions(::grpc::ServerContext* context, const ::google::iam::v1::TestIamPermissionsRequest* request, ::google::iam::v1::TestIamPermissionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::QueryGrantableRoles(::grpc::ServerContext* context, const ::google::iam::admin::v1::QueryGrantableRolesRequest* request, ::google::iam::admin::v1::QueryGrantableRolesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::ListRoles(::grpc::ServerContext* context, const ::google::iam::admin::v1::ListRolesRequest* request, ::google::iam::admin::v1::ListRolesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::GetRole(::grpc::ServerContext* context, const ::google::iam::admin::v1::GetRoleRequest* request, ::google::iam::admin::v1::Role* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::CreateRole(::grpc::ServerContext* context, const ::google::iam::admin::v1::CreateRoleRequest* request, ::google::iam::admin::v1::Role* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::UpdateRole(::grpc::ServerContext* context, const ::google::iam::admin::v1::UpdateRoleRequest* request, ::google::iam::admin::v1::Role* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::DeleteRole(::grpc::ServerContext* context, const ::google::iam::admin::v1::DeleteRoleRequest* request, ::google::iam::admin::v1::Role* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::UndeleteRole(::grpc::ServerContext* context, const ::google::iam::admin::v1::UndeleteRoleRequest* request, ::google::iam::admin::v1::Role* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAM::Service::QueryTestablePermissions(::grpc::ServerContext* context, const ::google::iam::admin::v1::QueryTestablePermissionsRequest* request, ::google::iam::admin::v1::QueryTestablePermissionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace iam
}  // namespace admin
}  // namespace v1

