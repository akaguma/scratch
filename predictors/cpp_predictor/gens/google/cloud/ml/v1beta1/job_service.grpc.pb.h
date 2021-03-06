// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/ml/v1beta1/job_service.proto
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
#ifndef GRPC_google_2fcloud_2fml_2fv1beta1_2fjob_5fservice_2eproto__INCLUDED
#define GRPC_google_2fcloud_2fml_2fv1beta1_2fjob_5fservice_2eproto__INCLUDED

#include "google/cloud/ml/v1beta1/job_service.pb.h"

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
namespace cloud {
namespace ml {
namespace v1beta1 {

// Copyright 2016 Google Inc. All Rights Reserved.
//
// Proto file for the Google Cloud Machine Learning Engine.
// Describes the 'job service' to manage training and prediction jobs.
//
// Service to create and manage training and batch prediction jobs.
class JobService final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.ml.v1beta1.JobService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Creates a training or a batch prediction job.
    virtual ::grpc::Status CreateJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest& request, ::google::cloud::ml::v1beta1::Job* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1beta1::Job>> AsyncCreateJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1beta1::Job>>(AsyncCreateJobRaw(context, request, cq));
    }
    // Lists the jobs in the project.
    virtual ::grpc::Status ListJobs(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest& request, ::google::cloud::ml::v1beta1::ListJobsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1beta1::ListJobsResponse>> AsyncListJobs(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1beta1::ListJobsResponse>>(AsyncListJobsRaw(context, request, cq));
    }
    // Describes a job.
    virtual ::grpc::Status GetJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest& request, ::google::cloud::ml::v1beta1::Job* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1beta1::Job>> AsyncGetJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1beta1::Job>>(AsyncGetJobRaw(context, request, cq));
    }
    // Cancels a running job.
    virtual ::grpc::Status CancelJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncCancelJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncCancelJobRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1beta1::Job>* AsyncCreateJobRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1beta1::ListJobsResponse>* AsyncListJobsRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1beta1::Job>* AsyncGetJobRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncCancelJobRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CreateJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest& request, ::google::cloud::ml::v1beta1::Job* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>> AsyncCreateJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>>(AsyncCreateJobRaw(context, request, cq));
    }
    ::grpc::Status ListJobs(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest& request, ::google::cloud::ml::v1beta1::ListJobsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::ListJobsResponse>> AsyncListJobs(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::ListJobsResponse>>(AsyncListJobsRaw(context, request, cq));
    }
    ::grpc::Status GetJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest& request, ::google::cloud::ml::v1beta1::Job* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>> AsyncGetJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>>(AsyncGetJobRaw(context, request, cq));
    }
    ::grpc::Status CancelJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncCancelJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncCancelJobRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>* AsyncCreateJobRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::ListJobsResponse>* AsyncListJobsRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>* AsyncGetJobRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncCancelJobRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_CreateJob_;
    const ::grpc::RpcMethod rpcmethod_ListJobs_;
    const ::grpc::RpcMethod rpcmethod_GetJob_;
    const ::grpc::RpcMethod rpcmethod_CancelJob_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Creates a training or a batch prediction job.
    virtual ::grpc::Status CreateJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest* request, ::google::cloud::ml::v1beta1::Job* response);
    // Lists the jobs in the project.
    virtual ::grpc::Status ListJobs(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest* request, ::google::cloud::ml::v1beta1::ListJobsResponse* response);
    // Describes a job.
    virtual ::grpc::Status GetJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest* request, ::google::cloud::ml::v1beta1::Job* response);
    // Cancels a running job.
    virtual ::grpc::Status CancelJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest* request, ::google::protobuf::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateJob() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateJob() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest* request, ::google::cloud::ml::v1beta1::Job* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateJob(::grpc::ServerContext* context, ::google::cloud::ml::v1beta1::CreateJobRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::ml::v1beta1::Job>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ListJobs : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ListJobs() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ListJobs() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListJobs(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest* request, ::google::cloud::ml::v1beta1::ListJobsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListJobs(::grpc::ServerContext* context, ::google::cloud::ml::v1beta1::ListJobsRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::ml::v1beta1::ListJobsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetJob() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetJob() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest* request, ::google::cloud::ml::v1beta1::Job* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetJob(::grpc::ServerContext* context, ::google::cloud::ml::v1beta1::GetJobRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::ml::v1beta1::Job>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CancelJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CancelJob() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_CancelJob() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCancelJob(::grpc::ServerContext* context, ::google::cloud::ml::v1beta1::CancelJobRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateJob<WithAsyncMethod_ListJobs<WithAsyncMethod_GetJob<WithAsyncMethod_CancelJob<Service > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_CreateJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateJob() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateJob() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest* request, ::google::cloud::ml::v1beta1::Job* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ListJobs : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ListJobs() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ListJobs() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListJobs(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest* request, ::google::cloud::ml::v1beta1::ListJobsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetJob() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetJob() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest* request, ::google::cloud::ml::v1beta1::Job* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CancelJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CancelJob() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_CancelJob() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CreateJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CreateJob() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::ml::v1beta1::CreateJobRequest, ::google::cloud::ml::v1beta1::Job>(std::bind(&WithStreamedUnaryMethod_CreateJob<BaseClass>::StreamedCreateJob, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CreateJob() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CreateJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest* request, ::google::cloud::ml::v1beta1::Job* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCreateJob(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::ml::v1beta1::CreateJobRequest,::google::cloud::ml::v1beta1::Job>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ListJobs : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ListJobs() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::ml::v1beta1::ListJobsRequest, ::google::cloud::ml::v1beta1::ListJobsResponse>(std::bind(&WithStreamedUnaryMethod_ListJobs<BaseClass>::StreamedListJobs, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ListJobs() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ListJobs(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest* request, ::google::cloud::ml::v1beta1::ListJobsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedListJobs(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::ml::v1beta1::ListJobsRequest,::google::cloud::ml::v1beta1::ListJobsResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetJob() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::ml::v1beta1::GetJobRequest, ::google::cloud::ml::v1beta1::Job>(std::bind(&WithStreamedUnaryMethod_GetJob<BaseClass>::StreamedGetJob, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetJob() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest* request, ::google::cloud::ml::v1beta1::Job* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetJob(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::ml::v1beta1::GetJobRequest,::google::cloud::ml::v1beta1::Job>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CancelJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CancelJob() {
      ::grpc::Service::MarkMethodStreamed(3,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::ml::v1beta1::CancelJobRequest, ::google::protobuf::Empty>(std::bind(&WithStreamedUnaryMethod_CancelJob<BaseClass>::StreamedCancelJob, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CancelJob() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CancelJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCancelJob(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::ml::v1beta1::CancelJobRequest,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CreateJob<WithStreamedUnaryMethod_ListJobs<WithStreamedUnaryMethod_GetJob<WithStreamedUnaryMethod_CancelJob<Service > > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CreateJob<WithStreamedUnaryMethod_ListJobs<WithStreamedUnaryMethod_GetJob<WithStreamedUnaryMethod_CancelJob<Service > > > > StreamedService;
};

}  // namespace v1beta1
}  // namespace ml
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2fml_2fv1beta1_2fjob_5fservice_2eproto__INCLUDED
