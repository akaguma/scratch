# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from google.cloud.ml.v1 import project_service_pb2 as google_dot_cloud_dot_ml_dot_v1_dot_project__service__pb2


class ProjectManagementServiceStub(object):
  """Copyright 2017 Google Inc. All Rights Reserved.

  Proto file for the Google Cloud Machine Learning Engine.
  Describes the project management service.

  Allows retrieving project related information.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.GetConfig = channel.unary_unary(
        '/google.cloud.ml.v1.ProjectManagementService/GetConfig',
        request_serializer=google_dot_cloud_dot_ml_dot_v1_dot_project__service__pb2.GetConfigRequest.SerializeToString,
        response_deserializer=google_dot_cloud_dot_ml_dot_v1_dot_project__service__pb2.GetConfigResponse.FromString,
        )


class ProjectManagementServiceServicer(object):
  """Copyright 2017 Google Inc. All Rights Reserved.

  Proto file for the Google Cloud Machine Learning Engine.
  Describes the project management service.

  Allows retrieving project related information.
  """

  def GetConfig(self, request, context):
    """Get the service account information associated with your project. You need
    this information in order to grant the service account persmissions for
    the Google Cloud Storage location where you put your model training code
    for training the model with Google Cloud Machine Learning.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_ProjectManagementServiceServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'GetConfig': grpc.unary_unary_rpc_method_handler(
          servicer.GetConfig,
          request_deserializer=google_dot_cloud_dot_ml_dot_v1_dot_project__service__pb2.GetConfigRequest.FromString,
          response_serializer=google_dot_cloud_dot_ml_dot_v1_dot_project__service__pb2.GetConfigResponse.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'google.cloud.ml.v1.ProjectManagementService', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
