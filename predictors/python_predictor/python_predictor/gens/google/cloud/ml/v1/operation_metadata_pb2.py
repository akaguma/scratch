# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/cloud/ml/v1/operation_metadata.proto

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
from google.cloud.ml.v1 import model_service_pb2 as google_dot_cloud_dot_ml_dot_v1_dot_model__service__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/cloud/ml/v1/operation_metadata.proto',
  package='google.cloud.ml.v1',
  syntax='proto3',
  serialized_pb=_b('\n+google/cloud/ml/v1/operation_metadata.proto\x12\x12google.cloud.ml.v1\x1a\x1cgoogle/api/annotations.proto\x1a&google/cloud/ml/v1/model_service.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xbf\x03\n\x11OperationMetadata\x12/\n\x0b\x63reate_time\x18\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12.\n\nstart_time\x18\x02 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12,\n\x08\x65nd_time\x18\x03 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12!\n\x19is_cancellation_requested\x18\x04 \x01(\x08\x12K\n\x0eoperation_type\x18\x05 \x01(\x0e\x32\x33.google.cloud.ml.v1.OperationMetadata.OperationType\x12\x12\n\nmodel_name\x18\x06 \x01(\t\x12,\n\x07version\x18\x07 \x01(\x0b\x32\x1b.google.cloud.ml.v1.Version\"i\n\rOperationType\x12\x1e\n\x1aOPERATION_TYPE_UNSPECIFIED\x10\x00\x12\x12\n\x0e\x43REATE_VERSION\x10\x01\x12\x12\n\x0e\x44\x45LETE_VERSION\x10\x02\x12\x10\n\x0c\x44\x45LETE_MODEL\x10\x03\x42l\n\x1a\x63om.google.cloud.ml.api.v1B\x16OperationMetadataProtoP\x01Z4google.golang.org/genproto/googleapis/cloud/ml/v1;mlb\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_cloud_dot_ml_dot_v1_dot_model__service__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])



_OPERATIONMETADATA_OPERATIONTYPE = _descriptor.EnumDescriptor(
  name='OperationType',
  full_name='google.cloud.ml.v1.OperationMetadata.OperationType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='OPERATION_TYPE_UNSPECIFIED', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CREATE_VERSION', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DELETE_VERSION', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DELETE_MODEL', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=513,
  serialized_end=618,
)
_sym_db.RegisterEnumDescriptor(_OPERATIONMETADATA_OPERATIONTYPE)


_OPERATIONMETADATA = _descriptor.Descriptor(
  name='OperationMetadata',
  full_name='google.cloud.ml.v1.OperationMetadata',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='create_time', full_name='google.cloud.ml.v1.OperationMetadata.create_time', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='start_time', full_name='google.cloud.ml.v1.OperationMetadata.start_time', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='end_time', full_name='google.cloud.ml.v1.OperationMetadata.end_time', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_cancellation_requested', full_name='google.cloud.ml.v1.OperationMetadata.is_cancellation_requested', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='operation_type', full_name='google.cloud.ml.v1.OperationMetadata.operation_type', index=4,
      number=5, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='model_name', full_name='google.cloud.ml.v1.OperationMetadata.model_name', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='version', full_name='google.cloud.ml.v1.OperationMetadata.version', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _OPERATIONMETADATA_OPERATIONTYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=171,
  serialized_end=618,
)

_OPERATIONMETADATA.fields_by_name['create_time'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_OPERATIONMETADATA.fields_by_name['start_time'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_OPERATIONMETADATA.fields_by_name['end_time'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_OPERATIONMETADATA.fields_by_name['operation_type'].enum_type = _OPERATIONMETADATA_OPERATIONTYPE
_OPERATIONMETADATA.fields_by_name['version'].message_type = google_dot_cloud_dot_ml_dot_v1_dot_model__service__pb2._VERSION
_OPERATIONMETADATA_OPERATIONTYPE.containing_type = _OPERATIONMETADATA
DESCRIPTOR.message_types_by_name['OperationMetadata'] = _OPERATIONMETADATA
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

OperationMetadata = _reflection.GeneratedProtocolMessageType('OperationMetadata', (_message.Message,), dict(
  DESCRIPTOR = _OPERATIONMETADATA,
  __module__ = 'google.cloud.ml.v1.operation_metadata_pb2'
  # @@protoc_insertion_point(class_scope:google.cloud.ml.v1.OperationMetadata)
  ))
_sym_db.RegisterMessage(OperationMetadata)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\032com.google.cloud.ml.api.v1B\026OperationMetadataProtoP\001Z4google.golang.org/genproto/googleapis/cloud/ml/v1;ml'))
try:
  # THESE ELEMENTS WILL BE DEPRECATED.
  # Please use the generated *_pb2_grpc.py files instead.
  import grpc
  from grpc.beta import implementations as beta_implementations
  from grpc.beta import interfaces as beta_interfaces
  from grpc.framework.common import cardinality
  from grpc.framework.interfaces.face import utilities as face_utilities
except ImportError:
  pass
# @@protoc_insertion_point(module_scope)
