# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/appengine/v1/application.proto

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
from google.protobuf import duration_pb2 as google_dot_protobuf_dot_duration__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/appengine/v1/application.proto',
  package='google.appengine.v1',
  syntax='proto3',
  serialized_pb=_b('\n%google/appengine/v1/application.proto\x12\x13google.appengine.v1\x1a\x1cgoogle/api/annotations.proto\x1a\x1egoogle/protobuf/duration.proto\"\x94\x02\n\x0b\x41pplication\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\n\n\x02id\x18\x02 \x01(\t\x12<\n\x0e\x64ispatch_rules\x18\x03 \x03(\x0b\x32$.google.appengine.v1.UrlDispatchRule\x12\x13\n\x0b\x61uth_domain\x18\x06 \x01(\t\x12\x13\n\x0blocation_id\x18\x07 \x01(\t\x12\x13\n\x0b\x63ode_bucket\x18\x08 \x01(\t\x12<\n\x19\x64\x65\x66\x61ult_cookie_expiration\x18\t \x01(\x0b\x32\x19.google.protobuf.Duration\x12\x18\n\x10\x64\x65\x66\x61ult_hostname\x18\x0b \x01(\t\x12\x16\n\x0e\x64\x65\x66\x61ult_bucket\x18\x0c \x01(\t\"@\n\x0fUrlDispatchRule\x12\x0e\n\x06\x64omain\x18\x01 \x01(\t\x12\x0c\n\x04path\x18\x02 \x01(\t\x12\x0f\n\x07service\x18\x03 \x01(\tBk\n\x17\x63om.google.appengine.v1B\x10\x41pplicationProtoP\x01Z<google.golang.org/genproto/googleapis/appengine/v1;appengineb\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_protobuf_dot_duration__pb2.DESCRIPTOR,])




_APPLICATION = _descriptor.Descriptor(
  name='Application',
  full_name='google.appengine.v1.Application',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.appengine.v1.Application.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='id', full_name='google.appengine.v1.Application.id', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='dispatch_rules', full_name='google.appengine.v1.Application.dispatch_rules', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='auth_domain', full_name='google.appengine.v1.Application.auth_domain', index=3,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='location_id', full_name='google.appengine.v1.Application.location_id', index=4,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='code_bucket', full_name='google.appengine.v1.Application.code_bucket', index=5,
      number=8, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='default_cookie_expiration', full_name='google.appengine.v1.Application.default_cookie_expiration', index=6,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='default_hostname', full_name='google.appengine.v1.Application.default_hostname', index=7,
      number=11, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='default_bucket', full_name='google.appengine.v1.Application.default_bucket', index=8,
      number=12, type=9, cpp_type=9, label=1,
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
  serialized_start=125,
  serialized_end=401,
)


_URLDISPATCHRULE = _descriptor.Descriptor(
  name='UrlDispatchRule',
  full_name='google.appengine.v1.UrlDispatchRule',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='domain', full_name='google.appengine.v1.UrlDispatchRule.domain', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='path', full_name='google.appengine.v1.UrlDispatchRule.path', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='service', full_name='google.appengine.v1.UrlDispatchRule.service', index=2,
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
  serialized_start=403,
  serialized_end=467,
)

_APPLICATION.fields_by_name['dispatch_rules'].message_type = _URLDISPATCHRULE
_APPLICATION.fields_by_name['default_cookie_expiration'].message_type = google_dot_protobuf_dot_duration__pb2._DURATION
DESCRIPTOR.message_types_by_name['Application'] = _APPLICATION
DESCRIPTOR.message_types_by_name['UrlDispatchRule'] = _URLDISPATCHRULE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Application = _reflection.GeneratedProtocolMessageType('Application', (_message.Message,), dict(
  DESCRIPTOR = _APPLICATION,
  __module__ = 'google.appengine.v1.application_pb2'
  # @@protoc_insertion_point(class_scope:google.appengine.v1.Application)
  ))
_sym_db.RegisterMessage(Application)

UrlDispatchRule = _reflection.GeneratedProtocolMessageType('UrlDispatchRule', (_message.Message,), dict(
  DESCRIPTOR = _URLDISPATCHRULE,
  __module__ = 'google.appengine.v1.application_pb2'
  # @@protoc_insertion_point(class_scope:google.appengine.v1.UrlDispatchRule)
  ))
_sym_db.RegisterMessage(UrlDispatchRule)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\027com.google.appengine.v1B\020ApplicationProtoP\001Z<google.golang.org/genproto/googleapis/appengine/v1;appengine'))
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
