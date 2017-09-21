// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/bigtable/v1/bigtable_service.proto
// Original file comments:
// Copyright 2017 Google Inc.
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
#ifndef GRPC_google_2fbigtable_2fv1_2fbigtable_5fservice_2eproto__INCLUDED
#define GRPC_google_2fbigtable_2fv1_2fbigtable_5fservice_2eproto__INCLUDED

#include "google/bigtable/v1/bigtable_service.pb.h"

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
namespace bigtable {
namespace v1 {

// Service for reading from and writing to existing Bigtables.
class BigtableService final {
 public:
  static constexpr char const* service_full_name() {
    return "google.bigtable.v1.BigtableService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Streams back the contents of all requested rows, optionally applying
    // the same Reader filter to each. Depending on their size, rows may be
    // broken up across multiple responses, but atomicity of each row will still
    // be preserved.
    std::unique_ptr< ::grpc::ClientReaderInterface< ::google::bigtable::v1::ReadRowsResponse>> ReadRows(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::google::bigtable::v1::ReadRowsResponse>>(ReadRowsRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::google::bigtable::v1::ReadRowsResponse>> AsyncReadRows(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::google::bigtable::v1::ReadRowsResponse>>(AsyncReadRowsRaw(context, request, cq, tag));
    }
    // Returns a sample of row keys in the table. The returned row keys will
    // delimit contiguous sections of the table of approximately equal size,
    // which can be used to break up the data for distributed tasks like
    // mapreduces.
    std::unique_ptr< ::grpc::ClientReaderInterface< ::google::bigtable::v1::SampleRowKeysResponse>> SampleRowKeys(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::google::bigtable::v1::SampleRowKeysResponse>>(SampleRowKeysRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::google::bigtable::v1::SampleRowKeysResponse>> AsyncSampleRowKeys(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::google::bigtable::v1::SampleRowKeysResponse>>(AsyncSampleRowKeysRaw(context, request, cq, tag));
    }
    // Mutates a row atomically. Cells already present in the row are left
    // unchanged unless explicitly changed by 'mutation'.
    virtual ::grpc::Status MutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncMutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncMutateRowRaw(context, request, cq));
    }
    // Mutates multiple rows in a batch. Each individual row is mutated
    // atomically as in MutateRow, but the entire batch is not executed
    // atomically.
    virtual ::grpc::Status MutateRows(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowsRequest& request, ::google::bigtable::v1::MutateRowsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::v1::MutateRowsResponse>> AsyncMutateRows(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::v1::MutateRowsResponse>>(AsyncMutateRowsRaw(context, request, cq));
    }
    // Mutates a row atomically based on the output of a predicate Reader filter.
    virtual ::grpc::Status CheckAndMutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest& request, ::google::bigtable::v1::CheckAndMutateRowResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::v1::CheckAndMutateRowResponse>> AsyncCheckAndMutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::v1::CheckAndMutateRowResponse>>(AsyncCheckAndMutateRowRaw(context, request, cq));
    }
    // Modifies a row atomically, reading the latest existing timestamp/value from
    // the specified columns and writing a new value at
    // max(existing timestamp, current server time) based on pre-defined
    // read/modify/write rules. Returns the new contents of all modified cells.
    virtual ::grpc::Status ReadModifyWriteRow(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest& request, ::google::bigtable::v1::Row* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::v1::Row>> AsyncReadModifyWriteRow(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::v1::Row>>(AsyncReadModifyWriteRowRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientReaderInterface< ::google::bigtable::v1::ReadRowsResponse>* ReadRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::google::bigtable::v1::ReadRowsResponse>* AsyncReadRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientReaderInterface< ::google::bigtable::v1::SampleRowKeysResponse>* SampleRowKeysRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::google::bigtable::v1::SampleRowKeysResponse>* AsyncSampleRowKeysRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncMutateRowRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::v1::MutateRowsResponse>* AsyncMutateRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::v1::CheckAndMutateRowResponse>* AsyncCheckAndMutateRowRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::v1::Row>* AsyncReadModifyWriteRowRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::google::bigtable::v1::ReadRowsResponse>> ReadRows(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::google::bigtable::v1::ReadRowsResponse>>(ReadRowsRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::google::bigtable::v1::ReadRowsResponse>> AsyncReadRows(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::google::bigtable::v1::ReadRowsResponse>>(AsyncReadRowsRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReader< ::google::bigtable::v1::SampleRowKeysResponse>> SampleRowKeys(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::google::bigtable::v1::SampleRowKeysResponse>>(SampleRowKeysRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::google::bigtable::v1::SampleRowKeysResponse>> AsyncSampleRowKeys(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::google::bigtable::v1::SampleRowKeysResponse>>(AsyncSampleRowKeysRaw(context, request, cq, tag));
    }
    ::grpc::Status MutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowRequest& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncMutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncMutateRowRaw(context, request, cq));
    }
    ::grpc::Status MutateRows(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowsRequest& request, ::google::bigtable::v1::MutateRowsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::MutateRowsResponse>> AsyncMutateRows(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::MutateRowsResponse>>(AsyncMutateRowsRaw(context, request, cq));
    }
    ::grpc::Status CheckAndMutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest& request, ::google::bigtable::v1::CheckAndMutateRowResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::CheckAndMutateRowResponse>> AsyncCheckAndMutateRow(::grpc::ClientContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::CheckAndMutateRowResponse>>(AsyncCheckAndMutateRowRaw(context, request, cq));
    }
    ::grpc::Status ReadModifyWriteRow(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest& request, ::google::bigtable::v1::Row* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::Row>> AsyncReadModifyWriteRow(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::Row>>(AsyncReadModifyWriteRowRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientReader< ::google::bigtable::v1::ReadRowsResponse>* ReadRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request) override;
    ::grpc::ClientAsyncReader< ::google::bigtable::v1::ReadRowsResponse>* AsyncReadRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadRowsRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientReader< ::google::bigtable::v1::SampleRowKeysResponse>* SampleRowKeysRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request) override;
    ::grpc::ClientAsyncReader< ::google::bigtable::v1::SampleRowKeysResponse>* AsyncSampleRowKeysRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::SampleRowKeysRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncMutateRowRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::MutateRowsResponse>* AsyncMutateRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::MutateRowsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::CheckAndMutateRowResponse>* AsyncCheckAndMutateRowRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::bigtable::v1::Row>* AsyncReadModifyWriteRowRaw(::grpc::ClientContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_ReadRows_;
    const ::grpc::RpcMethod rpcmethod_SampleRowKeys_;
    const ::grpc::RpcMethod rpcmethod_MutateRow_;
    const ::grpc::RpcMethod rpcmethod_MutateRows_;
    const ::grpc::RpcMethod rpcmethod_CheckAndMutateRow_;
    const ::grpc::RpcMethod rpcmethod_ReadModifyWriteRow_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Streams back the contents of all requested rows, optionally applying
    // the same Reader filter to each. Depending on their size, rows may be
    // broken up across multiple responses, but atomicity of each row will still
    // be preserved.
    virtual ::grpc::Status ReadRows(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadRowsRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::ReadRowsResponse>* writer);
    // Returns a sample of row keys in the table. The returned row keys will
    // delimit contiguous sections of the table of approximately equal size,
    // which can be used to break up the data for distributed tasks like
    // mapreduces.
    virtual ::grpc::Status SampleRowKeys(::grpc::ServerContext* context, const ::google::bigtable::v1::SampleRowKeysRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::SampleRowKeysResponse>* writer);
    // Mutates a row atomically. Cells already present in the row are left
    // unchanged unless explicitly changed by 'mutation'.
    virtual ::grpc::Status MutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowRequest* request, ::google::protobuf::Empty* response);
    // Mutates multiple rows in a batch. Each individual row is mutated
    // atomically as in MutateRow, but the entire batch is not executed
    // atomically.
    virtual ::grpc::Status MutateRows(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowsRequest* request, ::google::bigtable::v1::MutateRowsResponse* response);
    // Mutates a row atomically based on the output of a predicate Reader filter.
    virtual ::grpc::Status CheckAndMutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest* request, ::google::bigtable::v1::CheckAndMutateRowResponse* response);
    // Modifies a row atomically, reading the latest existing timestamp/value from
    // the specified columns and writing a new value at
    // max(existing timestamp, current server time) based on pre-defined
    // read/modify/write rules. Returns the new contents of all modified cells.
    virtual ::grpc::Status ReadModifyWriteRow(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest* request, ::google::bigtable::v1::Row* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ReadRows : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ReadRows() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ReadRows() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReadRows(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadRowsRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::ReadRowsResponse>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReadRows(::grpc::ServerContext* context, ::google::bigtable::v1::ReadRowsRequest* request, ::grpc::ServerAsyncWriter< ::google::bigtable::v1::ReadRowsResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SampleRowKeys : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SampleRowKeys() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SampleRowKeys() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SampleRowKeys(::grpc::ServerContext* context, const ::google::bigtable::v1::SampleRowKeysRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::SampleRowKeysResponse>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSampleRowKeys(::grpc::ServerContext* context, ::google::bigtable::v1::SampleRowKeysRequest* request, ::grpc::ServerAsyncWriter< ::google::bigtable::v1::SampleRowKeysResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_MutateRow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_MutateRow() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_MutateRow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMutateRow(::grpc::ServerContext* context, ::google::bigtable::v1::MutateRowRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_MutateRows : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_MutateRows() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_MutateRows() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateRows(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowsRequest* request, ::google::bigtable::v1::MutateRowsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMutateRows(::grpc::ServerContext* context, ::google::bigtable::v1::MutateRowsRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::bigtable::v1::MutateRowsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CheckAndMutateRow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CheckAndMutateRow() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_CheckAndMutateRow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CheckAndMutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest* request, ::google::bigtable::v1::CheckAndMutateRowResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCheckAndMutateRow(::grpc::ServerContext* context, ::google::bigtable::v1::CheckAndMutateRowRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::bigtable::v1::CheckAndMutateRowResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ReadModifyWriteRow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ReadModifyWriteRow() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_ReadModifyWriteRow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReadModifyWriteRow(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest* request, ::google::bigtable::v1::Row* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReadModifyWriteRow(::grpc::ServerContext* context, ::google::bigtable::v1::ReadModifyWriteRowRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::bigtable::v1::Row>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ReadRows<WithAsyncMethod_SampleRowKeys<WithAsyncMethod_MutateRow<WithAsyncMethod_MutateRows<WithAsyncMethod_CheckAndMutateRow<WithAsyncMethod_ReadModifyWriteRow<Service > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_ReadRows : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ReadRows() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ReadRows() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReadRows(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadRowsRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::ReadRowsResponse>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SampleRowKeys : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SampleRowKeys() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SampleRowKeys() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SampleRowKeys(::grpc::ServerContext* context, const ::google::bigtable::v1::SampleRowKeysRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::SampleRowKeysResponse>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_MutateRow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_MutateRow() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_MutateRow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_MutateRows : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_MutateRows() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_MutateRows() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateRows(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowsRequest* request, ::google::bigtable::v1::MutateRowsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CheckAndMutateRow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CheckAndMutateRow() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_CheckAndMutateRow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CheckAndMutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest* request, ::google::bigtable::v1::CheckAndMutateRowResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ReadModifyWriteRow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ReadModifyWriteRow() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_ReadModifyWriteRow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReadModifyWriteRow(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest* request, ::google::bigtable::v1::Row* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_MutateRow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_MutateRow() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::StreamedUnaryHandler< ::google::bigtable::v1::MutateRowRequest, ::google::protobuf::Empty>(std::bind(&WithStreamedUnaryMethod_MutateRow<BaseClass>::StreamedMutateRow, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_MutateRow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status MutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedMutateRow(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::bigtable::v1::MutateRowRequest,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_MutateRows : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_MutateRows() {
      ::grpc::Service::MarkMethodStreamed(3,
        new ::grpc::StreamedUnaryHandler< ::google::bigtable::v1::MutateRowsRequest, ::google::bigtable::v1::MutateRowsResponse>(std::bind(&WithStreamedUnaryMethod_MutateRows<BaseClass>::StreamedMutateRows, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_MutateRows() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status MutateRows(::grpc::ServerContext* context, const ::google::bigtable::v1::MutateRowsRequest* request, ::google::bigtable::v1::MutateRowsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedMutateRows(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::bigtable::v1::MutateRowsRequest,::google::bigtable::v1::MutateRowsResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CheckAndMutateRow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CheckAndMutateRow() {
      ::grpc::Service::MarkMethodStreamed(4,
        new ::grpc::StreamedUnaryHandler< ::google::bigtable::v1::CheckAndMutateRowRequest, ::google::bigtable::v1::CheckAndMutateRowResponse>(std::bind(&WithStreamedUnaryMethod_CheckAndMutateRow<BaseClass>::StreamedCheckAndMutateRow, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CheckAndMutateRow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CheckAndMutateRow(::grpc::ServerContext* context, const ::google::bigtable::v1::CheckAndMutateRowRequest* request, ::google::bigtable::v1::CheckAndMutateRowResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCheckAndMutateRow(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::bigtable::v1::CheckAndMutateRowRequest,::google::bigtable::v1::CheckAndMutateRowResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ReadModifyWriteRow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ReadModifyWriteRow() {
      ::grpc::Service::MarkMethodStreamed(5,
        new ::grpc::StreamedUnaryHandler< ::google::bigtable::v1::ReadModifyWriteRowRequest, ::google::bigtable::v1::Row>(std::bind(&WithStreamedUnaryMethod_ReadModifyWriteRow<BaseClass>::StreamedReadModifyWriteRow, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ReadModifyWriteRow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ReadModifyWriteRow(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadModifyWriteRowRequest* request, ::google::bigtable::v1::Row* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedReadModifyWriteRow(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::bigtable::v1::ReadModifyWriteRowRequest,::google::bigtable::v1::Row>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_MutateRow<WithStreamedUnaryMethod_MutateRows<WithStreamedUnaryMethod_CheckAndMutateRow<WithStreamedUnaryMethod_ReadModifyWriteRow<Service > > > > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_ReadRows : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_ReadRows() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::SplitServerStreamingHandler< ::google::bigtable::v1::ReadRowsRequest, ::google::bigtable::v1::ReadRowsResponse>(std::bind(&WithSplitStreamingMethod_ReadRows<BaseClass>::StreamedReadRows, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_ReadRows() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ReadRows(::grpc::ServerContext* context, const ::google::bigtable::v1::ReadRowsRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::ReadRowsResponse>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedReadRows(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::google::bigtable::v1::ReadRowsRequest,::google::bigtable::v1::ReadRowsResponse>* server_split_streamer) = 0;
  };
  template <class BaseClass>
  class WithSplitStreamingMethod_SampleRowKeys : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_SampleRowKeys() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::SplitServerStreamingHandler< ::google::bigtable::v1::SampleRowKeysRequest, ::google::bigtable::v1::SampleRowKeysResponse>(std::bind(&WithSplitStreamingMethod_SampleRowKeys<BaseClass>::StreamedSampleRowKeys, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_SampleRowKeys() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SampleRowKeys(::grpc::ServerContext* context, const ::google::bigtable::v1::SampleRowKeysRequest* request, ::grpc::ServerWriter< ::google::bigtable::v1::SampleRowKeysResponse>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedSampleRowKeys(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::google::bigtable::v1::SampleRowKeysRequest,::google::bigtable::v1::SampleRowKeysResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_ReadRows<WithSplitStreamingMethod_SampleRowKeys<Service > > SplitStreamedService;
  typedef WithSplitStreamingMethod_ReadRows<WithSplitStreamingMethod_SampleRowKeys<WithStreamedUnaryMethod_MutateRow<WithStreamedUnaryMethod_MutateRows<WithStreamedUnaryMethod_CheckAndMutateRow<WithStreamedUnaryMethod_ReadModifyWriteRow<Service > > > > > > StreamedService;
};

}  // namespace v1
}  // namespace bigtable
}  // namespace google


#endif  // GRPC_google_2fbigtable_2fv1_2fbigtable_5fservice_2eproto__INCLUDED