// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/language/v1/language_service.proto
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
#ifndef GRPC_google_2fcloud_2flanguage_2fv1_2flanguage_5fservice_2eproto__INCLUDED
#define GRPC_google_2fcloud_2flanguage_2fv1_2flanguage_5fservice_2eproto__INCLUDED

#include "google/cloud/language/v1/language_service.pb.h"

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
namespace language {
namespace v1 {

// Provides text analysis operations such as sentiment analysis and entity
// recognition.
class LanguageService final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.language.v1.LanguageService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Analyzes the sentiment of the provided text.
    virtual ::grpc::Status AnalyzeSentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest& request, ::google::cloud::language::v1::AnalyzeSentimentResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeSentimentResponse>> AsyncAnalyzeSentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeSentimentResponse>>(AsyncAnalyzeSentimentRaw(context, request, cq));
    }
    // Finds named entities (currently proper names and common nouns) in the text
    // along with entity types, salience, mentions for each entity, and
    // other properties.
    virtual ::grpc::Status AnalyzeEntities(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest& request, ::google::cloud::language::v1::AnalyzeEntitiesResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeEntitiesResponse>> AsyncAnalyzeEntities(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeEntitiesResponse>>(AsyncAnalyzeEntitiesRaw(context, request, cq));
    }
    // Finds entities, similar to [AnalyzeEntities][google.cloud.language.v1.LanguageService.AnalyzeEntities] in the text and analyzes
    // sentiment associated with each entity and its mentions.
    virtual ::grpc::Status AnalyzeEntitySentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest& request, ::google::cloud::language::v1::AnalyzeEntitySentimentResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeEntitySentimentResponse>> AsyncAnalyzeEntitySentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeEntitySentimentResponse>>(AsyncAnalyzeEntitySentimentRaw(context, request, cq));
    }
    // Analyzes the syntax of the text and provides sentence boundaries and
    // tokenization along with part of speech tags, dependency trees, and other
    // properties.
    virtual ::grpc::Status AnalyzeSyntax(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest& request, ::google::cloud::language::v1::AnalyzeSyntaxResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeSyntaxResponse>> AsyncAnalyzeSyntax(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeSyntaxResponse>>(AsyncAnalyzeSyntaxRaw(context, request, cq));
    }
    // A convenience method that provides all the features that analyzeSentiment,
    // analyzeEntities, and analyzeSyntax provide in one call.
    virtual ::grpc::Status AnnotateText(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnnotateTextRequest& request, ::google::cloud::language::v1::AnnotateTextResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnnotateTextResponse>> AsyncAnnotateText(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnnotateTextRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnnotateTextResponse>>(AsyncAnnotateTextRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeSentimentResponse>* AsyncAnalyzeSentimentRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeEntitiesResponse>* AsyncAnalyzeEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeEntitySentimentResponse>* AsyncAnalyzeEntitySentimentRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnalyzeSyntaxResponse>* AsyncAnalyzeSyntaxRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::language::v1::AnnotateTextResponse>* AsyncAnnotateTextRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnnotateTextRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status AnalyzeSentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest& request, ::google::cloud::language::v1::AnalyzeSentimentResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeSentimentResponse>> AsyncAnalyzeSentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeSentimentResponse>>(AsyncAnalyzeSentimentRaw(context, request, cq));
    }
    ::grpc::Status AnalyzeEntities(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest& request, ::google::cloud::language::v1::AnalyzeEntitiesResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeEntitiesResponse>> AsyncAnalyzeEntities(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeEntitiesResponse>>(AsyncAnalyzeEntitiesRaw(context, request, cq));
    }
    ::grpc::Status AnalyzeEntitySentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest& request, ::google::cloud::language::v1::AnalyzeEntitySentimentResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeEntitySentimentResponse>> AsyncAnalyzeEntitySentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeEntitySentimentResponse>>(AsyncAnalyzeEntitySentimentRaw(context, request, cq));
    }
    ::grpc::Status AnalyzeSyntax(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest& request, ::google::cloud::language::v1::AnalyzeSyntaxResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeSyntaxResponse>> AsyncAnalyzeSyntax(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeSyntaxResponse>>(AsyncAnalyzeSyntaxRaw(context, request, cq));
    }
    ::grpc::Status AnnotateText(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnnotateTextRequest& request, ::google::cloud::language::v1::AnnotateTextResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnnotateTextResponse>> AsyncAnnotateText(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnnotateTextRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnnotateTextResponse>>(AsyncAnnotateTextRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeSentimentResponse>* AsyncAnalyzeSentimentRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeEntitiesResponse>* AsyncAnalyzeEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeEntitySentimentResponse>* AsyncAnalyzeEntitySentimentRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnalyzeSyntaxResponse>* AsyncAnalyzeSyntaxRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1::AnnotateTextResponse>* AsyncAnnotateTextRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1::AnnotateTextRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_AnalyzeSentiment_;
    const ::grpc::RpcMethod rpcmethod_AnalyzeEntities_;
    const ::grpc::RpcMethod rpcmethod_AnalyzeEntitySentiment_;
    const ::grpc::RpcMethod rpcmethod_AnalyzeSyntax_;
    const ::grpc::RpcMethod rpcmethod_AnnotateText_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Analyzes the sentiment of the provided text.
    virtual ::grpc::Status AnalyzeSentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest* request, ::google::cloud::language::v1::AnalyzeSentimentResponse* response);
    // Finds named entities (currently proper names and common nouns) in the text
    // along with entity types, salience, mentions for each entity, and
    // other properties.
    virtual ::grpc::Status AnalyzeEntities(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest* request, ::google::cloud::language::v1::AnalyzeEntitiesResponse* response);
    // Finds entities, similar to [AnalyzeEntities][google.cloud.language.v1.LanguageService.AnalyzeEntities] in the text and analyzes
    // sentiment associated with each entity and its mentions.
    virtual ::grpc::Status AnalyzeEntitySentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest* request, ::google::cloud::language::v1::AnalyzeEntitySentimentResponse* response);
    // Analyzes the syntax of the text and provides sentence boundaries and
    // tokenization along with part of speech tags, dependency trees, and other
    // properties.
    virtual ::grpc::Status AnalyzeSyntax(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest* request, ::google::cloud::language::v1::AnalyzeSyntaxResponse* response);
    // A convenience method that provides all the features that analyzeSentiment,
    // analyzeEntities, and analyzeSyntax provide in one call.
    virtual ::grpc::Status AnnotateText(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnnotateTextRequest* request, ::google::cloud::language::v1::AnnotateTextResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_AnalyzeSentiment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AnalyzeSentiment() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_AnalyzeSentiment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnalyzeSentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest* request, ::google::cloud::language::v1::AnalyzeSentimentResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAnalyzeSentiment(::grpc::ServerContext* context, ::google::cloud::language::v1::AnalyzeSentimentRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::language::v1::AnalyzeSentimentResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_AnalyzeEntities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AnalyzeEntities() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_AnalyzeEntities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnalyzeEntities(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest* request, ::google::cloud::language::v1::AnalyzeEntitiesResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAnalyzeEntities(::grpc::ServerContext* context, ::google::cloud::language::v1::AnalyzeEntitiesRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::language::v1::AnalyzeEntitiesResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_AnalyzeEntitySentiment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AnalyzeEntitySentiment() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_AnalyzeEntitySentiment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnalyzeEntitySentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest* request, ::google::cloud::language::v1::AnalyzeEntitySentimentResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAnalyzeEntitySentiment(::grpc::ServerContext* context, ::google::cloud::language::v1::AnalyzeEntitySentimentRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::language::v1::AnalyzeEntitySentimentResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_AnalyzeSyntax : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AnalyzeSyntax() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_AnalyzeSyntax() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnalyzeSyntax(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest* request, ::google::cloud::language::v1::AnalyzeSyntaxResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAnalyzeSyntax(::grpc::ServerContext* context, ::google::cloud::language::v1::AnalyzeSyntaxRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::language::v1::AnalyzeSyntaxResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_AnnotateText : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AnnotateText() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_AnnotateText() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnnotateText(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnnotateTextRequest* request, ::google::cloud::language::v1::AnnotateTextResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAnnotateText(::grpc::ServerContext* context, ::google::cloud::language::v1::AnnotateTextRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::language::v1::AnnotateTextResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_AnalyzeSentiment<WithAsyncMethod_AnalyzeEntities<WithAsyncMethod_AnalyzeEntitySentiment<WithAsyncMethod_AnalyzeSyntax<WithAsyncMethod_AnnotateText<Service > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_AnalyzeSentiment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AnalyzeSentiment() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_AnalyzeSentiment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnalyzeSentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest* request, ::google::cloud::language::v1::AnalyzeSentimentResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_AnalyzeEntities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AnalyzeEntities() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_AnalyzeEntities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnalyzeEntities(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest* request, ::google::cloud::language::v1::AnalyzeEntitiesResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_AnalyzeEntitySentiment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AnalyzeEntitySentiment() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_AnalyzeEntitySentiment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnalyzeEntitySentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest* request, ::google::cloud::language::v1::AnalyzeEntitySentimentResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_AnalyzeSyntax : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AnalyzeSyntax() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_AnalyzeSyntax() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnalyzeSyntax(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest* request, ::google::cloud::language::v1::AnalyzeSyntaxResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_AnnotateText : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AnnotateText() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_AnnotateText() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnnotateText(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnnotateTextRequest* request, ::google::cloud::language::v1::AnnotateTextResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AnalyzeSentiment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AnalyzeSentiment() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::language::v1::AnalyzeSentimentRequest, ::google::cloud::language::v1::AnalyzeSentimentResponse>(std::bind(&WithStreamedUnaryMethod_AnalyzeSentiment<BaseClass>::StreamedAnalyzeSentiment, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AnalyzeSentiment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AnalyzeSentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeSentimentRequest* request, ::google::cloud::language::v1::AnalyzeSentimentResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAnalyzeSentiment(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::language::v1::AnalyzeSentimentRequest,::google::cloud::language::v1::AnalyzeSentimentResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AnalyzeEntities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AnalyzeEntities() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::language::v1::AnalyzeEntitiesRequest, ::google::cloud::language::v1::AnalyzeEntitiesResponse>(std::bind(&WithStreamedUnaryMethod_AnalyzeEntities<BaseClass>::StreamedAnalyzeEntities, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AnalyzeEntities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AnalyzeEntities(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeEntitiesRequest* request, ::google::cloud::language::v1::AnalyzeEntitiesResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAnalyzeEntities(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::language::v1::AnalyzeEntitiesRequest,::google::cloud::language::v1::AnalyzeEntitiesResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AnalyzeEntitySentiment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AnalyzeEntitySentiment() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::language::v1::AnalyzeEntitySentimentRequest, ::google::cloud::language::v1::AnalyzeEntitySentimentResponse>(std::bind(&WithStreamedUnaryMethod_AnalyzeEntitySentiment<BaseClass>::StreamedAnalyzeEntitySentiment, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AnalyzeEntitySentiment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AnalyzeEntitySentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeEntitySentimentRequest* request, ::google::cloud::language::v1::AnalyzeEntitySentimentResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAnalyzeEntitySentiment(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::language::v1::AnalyzeEntitySentimentRequest,::google::cloud::language::v1::AnalyzeEntitySentimentResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AnalyzeSyntax : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AnalyzeSyntax() {
      ::grpc::Service::MarkMethodStreamed(3,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::language::v1::AnalyzeSyntaxRequest, ::google::cloud::language::v1::AnalyzeSyntaxResponse>(std::bind(&WithStreamedUnaryMethod_AnalyzeSyntax<BaseClass>::StreamedAnalyzeSyntax, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AnalyzeSyntax() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AnalyzeSyntax(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnalyzeSyntaxRequest* request, ::google::cloud::language::v1::AnalyzeSyntaxResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAnalyzeSyntax(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::language::v1::AnalyzeSyntaxRequest,::google::cloud::language::v1::AnalyzeSyntaxResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AnnotateText : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AnnotateText() {
      ::grpc::Service::MarkMethodStreamed(4,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::language::v1::AnnotateTextRequest, ::google::cloud::language::v1::AnnotateTextResponse>(std::bind(&WithStreamedUnaryMethod_AnnotateText<BaseClass>::StreamedAnnotateText, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AnnotateText() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AnnotateText(::grpc::ServerContext* context, const ::google::cloud::language::v1::AnnotateTextRequest* request, ::google::cloud::language::v1::AnnotateTextResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAnnotateText(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::language::v1::AnnotateTextRequest,::google::cloud::language::v1::AnnotateTextResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_AnalyzeSentiment<WithStreamedUnaryMethod_AnalyzeEntities<WithStreamedUnaryMethod_AnalyzeEntitySentiment<WithStreamedUnaryMethod_AnalyzeSyntax<WithStreamedUnaryMethod_AnnotateText<Service > > > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_AnalyzeSentiment<WithStreamedUnaryMethod_AnalyzeEntities<WithStreamedUnaryMethod_AnalyzeEntitySentiment<WithStreamedUnaryMethod_AnalyzeSyntax<WithStreamedUnaryMethod_AnnotateText<Service > > > > > StreamedService;
};

}  // namespace v1
}  // namespace language
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2flanguage_2fv1_2flanguage_5fservice_2eproto__INCLUDED
