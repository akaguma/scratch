# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/appengine/v1/audit_data.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.appengine.v1 import appengine_pb2 as google_dot_appengine_dot_v1_dot_appengine__pb2
from google.iam.v1 import iam_policy_pb2 as google_dot_iam_dot_v1_dot_iam__policy__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/appengine/v1/audit_data.proto',
  package='google.appengine.v1',
  syntax='proto3',
  serialized_pb=_b('\n$google/appengine/v1/audit_data.proto\x12\x13google.appengine.v1\x1a#google/appengine/v1/appengine.proto\x1a\x1egoogle/iam/v1/iam_policy.proto\"\x9d\x01\n\tAuditData\x12\x42\n\x0eupdate_service\x18\x01 \x01(\x0b\x32(.google.appengine.v1.UpdateServiceMethodH\x00\x12\x42\n\x0e\x63reate_version\x18\x02 \x01(\x0b\x32(.google.appengine.v1.CreateVersionMethodH\x00\x42\x08\n\x06method\"Q\n\x13UpdateServiceMethod\x12:\n\x07request\x18\x01 \x01(\x0b\x32).google.appengine.v1.UpdateServiceRequest\"Q\n\x13\x43reateVersionMethod\x12:\n\x07request\x18\x01 \x01(\x0b\x32).google.appengine.v1.CreateVersionRequestBi\n\x17\x63om.google.appengine.v1B\x0e\x41uditDataProtoP\x01Z<google.golang.org/genproto/googleapis/appengine/v1;appengineb\x06proto3')
  ,
  dependencies=[google_dot_appengine_dot_v1_dot_appengine__pb2.DESCRIPTOR,google_dot_iam_dot_v1_dot_iam__policy__pb2.DESCRIPTOR,])




_AUDITDATA = _descriptor.Descriptor(
  name='AuditData',
  full_name='google.appengine.v1.AuditData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='update_service', full_name='google.appengine.v1.AuditData.update_service', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='create_version', full_name='google.appengine.v1.AuditData.create_version', index=1,
      number=2, type=11, cpp_type=10, label=1,
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
      name='method', full_name='google.appengine.v1.AuditData.method',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=131,
  serialized_end=288,
)


_UPDATESERVICEMETHOD = _descriptor.Descriptor(
  name='UpdateServiceMethod',
  full_name='google.appengine.v1.UpdateServiceMethod',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='request', full_name='google.appengine.v1.UpdateServiceMethod.request', index=0,
      number=1, type=11, cpp_type=10, label=1,
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
  ],
  serialized_start=290,
  serialized_end=371,
)


_CREATEVERSIONMETHOD = _descriptor.Descriptor(
  name='CreateVersionMethod',
  full_name='google.appengine.v1.CreateVersionMethod',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='request', full_name='google.appengine.v1.CreateVersionMethod.request', index=0,
      number=1, type=11, cpp_type=10, label=1,
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
  ],
  serialized_start=373,
  serialized_end=454,
)

_AUDITDATA.fields_by_name['update_service'].message_type = _UPDATESERVICEMETHOD
_AUDITDATA.fields_by_name['create_version'].message_type = _CREATEVERSIONMETHOD
_AUDITDATA.oneofs_by_name['method'].fields.append(
  _AUDITDATA.fields_by_name['update_service'])
_AUDITDATA.fields_by_name['update_service'].containing_oneof = _AUDITDATA.oneofs_by_name['method']
_AUDITDATA.oneofs_by_name['method'].fields.append(
  _AUDITDATA.fields_by_name['create_version'])
_AUDITDATA.fields_by_name['create_version'].containing_oneof = _AUDITDATA.oneofs_by_name['method']
_UPDATESERVICEMETHOD.fields_by_name['request'].message_type = google_dot_appengine_dot_v1_dot_appengine__pb2._UPDATESERVICEREQUEST
_CREATEVERSIONMETHOD.fields_by_name['request'].message_type = google_dot_appengine_dot_v1_dot_appengine__pb2._CREATEVERSIONREQUEST
DESCRIPTOR.message_types_by_name['AuditData'] = _AUDITDATA
DESCRIPTOR.message_types_by_name['UpdateServiceMethod'] = _UPDATESERVICEMETHOD
DESCRIPTOR.message_types_by_name['CreateVersionMethod'] = _CREATEVERSIONMETHOD
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

AuditData = _reflection.GeneratedProtocolMessageType('AuditData', (_message.Message,), dict(
  DESCRIPTOR = _AUDITDATA,
  __module__ = 'google.appengine.v1.audit_data_pb2'
  # @@protoc_insertion_point(class_scope:google.appengine.v1.AuditData)
  ))
_sym_db.RegisterMessage(AuditData)

UpdateServiceMethod = _reflection.GeneratedProtocolMessageType('UpdateServiceMethod', (_message.Message,), dict(
  DESCRIPTOR = _UPDATESERVICEMETHOD,
  __module__ = 'google.appengine.v1.audit_data_pb2'
  # @@protoc_insertion_point(class_scope:google.appengine.v1.UpdateServiceMethod)
  ))
_sym_db.RegisterMessage(UpdateServiceMethod)

CreateVersionMethod = _reflection.GeneratedProtocolMessageType('CreateVersionMethod', (_message.Message,), dict(
  DESCRIPTOR = _CREATEVERSIONMETHOD,
  __module__ = 'google.appengine.v1.audit_data_pb2'
  # @@protoc_insertion_point(class_scope:google.appengine.v1.CreateVersionMethod)
  ))
_sym_db.RegisterMessage(CreateVersionMethod)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\027com.google.appengine.v1B\016AuditDataProtoP\001Z<google.golang.org/genproto/googleapis/appengine/v1;appengine'))
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
