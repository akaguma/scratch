# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/longrunning/operations.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2
from google.protobuf import any_pb2 as google_dot_protobuf_dot_any__pb2
from google.protobuf import empty_pb2 as google_dot_protobuf_dot_empty__pb2
from google.rpc import status_pb2 as google_dot_rpc_dot_status__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/longrunning/operations.proto',
  package='google.longrunning',
  syntax='proto3',
  serialized_pb=_b('\n#google/longrunning/operations.proto\x12\x12google.longrunning\x1a\x1cgoogle/api/annotations.proto\x1a\x19google/protobuf/any.proto\x1a\x1bgoogle/protobuf/empty.proto\x1a\x17google/rpc/status.proto\"\xa8\x01\n\tOperation\x12\x0c\n\x04name\x18\x01 \x01(\t\x12&\n\x08metadata\x18\x02 \x01(\x0b\x32\x14.google.protobuf.Any\x12\x0c\n\x04\x64one\x18\x03 \x01(\x08\x12#\n\x05\x65rror\x18\x04 \x01(\x0b\x32\x12.google.rpc.StatusH\x00\x12(\n\x08response\x18\x05 \x01(\x0b\x32\x14.google.protobuf.AnyH\x00\x42\x08\n\x06result\"#\n\x13GetOperationRequest\x12\x0c\n\x04name\x18\x01 \x01(\t\"\\\n\x15ListOperationsRequest\x12\x0c\n\x04name\x18\x04 \x01(\t\x12\x0e\n\x06\x66ilter\x18\x01 \x01(\t\x12\x11\n\tpage_size\x18\x02 \x01(\x05\x12\x12\n\npage_token\x18\x03 \x01(\t\"d\n\x16ListOperationsResponse\x12\x31\n\noperations\x18\x01 \x03(\x0b\x32\x1d.google.longrunning.Operation\x12\x17\n\x0fnext_page_token\x18\x02 \x01(\t\"&\n\x16\x43\x61ncelOperationRequest\x12\x0c\n\x04name\x18\x01 \x01(\t\"&\n\x16\x44\x65leteOperationRequest\x12\x0c\n\x04name\x18\x01 \x01(\t2\x8c\x04\n\nOperations\x12\x86\x01\n\x0eListOperations\x12).google.longrunning.ListOperationsRequest\x1a*.google.longrunning.ListOperationsResponse\"\x1d\x82\xd3\xe4\x93\x02\x17\x12\x15/v1/{name=operations}\x12x\n\x0cGetOperation\x12\'.google.longrunning.GetOperationRequest\x1a\x1d.google.longrunning.Operation\" \x82\xd3\xe4\x93\x02\x1a\x12\x18/v1/{name=operations/**}\x12w\n\x0f\x44\x65leteOperation\x12*.google.longrunning.DeleteOperationRequest\x1a\x16.google.protobuf.Empty\" \x82\xd3\xe4\x93\x02\x1a*\x18/v1/{name=operations/**}\x12\x81\x01\n\x0f\x43\x61ncelOperation\x12*.google.longrunning.CancelOperationRequest\x1a\x16.google.protobuf.Empty\"*\x82\xd3\xe4\x93\x02$\"\x1f/v1/{name=operations/**}:cancel:\x01*B\x7f\n\x16\x63om.google.longrunningB\x0fOperationsProtoP\x01Z=google.golang.org/genproto/googleapis/longrunning;longrunning\xaa\x02\x12Google.LongRunningb\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_protobuf_dot_any__pb2.DESCRIPTOR,google_dot_protobuf_dot_empty__pb2.DESCRIPTOR,google_dot_rpc_dot_status__pb2.DESCRIPTOR,])




_OPERATION = _descriptor.Descriptor(
  name='Operation',
  full_name='google.longrunning.Operation',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.longrunning.Operation.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='metadata', full_name='google.longrunning.Operation.metadata', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='done', full_name='google.longrunning.Operation.done', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='error', full_name='google.longrunning.Operation.error', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='response', full_name='google.longrunning.Operation.response', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='result', full_name='google.longrunning.Operation.result',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=171,
  serialized_end=339,
)


_GETOPERATIONREQUEST = _descriptor.Descriptor(
  name='GetOperationRequest',
  full_name='google.longrunning.GetOperationRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.longrunning.GetOperationRequest.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=341,
  serialized_end=376,
)


_LISTOPERATIONSREQUEST = _descriptor.Descriptor(
  name='ListOperationsRequest',
  full_name='google.longrunning.ListOperationsRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.longrunning.ListOperationsRequest.name', index=0,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='filter', full_name='google.longrunning.ListOperationsRequest.filter', index=1,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='page_size', full_name='google.longrunning.ListOperationsRequest.page_size', index=2,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='page_token', full_name='google.longrunning.ListOperationsRequest.page_token', index=3,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=378,
  serialized_end=470,
)


_LISTOPERATIONSRESPONSE = _descriptor.Descriptor(
  name='ListOperationsResponse',
  full_name='google.longrunning.ListOperationsResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='operations', full_name='google.longrunning.ListOperationsResponse.operations', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='next_page_token', full_name='google.longrunning.ListOperationsResponse.next_page_token', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=472,
  serialized_end=572,
)


_CANCELOPERATIONREQUEST = _descriptor.Descriptor(
  name='CancelOperationRequest',
  full_name='google.longrunning.CancelOperationRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.longrunning.CancelOperationRequest.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=574,
  serialized_end=612,
)


_DELETEOPERATIONREQUEST = _descriptor.Descriptor(
  name='DeleteOperationRequest',
  full_name='google.longrunning.DeleteOperationRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.longrunning.DeleteOperationRequest.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=614,
  serialized_end=652,
)

_OPERATION.fields_by_name['metadata'].message_type = google_dot_protobuf_dot_any__pb2._ANY
_OPERATION.fields_by_name['error'].message_type = google_dot_rpc_dot_status__pb2._STATUS
_OPERATION.fields_by_name['response'].message_type = google_dot_protobuf_dot_any__pb2._ANY
_OPERATION.oneofs_by_name['result'].fields.append(
  _OPERATION.fields_by_name['error'])
_OPERATION.fields_by_name['error'].containing_oneof = _OPERATION.oneofs_by_name['result']
_OPERATION.oneofs_by_name['result'].fields.append(
  _OPERATION.fields_by_name['response'])
_OPERATION.fields_by_name['response'].containing_oneof = _OPERATION.oneofs_by_name['result']
_LISTOPERATIONSRESPONSE.fields_by_name['operations'].message_type = _OPERATION
DESCRIPTOR.message_types_by_name['Operation'] = _OPERATION
DESCRIPTOR.message_types_by_name['GetOperationRequest'] = _GETOPERATIONREQUEST
DESCRIPTOR.message_types_by_name['ListOperationsRequest'] = _LISTOPERATIONSREQUEST
DESCRIPTOR.message_types_by_name['ListOperationsResponse'] = _LISTOPERATIONSRESPONSE
DESCRIPTOR.message_types_by_name['CancelOperationRequest'] = _CANCELOPERATIONREQUEST
DESCRIPTOR.message_types_by_name['DeleteOperationRequest'] = _DELETEOPERATIONREQUEST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Operation = _reflection.GeneratedProtocolMessageType('Operation', (_message.Message,), dict(
  DESCRIPTOR = _OPERATION,
  __module__ = 'google.longrunning.operations_pb2'
  # @@protoc_insertion_point(class_scope:google.longrunning.Operation)
  ))
_sym_db.RegisterMessage(Operation)

GetOperationRequest = _reflection.GeneratedProtocolMessageType('GetOperationRequest', (_message.Message,), dict(
  DESCRIPTOR = _GETOPERATIONREQUEST,
  __module__ = 'google.longrunning.operations_pb2'
  # @@protoc_insertion_point(class_scope:google.longrunning.GetOperationRequest)
  ))
_sym_db.RegisterMessage(GetOperationRequest)

ListOperationsRequest = _reflection.GeneratedProtocolMessageType('ListOperationsRequest', (_message.Message,), dict(
  DESCRIPTOR = _LISTOPERATIONSREQUEST,
  __module__ = 'google.longrunning.operations_pb2'
  # @@protoc_insertion_point(class_scope:google.longrunning.ListOperationsRequest)
  ))
_sym_db.RegisterMessage(ListOperationsRequest)

ListOperationsResponse = _reflection.GeneratedProtocolMessageType('ListOperationsResponse', (_message.Message,), dict(
  DESCRIPTOR = _LISTOPERATIONSRESPONSE,
  __module__ = 'google.longrunning.operations_pb2'
  # @@protoc_insertion_point(class_scope:google.longrunning.ListOperationsResponse)
  ))
_sym_db.RegisterMessage(ListOperationsResponse)

CancelOperationRequest = _reflection.GeneratedProtocolMessageType('CancelOperationRequest', (_message.Message,), dict(
  DESCRIPTOR = _CANCELOPERATIONREQUEST,
  __module__ = 'google.longrunning.operations_pb2'
  # @@protoc_insertion_point(class_scope:google.longrunning.CancelOperationRequest)
  ))
_sym_db.RegisterMessage(CancelOperationRequest)

DeleteOperationRequest = _reflection.GeneratedProtocolMessageType('DeleteOperationRequest', (_message.Message,), dict(
  DESCRIPTOR = _DELETEOPERATIONREQUEST,
  __module__ = 'google.longrunning.operations_pb2'
  # @@protoc_insertion_point(class_scope:google.longrunning.DeleteOperationRequest)
  ))
_sym_db.RegisterMessage(DeleteOperationRequest)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\026com.google.longrunningB\017OperationsProtoP\001Z=google.golang.org/genproto/googleapis/longrunning;longrunning\252\002\022Google.LongRunning'))

_OPERATIONS = _descriptor.ServiceDescriptor(
  name='Operations',
  full_name='google.longrunning.Operations',
  file=DESCRIPTOR,
  index=0,
  options=None,
  serialized_start=655,
  serialized_end=1179,
  methods=[
  _descriptor.MethodDescriptor(
    name='ListOperations',
    full_name='google.longrunning.Operations.ListOperations',
    index=0,
    containing_service=None,
    input_type=_LISTOPERATIONSREQUEST,
    output_type=_LISTOPERATIONSRESPONSE,
    options=_descriptor._ParseOptions(descriptor_pb2.MethodOptions(), _b('\202\323\344\223\002\027\022\025/v1/{name=operations}')),
  ),
  _descriptor.MethodDescriptor(
    name='GetOperation',
    full_name='google.longrunning.Operations.GetOperation',
    index=1,
    containing_service=None,
    input_type=_GETOPERATIONREQUEST,
    output_type=_OPERATION,
    options=_descriptor._ParseOptions(descriptor_pb2.MethodOptions(), _b('\202\323\344\223\002\032\022\030/v1/{name=operations/**}')),
  ),
  _descriptor.MethodDescriptor(
    name='DeleteOperation',
    full_name='google.longrunning.Operations.DeleteOperation',
    index=2,
    containing_service=None,
    input_type=_DELETEOPERATIONREQUEST,
    output_type=google_dot_protobuf_dot_empty__pb2._EMPTY,
    options=_descriptor._ParseOptions(descriptor_pb2.MethodOptions(), _b('\202\323\344\223\002\032*\030/v1/{name=operations/**}')),
  ),
  _descriptor.MethodDescriptor(
    name='CancelOperation',
    full_name='google.longrunning.Operations.CancelOperation',
    index=3,
    containing_service=None,
    input_type=_CANCELOPERATIONREQUEST,
    output_type=google_dot_protobuf_dot_empty__pb2._EMPTY,
    options=_descriptor._ParseOptions(descriptor_pb2.MethodOptions(), _b('\202\323\344\223\002$\"\037/v1/{name=operations/**}:cancel:\001*')),
  ),
])
_sym_db.RegisterServiceDescriptor(_OPERATIONS)

DESCRIPTOR.services_by_name['Operations'] = _OPERATIONS

try:
  # THESE ELEMENTS WILL BE DEPRECATED.
  # Please use the generated *_pb2_grpc.py files instead.
  import grpc
  from grpc.beta import implementations as beta_implementations
  from grpc.beta import interfaces as beta_interfaces
  from grpc.framework.common import cardinality
  from grpc.framework.interfaces.face import utilities as face_utilities


  class OperationsStub(object):
    """Manages long-running operations with an API service.

    When an API method normally takes long time to complete, it can be designed
    to return [Operation][google.longrunning.Operation] to the client, and the client can use this
    interface to receive the real response asynchronously by polling the
    operation resource, or pass the operation resource to another API (such as
    Google Cloud Pub/Sub API) to receive the response.  Any API service that
    returns long-running operations should implement the `Operations` interface
    so developers can have a consistent client experience.
    """

    def __init__(self, channel):
      """Constructor.

      Args:
        channel: A grpc.Channel.
      """
      self.ListOperations = channel.unary_unary(
          '/google.longrunning.Operations/ListOperations',
          request_serializer=ListOperationsRequest.SerializeToString,
          response_deserializer=ListOperationsResponse.FromString,
          )
      self.GetOperation = channel.unary_unary(
          '/google.longrunning.Operations/GetOperation',
          request_serializer=GetOperationRequest.SerializeToString,
          response_deserializer=Operation.FromString,
          )
      self.DeleteOperation = channel.unary_unary(
          '/google.longrunning.Operations/DeleteOperation',
          request_serializer=DeleteOperationRequest.SerializeToString,
          response_deserializer=google_dot_protobuf_dot_empty__pb2.Empty.FromString,
          )
      self.CancelOperation = channel.unary_unary(
          '/google.longrunning.Operations/CancelOperation',
          request_serializer=CancelOperationRequest.SerializeToString,
          response_deserializer=google_dot_protobuf_dot_empty__pb2.Empty.FromString,
          )


  class OperationsServicer(object):
    """Manages long-running operations with an API service.

    When an API method normally takes long time to complete, it can be designed
    to return [Operation][google.longrunning.Operation] to the client, and the client can use this
    interface to receive the real response asynchronously by polling the
    operation resource, or pass the operation resource to another API (such as
    Google Cloud Pub/Sub API) to receive the response.  Any API service that
    returns long-running operations should implement the `Operations` interface
    so developers can have a consistent client experience.
    """

    def ListOperations(self, request, context):
      """Lists operations that match the specified filter in the request. If the
      server doesn't support this method, it returns `UNIMPLEMENTED`.

      NOTE: the `name` binding below allows API services to override the binding
      to use different resource name schemes, such as `users/*/operations`.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def GetOperation(self, request, context):
      """Gets the latest state of a long-running operation.  Clients can use this
      method to poll the operation result at intervals as recommended by the API
      service.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def DeleteOperation(self, request, context):
      """Deletes a long-running operation. This method indicates that the client is
      no longer interested in the operation result. It does not cancel the
      operation. If the server doesn't support this method, it returns
      `google.rpc.Code.UNIMPLEMENTED`.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def CancelOperation(self, request, context):
      """Starts asynchronous cancellation on a long-running operation.  The server
      makes a best effort to cancel the operation, but success is not
      guaranteed.  If the server doesn't support this method, it returns
      `google.rpc.Code.UNIMPLEMENTED`.  Clients can use
      [Operations.GetOperation][google.longrunning.Operations.GetOperation] or
      other methods to check whether the cancellation succeeded or whether the
      operation completed despite cancellation. On successful cancellation,
      the operation is not deleted; instead, it becomes an operation with
      an [Operation.error][google.longrunning.Operation.error] value with a [google.rpc.Status.code][google.rpc.Status.code] of 1,
      corresponding to `Code.CANCELLED`.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')


  def add_OperationsServicer_to_server(servicer, server):
    rpc_method_handlers = {
        'ListOperations': grpc.unary_unary_rpc_method_handler(
            servicer.ListOperations,
            request_deserializer=ListOperationsRequest.FromString,
            response_serializer=ListOperationsResponse.SerializeToString,
        ),
        'GetOperation': grpc.unary_unary_rpc_method_handler(
            servicer.GetOperation,
            request_deserializer=GetOperationRequest.FromString,
            response_serializer=Operation.SerializeToString,
        ),
        'DeleteOperation': grpc.unary_unary_rpc_method_handler(
            servicer.DeleteOperation,
            request_deserializer=DeleteOperationRequest.FromString,
            response_serializer=google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
        ),
        'CancelOperation': grpc.unary_unary_rpc_method_handler(
            servicer.CancelOperation,
            request_deserializer=CancelOperationRequest.FromString,
            response_serializer=google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
        ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
        'google.longrunning.Operations', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


  class BetaOperationsServicer(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    """Manages long-running operations with an API service.

    When an API method normally takes long time to complete, it can be designed
    to return [Operation][google.longrunning.Operation] to the client, and the client can use this
    interface to receive the real response asynchronously by polling the
    operation resource, or pass the operation resource to another API (such as
    Google Cloud Pub/Sub API) to receive the response.  Any API service that
    returns long-running operations should implement the `Operations` interface
    so developers can have a consistent client experience.
    """
    def ListOperations(self, request, context):
      """Lists operations that match the specified filter in the request. If the
      server doesn't support this method, it returns `UNIMPLEMENTED`.

      NOTE: the `name` binding below allows API services to override the binding
      to use different resource name schemes, such as `users/*/operations`.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def GetOperation(self, request, context):
      """Gets the latest state of a long-running operation.  Clients can use this
      method to poll the operation result at intervals as recommended by the API
      service.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def DeleteOperation(self, request, context):
      """Deletes a long-running operation. This method indicates that the client is
      no longer interested in the operation result. It does not cancel the
      operation. If the server doesn't support this method, it returns
      `google.rpc.Code.UNIMPLEMENTED`.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def CancelOperation(self, request, context):
      """Starts asynchronous cancellation on a long-running operation.  The server
      makes a best effort to cancel the operation, but success is not
      guaranteed.  If the server doesn't support this method, it returns
      `google.rpc.Code.UNIMPLEMENTED`.  Clients can use
      [Operations.GetOperation][google.longrunning.Operations.GetOperation] or
      other methods to check whether the cancellation succeeded or whether the
      operation completed despite cancellation. On successful cancellation,
      the operation is not deleted; instead, it becomes an operation with
      an [Operation.error][google.longrunning.Operation.error] value with a [google.rpc.Status.code][google.rpc.Status.code] of 1,
      corresponding to `Code.CANCELLED`.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)


  class BetaOperationsStub(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    """Manages long-running operations with an API service.

    When an API method normally takes long time to complete, it can be designed
    to return [Operation][google.longrunning.Operation] to the client, and the client can use this
    interface to receive the real response asynchronously by polling the
    operation resource, or pass the operation resource to another API (such as
    Google Cloud Pub/Sub API) to receive the response.  Any API service that
    returns long-running operations should implement the `Operations` interface
    so developers can have a consistent client experience.
    """
    def ListOperations(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Lists operations that match the specified filter in the request. If the
      server doesn't support this method, it returns `UNIMPLEMENTED`.

      NOTE: the `name` binding below allows API services to override the binding
      to use different resource name schemes, such as `users/*/operations`.
      """
      raise NotImplementedError()
    ListOperations.future = None
    def GetOperation(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Gets the latest state of a long-running operation.  Clients can use this
      method to poll the operation result at intervals as recommended by the API
      service.
      """
      raise NotImplementedError()
    GetOperation.future = None
    def DeleteOperation(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Deletes a long-running operation. This method indicates that the client is
      no longer interested in the operation result. It does not cancel the
      operation. If the server doesn't support this method, it returns
      `google.rpc.Code.UNIMPLEMENTED`.
      """
      raise NotImplementedError()
    DeleteOperation.future = None
    def CancelOperation(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Starts asynchronous cancellation on a long-running operation.  The server
      makes a best effort to cancel the operation, but success is not
      guaranteed.  If the server doesn't support this method, it returns
      `google.rpc.Code.UNIMPLEMENTED`.  Clients can use
      [Operations.GetOperation][google.longrunning.Operations.GetOperation] or
      other methods to check whether the cancellation succeeded or whether the
      operation completed despite cancellation. On successful cancellation,
      the operation is not deleted; instead, it becomes an operation with
      an [Operation.error][google.longrunning.Operation.error] value with a [google.rpc.Status.code][google.rpc.Status.code] of 1,
      corresponding to `Code.CANCELLED`.
      """
      raise NotImplementedError()
    CancelOperation.future = None


  def beta_create_Operations_server(servicer, pool=None, pool_size=None, default_timeout=None, maximum_timeout=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_deserializers = {
      ('google.longrunning.Operations', 'CancelOperation'): CancelOperationRequest.FromString,
      ('google.longrunning.Operations', 'DeleteOperation'): DeleteOperationRequest.FromString,
      ('google.longrunning.Operations', 'GetOperation'): GetOperationRequest.FromString,
      ('google.longrunning.Operations', 'ListOperations'): ListOperationsRequest.FromString,
    }
    response_serializers = {
      ('google.longrunning.Operations', 'CancelOperation'): google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
      ('google.longrunning.Operations', 'DeleteOperation'): google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
      ('google.longrunning.Operations', 'GetOperation'): Operation.SerializeToString,
      ('google.longrunning.Operations', 'ListOperations'): ListOperationsResponse.SerializeToString,
    }
    method_implementations = {
      ('google.longrunning.Operations', 'CancelOperation'): face_utilities.unary_unary_inline(servicer.CancelOperation),
      ('google.longrunning.Operations', 'DeleteOperation'): face_utilities.unary_unary_inline(servicer.DeleteOperation),
      ('google.longrunning.Operations', 'GetOperation'): face_utilities.unary_unary_inline(servicer.GetOperation),
      ('google.longrunning.Operations', 'ListOperations'): face_utilities.unary_unary_inline(servicer.ListOperations),
    }
    server_options = beta_implementations.server_options(request_deserializers=request_deserializers, response_serializers=response_serializers, thread_pool=pool, thread_pool_size=pool_size, default_timeout=default_timeout, maximum_timeout=maximum_timeout)
    return beta_implementations.server(method_implementations, options=server_options)


  def beta_create_Operations_stub(channel, host=None, metadata_transformer=None, pool=None, pool_size=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_serializers = {
      ('google.longrunning.Operations', 'CancelOperation'): CancelOperationRequest.SerializeToString,
      ('google.longrunning.Operations', 'DeleteOperation'): DeleteOperationRequest.SerializeToString,
      ('google.longrunning.Operations', 'GetOperation'): GetOperationRequest.SerializeToString,
      ('google.longrunning.Operations', 'ListOperations'): ListOperationsRequest.SerializeToString,
    }
    response_deserializers = {
      ('google.longrunning.Operations', 'CancelOperation'): google_dot_protobuf_dot_empty__pb2.Empty.FromString,
      ('google.longrunning.Operations', 'DeleteOperation'): google_dot_protobuf_dot_empty__pb2.Empty.FromString,
      ('google.longrunning.Operations', 'GetOperation'): Operation.FromString,
      ('google.longrunning.Operations', 'ListOperations'): ListOperationsResponse.FromString,
    }
    cardinalities = {
      'CancelOperation': cardinality.Cardinality.UNARY_UNARY,
      'DeleteOperation': cardinality.Cardinality.UNARY_UNARY,
      'GetOperation': cardinality.Cardinality.UNARY_UNARY,
      'ListOperations': cardinality.Cardinality.UNARY_UNARY,
    }
    stub_options = beta_implementations.stub_options(host=host, metadata_transformer=metadata_transformer, request_serializers=request_serializers, response_deserializers=response_deserializers, thread_pool=pool, thread_pool_size=pool_size)
    return beta_implementations.dynamic_stub(channel, 'google.longrunning.Operations', cardinalities, options=stub_options)
except ImportError:
  pass
# @@protoc_insertion_point(module_scope)
