# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/bytestream/bytestream.proto

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
from google.protobuf import wrappers_pb2 as google_dot_protobuf_dot_wrappers__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/bytestream/bytestream.proto',
  package='google.bytestream',
  syntax='proto3',
  serialized_pb=_b('\n\"google/bytestream/bytestream.proto\x12\x11google.bytestream\x1a\x1cgoogle/api/annotations.proto\x1a\x1egoogle/protobuf/wrappers.proto\"M\n\x0bReadRequest\x12\x15\n\rresource_name\x18\x01 \x01(\t\x12\x13\n\x0bread_offset\x18\x02 \x01(\x03\x12\x12\n\nread_limit\x18\x03 \x01(\x03\"\x1c\n\x0cReadResponse\x12\x0c\n\x04\x64\x61ta\x18\n \x01(\x0c\"_\n\x0cWriteRequest\x12\x15\n\rresource_name\x18\x01 \x01(\t\x12\x14\n\x0cwrite_offset\x18\x02 \x01(\x03\x12\x14\n\x0c\x66inish_write\x18\x03 \x01(\x08\x12\x0c\n\x04\x64\x61ta\x18\n \x01(\x0c\"\'\n\rWriteResponse\x12\x16\n\x0e\x63ommitted_size\x18\x01 \x01(\x03\"0\n\x17QueryWriteStatusRequest\x12\x15\n\rresource_name\x18\x01 \x01(\t\"D\n\x18QueryWriteStatusResponse\x12\x16\n\x0e\x63ommitted_size\x18\x01 \x01(\x03\x12\x10\n\x08\x63omplete\x18\x02 \x01(\x08\x32\x92\x02\n\nByteStream\x12I\n\x04Read\x12\x1e.google.bytestream.ReadRequest\x1a\x1f.google.bytestream.ReadResponse0\x01\x12L\n\x05Write\x12\x1f.google.bytestream.WriteRequest\x1a .google.bytestream.WriteResponse(\x01\x12k\n\x10QueryWriteStatus\x12*.google.bytestream.QueryWriteStatusRequest\x1a+.google.bytestream.QueryWriteStatusResponseBe\n\x15\x63om.google.bytestreamB\x0f\x42yteStreamProtoZ;google.golang.org/genproto/googleapis/bytestream;bytestreamb\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,])




_READREQUEST = _descriptor.Descriptor(
  name='ReadRequest',
  full_name='google.bytestream.ReadRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='resource_name', full_name='google.bytestream.ReadRequest.resource_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='read_offset', full_name='google.bytestream.ReadRequest.read_offset', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='read_limit', full_name='google.bytestream.ReadRequest.read_limit', index=2,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=119,
  serialized_end=196,
)


_READRESPONSE = _descriptor.Descriptor(
  name='ReadResponse',
  full_name='google.bytestream.ReadResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='google.bytestream.ReadResponse.data', index=0,
      number=10, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
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
  serialized_start=198,
  serialized_end=226,
)


_WRITEREQUEST = _descriptor.Descriptor(
  name='WriteRequest',
  full_name='google.bytestream.WriteRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='resource_name', full_name='google.bytestream.WriteRequest.resource_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='write_offset', full_name='google.bytestream.WriteRequest.write_offset', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='finish_write', full_name='google.bytestream.WriteRequest.finish_write', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='google.bytestream.WriteRequest.data', index=3,
      number=10, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
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
  serialized_start=228,
  serialized_end=323,
)


_WRITERESPONSE = _descriptor.Descriptor(
  name='WriteResponse',
  full_name='google.bytestream.WriteResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='committed_size', full_name='google.bytestream.WriteResponse.committed_size', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=325,
  serialized_end=364,
)


_QUERYWRITESTATUSREQUEST = _descriptor.Descriptor(
  name='QueryWriteStatusRequest',
  full_name='google.bytestream.QueryWriteStatusRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='resource_name', full_name='google.bytestream.QueryWriteStatusRequest.resource_name', index=0,
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
  serialized_start=366,
  serialized_end=414,
)


_QUERYWRITESTATUSRESPONSE = _descriptor.Descriptor(
  name='QueryWriteStatusResponse',
  full_name='google.bytestream.QueryWriteStatusResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='committed_size', full_name='google.bytestream.QueryWriteStatusResponse.committed_size', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='complete', full_name='google.bytestream.QueryWriteStatusResponse.complete', index=1,
      number=2, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=416,
  serialized_end=484,
)

DESCRIPTOR.message_types_by_name['ReadRequest'] = _READREQUEST
DESCRIPTOR.message_types_by_name['ReadResponse'] = _READRESPONSE
DESCRIPTOR.message_types_by_name['WriteRequest'] = _WRITEREQUEST
DESCRIPTOR.message_types_by_name['WriteResponse'] = _WRITERESPONSE
DESCRIPTOR.message_types_by_name['QueryWriteStatusRequest'] = _QUERYWRITESTATUSREQUEST
DESCRIPTOR.message_types_by_name['QueryWriteStatusResponse'] = _QUERYWRITESTATUSRESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ReadRequest = _reflection.GeneratedProtocolMessageType('ReadRequest', (_message.Message,), dict(
  DESCRIPTOR = _READREQUEST,
  __module__ = 'google.bytestream.bytestream_pb2'
  # @@protoc_insertion_point(class_scope:google.bytestream.ReadRequest)
  ))
_sym_db.RegisterMessage(ReadRequest)

ReadResponse = _reflection.GeneratedProtocolMessageType('ReadResponse', (_message.Message,), dict(
  DESCRIPTOR = _READRESPONSE,
  __module__ = 'google.bytestream.bytestream_pb2'
  # @@protoc_insertion_point(class_scope:google.bytestream.ReadResponse)
  ))
_sym_db.RegisterMessage(ReadResponse)

WriteRequest = _reflection.GeneratedProtocolMessageType('WriteRequest', (_message.Message,), dict(
  DESCRIPTOR = _WRITEREQUEST,
  __module__ = 'google.bytestream.bytestream_pb2'
  # @@protoc_insertion_point(class_scope:google.bytestream.WriteRequest)
  ))
_sym_db.RegisterMessage(WriteRequest)

WriteResponse = _reflection.GeneratedProtocolMessageType('WriteResponse', (_message.Message,), dict(
  DESCRIPTOR = _WRITERESPONSE,
  __module__ = 'google.bytestream.bytestream_pb2'
  # @@protoc_insertion_point(class_scope:google.bytestream.WriteResponse)
  ))
_sym_db.RegisterMessage(WriteResponse)

QueryWriteStatusRequest = _reflection.GeneratedProtocolMessageType('QueryWriteStatusRequest', (_message.Message,), dict(
  DESCRIPTOR = _QUERYWRITESTATUSREQUEST,
  __module__ = 'google.bytestream.bytestream_pb2'
  # @@protoc_insertion_point(class_scope:google.bytestream.QueryWriteStatusRequest)
  ))
_sym_db.RegisterMessage(QueryWriteStatusRequest)

QueryWriteStatusResponse = _reflection.GeneratedProtocolMessageType('QueryWriteStatusResponse', (_message.Message,), dict(
  DESCRIPTOR = _QUERYWRITESTATUSRESPONSE,
  __module__ = 'google.bytestream.bytestream_pb2'
  # @@protoc_insertion_point(class_scope:google.bytestream.QueryWriteStatusResponse)
  ))
_sym_db.RegisterMessage(QueryWriteStatusResponse)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\025com.google.bytestreamB\017ByteStreamProtoZ;google.golang.org/genproto/googleapis/bytestream;bytestream'))

_BYTESTREAM = _descriptor.ServiceDescriptor(
  name='ByteStream',
  full_name='google.bytestream.ByteStream',
  file=DESCRIPTOR,
  index=0,
  options=None,
  serialized_start=487,
  serialized_end=761,
  methods=[
  _descriptor.MethodDescriptor(
    name='Read',
    full_name='google.bytestream.ByteStream.Read',
    index=0,
    containing_service=None,
    input_type=_READREQUEST,
    output_type=_READRESPONSE,
    options=None,
  ),
  _descriptor.MethodDescriptor(
    name='Write',
    full_name='google.bytestream.ByteStream.Write',
    index=1,
    containing_service=None,
    input_type=_WRITEREQUEST,
    output_type=_WRITERESPONSE,
    options=None,
  ),
  _descriptor.MethodDescriptor(
    name='QueryWriteStatus',
    full_name='google.bytestream.ByteStream.QueryWriteStatus',
    index=2,
    containing_service=None,
    input_type=_QUERYWRITESTATUSREQUEST,
    output_type=_QUERYWRITESTATUSRESPONSE,
    options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_BYTESTREAM)

DESCRIPTOR.services_by_name['ByteStream'] = _BYTESTREAM

try:
  # THESE ELEMENTS WILL BE DEPRECATED.
  # Please use the generated *_pb2_grpc.py files instead.
  import grpc
  from grpc.beta import implementations as beta_implementations
  from grpc.beta import interfaces as beta_interfaces
  from grpc.framework.common import cardinality
  from grpc.framework.interfaces.face import utilities as face_utilities


  class ByteStreamStub(object):
    """#### Introduction

    The Byte Stream API enables a client to read and write a stream of bytes to
    and from a resource. Resources have names, and these names are supplied in
    the API calls below to identify the resource that is being read from or
    written to.

    All implementations of the Byte Stream API export the interface defined here:

    * `Read()`: Reads the contents of a resource.

    * `Write()`: Writes the contents of a resource. The client can call `Write()`
    multiple times with the same resource and can check the status of the write
    by calling `QueryWriteStatus()`.

    #### Service parameters and metadata

    The ByteStream API provides no direct way to access/modify any metadata
    associated with the resource.

    #### Errors

    The errors returned by the service are in the Google canonical error space.
    """

    def __init__(self, channel):
      """Constructor.

      Args:
        channel: A grpc.Channel.
      """
      self.Read = channel.unary_stream(
          '/google.bytestream.ByteStream/Read',
          request_serializer=ReadRequest.SerializeToString,
          response_deserializer=ReadResponse.FromString,
          )
      self.Write = channel.stream_unary(
          '/google.bytestream.ByteStream/Write',
          request_serializer=WriteRequest.SerializeToString,
          response_deserializer=WriteResponse.FromString,
          )
      self.QueryWriteStatus = channel.unary_unary(
          '/google.bytestream.ByteStream/QueryWriteStatus',
          request_serializer=QueryWriteStatusRequest.SerializeToString,
          response_deserializer=QueryWriteStatusResponse.FromString,
          )


  class ByteStreamServicer(object):
    """#### Introduction

    The Byte Stream API enables a client to read and write a stream of bytes to
    and from a resource. Resources have names, and these names are supplied in
    the API calls below to identify the resource that is being read from or
    written to.

    All implementations of the Byte Stream API export the interface defined here:

    * `Read()`: Reads the contents of a resource.

    * `Write()`: Writes the contents of a resource. The client can call `Write()`
    multiple times with the same resource and can check the status of the write
    by calling `QueryWriteStatus()`.

    #### Service parameters and metadata

    The ByteStream API provides no direct way to access/modify any metadata
    associated with the resource.

    #### Errors

    The errors returned by the service are in the Google canonical error space.
    """

    def Read(self, request, context):
      """`Read()` is used to retrieve the contents of a resource as a sequence
      of bytes. The bytes are returned in a sequence of responses, and the
      responses are delivered as the results of a server-side streaming RPC.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def Write(self, request_iterator, context):
      """`Write()` is used to send the contents of a resource as a sequence of
      bytes. The bytes are sent in a sequence of request protos of a client-side
      streaming RPC.

      A `Write()` action is resumable. If there is an error or the connection is
      broken during the `Write()`, the client should check the status of the
      `Write()` by calling `QueryWriteStatus()` and continue writing from the
      returned `committed_size`. This may be less than the amount of data the
      client previously sent.

      Calling `Write()` on a resource name that was previously written and
      finalized could cause an error, depending on whether the underlying service
      allows over-writing of previously written resources.

      When the client closes the request channel, the service will respond with
      a `WriteResponse`. The service will not view the resource as `complete`
      until the client has sent a `WriteRequest` with `finish_write` set to
      `true`. Sending any requests on a stream after sending a request with
      `finish_write` set to `true` will cause an error. The client **should**
      check the `WriteResponse` it receives to determine how much data the
      service was able to commit and whether the service views the resource as
      `complete` or not.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def QueryWriteStatus(self, request, context):
      """`QueryWriteStatus()` is used to find the `committed_size` for a resource
      that is being written, which can then be used as the `write_offset` for
      the next `Write()` call.

      If the resource does not exist (i.e., the resource has been deleted, or the
      first `Write()` has not yet reached the service), this method returns the
      error `NOT_FOUND`.

      The client **may** call `QueryWriteStatus()` at any time to determine how
      much data has been processed for this resource. This is useful if the
      client is buffering data and needs to know which data can be safely
      evicted. For any sequence of `QueryWriteStatus()` calls for a given
      resource name, the sequence of returned `committed_size` values will be
      non-decreasing.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')


  def add_ByteStreamServicer_to_server(servicer, server):
    rpc_method_handlers = {
        'Read': grpc.unary_stream_rpc_method_handler(
            servicer.Read,
            request_deserializer=ReadRequest.FromString,
            response_serializer=ReadResponse.SerializeToString,
        ),
        'Write': grpc.stream_unary_rpc_method_handler(
            servicer.Write,
            request_deserializer=WriteRequest.FromString,
            response_serializer=WriteResponse.SerializeToString,
        ),
        'QueryWriteStatus': grpc.unary_unary_rpc_method_handler(
            servicer.QueryWriteStatus,
            request_deserializer=QueryWriteStatusRequest.FromString,
            response_serializer=QueryWriteStatusResponse.SerializeToString,
        ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
        'google.bytestream.ByteStream', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


  class BetaByteStreamServicer(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    """#### Introduction

    The Byte Stream API enables a client to read and write a stream of bytes to
    and from a resource. Resources have names, and these names are supplied in
    the API calls below to identify the resource that is being read from or
    written to.

    All implementations of the Byte Stream API export the interface defined here:

    * `Read()`: Reads the contents of a resource.

    * `Write()`: Writes the contents of a resource. The client can call `Write()`
    multiple times with the same resource and can check the status of the write
    by calling `QueryWriteStatus()`.

    #### Service parameters and metadata

    The ByteStream API provides no direct way to access/modify any metadata
    associated with the resource.

    #### Errors

    The errors returned by the service are in the Google canonical error space.
    """
    def Read(self, request, context):
      """`Read()` is used to retrieve the contents of a resource as a sequence
      of bytes. The bytes are returned in a sequence of responses, and the
      responses are delivered as the results of a server-side streaming RPC.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def Write(self, request_iterator, context):
      """`Write()` is used to send the contents of a resource as a sequence of
      bytes. The bytes are sent in a sequence of request protos of a client-side
      streaming RPC.

      A `Write()` action is resumable. If there is an error or the connection is
      broken during the `Write()`, the client should check the status of the
      `Write()` by calling `QueryWriteStatus()` and continue writing from the
      returned `committed_size`. This may be less than the amount of data the
      client previously sent.

      Calling `Write()` on a resource name that was previously written and
      finalized could cause an error, depending on whether the underlying service
      allows over-writing of previously written resources.

      When the client closes the request channel, the service will respond with
      a `WriteResponse`. The service will not view the resource as `complete`
      until the client has sent a `WriteRequest` with `finish_write` set to
      `true`. Sending any requests on a stream after sending a request with
      `finish_write` set to `true` will cause an error. The client **should**
      check the `WriteResponse` it receives to determine how much data the
      service was able to commit and whether the service views the resource as
      `complete` or not.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def QueryWriteStatus(self, request, context):
      """`QueryWriteStatus()` is used to find the `committed_size` for a resource
      that is being written, which can then be used as the `write_offset` for
      the next `Write()` call.

      If the resource does not exist (i.e., the resource has been deleted, or the
      first `Write()` has not yet reached the service), this method returns the
      error `NOT_FOUND`.

      The client **may** call `QueryWriteStatus()` at any time to determine how
      much data has been processed for this resource. This is useful if the
      client is buffering data and needs to know which data can be safely
      evicted. For any sequence of `QueryWriteStatus()` calls for a given
      resource name, the sequence of returned `committed_size` values will be
      non-decreasing.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)


  class BetaByteStreamStub(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    """#### Introduction

    The Byte Stream API enables a client to read and write a stream of bytes to
    and from a resource. Resources have names, and these names are supplied in
    the API calls below to identify the resource that is being read from or
    written to.

    All implementations of the Byte Stream API export the interface defined here:

    * `Read()`: Reads the contents of a resource.

    * `Write()`: Writes the contents of a resource. The client can call `Write()`
    multiple times with the same resource and can check the status of the write
    by calling `QueryWriteStatus()`.

    #### Service parameters and metadata

    The ByteStream API provides no direct way to access/modify any metadata
    associated with the resource.

    #### Errors

    The errors returned by the service are in the Google canonical error space.
    """
    def Read(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """`Read()` is used to retrieve the contents of a resource as a sequence
      of bytes. The bytes are returned in a sequence of responses, and the
      responses are delivered as the results of a server-side streaming RPC.
      """
      raise NotImplementedError()
    def Write(self, request_iterator, timeout, metadata=None, with_call=False, protocol_options=None):
      """`Write()` is used to send the contents of a resource as a sequence of
      bytes. The bytes are sent in a sequence of request protos of a client-side
      streaming RPC.

      A `Write()` action is resumable. If there is an error or the connection is
      broken during the `Write()`, the client should check the status of the
      `Write()` by calling `QueryWriteStatus()` and continue writing from the
      returned `committed_size`. This may be less than the amount of data the
      client previously sent.

      Calling `Write()` on a resource name that was previously written and
      finalized could cause an error, depending on whether the underlying service
      allows over-writing of previously written resources.

      When the client closes the request channel, the service will respond with
      a `WriteResponse`. The service will not view the resource as `complete`
      until the client has sent a `WriteRequest` with `finish_write` set to
      `true`. Sending any requests on a stream after sending a request with
      `finish_write` set to `true` will cause an error. The client **should**
      check the `WriteResponse` it receives to determine how much data the
      service was able to commit and whether the service views the resource as
      `complete` or not.
      """
      raise NotImplementedError()
    Write.future = None
    def QueryWriteStatus(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """`QueryWriteStatus()` is used to find the `committed_size` for a resource
      that is being written, which can then be used as the `write_offset` for
      the next `Write()` call.

      If the resource does not exist (i.e., the resource has been deleted, or the
      first `Write()` has not yet reached the service), this method returns the
      error `NOT_FOUND`.

      The client **may** call `QueryWriteStatus()` at any time to determine how
      much data has been processed for this resource. This is useful if the
      client is buffering data and needs to know which data can be safely
      evicted. For any sequence of `QueryWriteStatus()` calls for a given
      resource name, the sequence of returned `committed_size` values will be
      non-decreasing.
      """
      raise NotImplementedError()
    QueryWriteStatus.future = None


  def beta_create_ByteStream_server(servicer, pool=None, pool_size=None, default_timeout=None, maximum_timeout=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_deserializers = {
      ('google.bytestream.ByteStream', 'QueryWriteStatus'): QueryWriteStatusRequest.FromString,
      ('google.bytestream.ByteStream', 'Read'): ReadRequest.FromString,
      ('google.bytestream.ByteStream', 'Write'): WriteRequest.FromString,
    }
    response_serializers = {
      ('google.bytestream.ByteStream', 'QueryWriteStatus'): QueryWriteStatusResponse.SerializeToString,
      ('google.bytestream.ByteStream', 'Read'): ReadResponse.SerializeToString,
      ('google.bytestream.ByteStream', 'Write'): WriteResponse.SerializeToString,
    }
    method_implementations = {
      ('google.bytestream.ByteStream', 'QueryWriteStatus'): face_utilities.unary_unary_inline(servicer.QueryWriteStatus),
      ('google.bytestream.ByteStream', 'Read'): face_utilities.unary_stream_inline(servicer.Read),
      ('google.bytestream.ByteStream', 'Write'): face_utilities.stream_unary_inline(servicer.Write),
    }
    server_options = beta_implementations.server_options(request_deserializers=request_deserializers, response_serializers=response_serializers, thread_pool=pool, thread_pool_size=pool_size, default_timeout=default_timeout, maximum_timeout=maximum_timeout)
    return beta_implementations.server(method_implementations, options=server_options)


  def beta_create_ByteStream_stub(channel, host=None, metadata_transformer=None, pool=None, pool_size=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_serializers = {
      ('google.bytestream.ByteStream', 'QueryWriteStatus'): QueryWriteStatusRequest.SerializeToString,
      ('google.bytestream.ByteStream', 'Read'): ReadRequest.SerializeToString,
      ('google.bytestream.ByteStream', 'Write'): WriteRequest.SerializeToString,
    }
    response_deserializers = {
      ('google.bytestream.ByteStream', 'QueryWriteStatus'): QueryWriteStatusResponse.FromString,
      ('google.bytestream.ByteStream', 'Read'): ReadResponse.FromString,
      ('google.bytestream.ByteStream', 'Write'): WriteResponse.FromString,
    }
    cardinalities = {
      'QueryWriteStatus': cardinality.Cardinality.UNARY_UNARY,
      'Read': cardinality.Cardinality.UNARY_STREAM,
      'Write': cardinality.Cardinality.STREAM_UNARY,
    }
    stub_options = beta_implementations.stub_options(host=host, metadata_transformer=metadata_transformer, request_serializers=request_serializers, response_deserializers=response_deserializers, thread_pool=pool, thread_pool_size=pool_size)
    return beta_implementations.dynamic_stub(channel, 'google.bytestream.ByteStream', cardinalities, options=stub_options)
except ImportError:
  pass
# @@protoc_insertion_point(module_scope)
