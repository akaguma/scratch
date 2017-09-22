# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/datastore/v1/entity.proto

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
from google.protobuf import struct_pb2 as google_dot_protobuf_dot_struct__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2
from google.type import latlng_pb2 as google_dot_type_dot_latlng__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/datastore/v1/entity.proto',
  package='google.datastore.v1',
  syntax='proto3',
  serialized_pb=_b('\n google/datastore/v1/entity.proto\x12\x13google.datastore.v1\x1a\x1cgoogle/api/annotations.proto\x1a\x1cgoogle/protobuf/struct.proto\x1a\x1fgoogle/protobuf/timestamp.proto\x1a\x18google/type/latlng.proto\"7\n\x0bPartitionId\x12\x12\n\nproject_id\x18\x02 \x01(\t\x12\x14\n\x0cnamespace_id\x18\x04 \x01(\t\"\xb7\x01\n\x03Key\x12\x36\n\x0cpartition_id\x18\x01 \x01(\x0b\x32 .google.datastore.v1.PartitionId\x12\x32\n\x04path\x18\x02 \x03(\x0b\x32$.google.datastore.v1.Key.PathElement\x1a\x44\n\x0bPathElement\x12\x0c\n\x04kind\x18\x01 \x01(\t\x12\x0c\n\x02id\x18\x02 \x01(\x03H\x00\x12\x0e\n\x04name\x18\x03 \x01(\tH\x00\x42\t\n\x07id_type\"8\n\nArrayValue\x12*\n\x06values\x18\x01 \x03(\x0b\x32\x1a.google.datastore.v1.Value\"\xf1\x03\n\x05Value\x12\x30\n\nnull_value\x18\x0b \x01(\x0e\x32\x1a.google.protobuf.NullValueH\x00\x12\x17\n\rboolean_value\x18\x01 \x01(\x08H\x00\x12\x17\n\rinteger_value\x18\x02 \x01(\x03H\x00\x12\x16\n\x0c\x64ouble_value\x18\x03 \x01(\x01H\x00\x12\x35\n\x0ftimestamp_value\x18\n \x01(\x0b\x32\x1a.google.protobuf.TimestampH\x00\x12-\n\tkey_value\x18\x05 \x01(\x0b\x32\x18.google.datastore.v1.KeyH\x00\x12\x16\n\x0cstring_value\x18\x11 \x01(\tH\x00\x12\x14\n\nblob_value\x18\x12 \x01(\x0cH\x00\x12.\n\x0fgeo_point_value\x18\x08 \x01(\x0b\x32\x13.google.type.LatLngH\x00\x12\x33\n\x0c\x65ntity_value\x18\x06 \x01(\x0b\x32\x1b.google.datastore.v1.EntityH\x00\x12\x36\n\x0b\x61rray_value\x18\t \x01(\x0b\x32\x1f.google.datastore.v1.ArrayValueH\x00\x12\x0f\n\x07meaning\x18\x0e \x01(\x05\x12\x1c\n\x14\x65xclude_from_indexes\x18\x13 \x01(\x08\x42\x0c\n\nvalue_type\"\xbf\x01\n\x06\x45ntity\x12%\n\x03key\x18\x01 \x01(\x0b\x32\x18.google.datastore.v1.Key\x12?\n\nproperties\x18\x03 \x03(\x0b\x32+.google.datastore.v1.Entity.PropertiesEntry\x1aM\n\x0fPropertiesEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12)\n\x05value\x18\x02 \x01(\x0b\x32\x1a.google.datastore.v1.Value:\x02\x38\x01\x42\x82\x01\n\x17\x63om.google.datastore.v1B\x0b\x45ntityProtoP\x01Z<google.golang.org/genproto/googleapis/datastore/v1;datastore\xaa\x02\x19Google.Cloud.Datastore.V1b\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_protobuf_dot_struct__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,google_dot_type_dot_latlng__pb2.DESCRIPTOR,])




_PARTITIONID = _descriptor.Descriptor(
  name='PartitionId',
  full_name='google.datastore.v1.PartitionId',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='project_id', full_name='google.datastore.v1.PartitionId.project_id', index=0,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='namespace_id', full_name='google.datastore.v1.PartitionId.namespace_id', index=1,
      number=4, type=9, cpp_type=9, label=1,
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
  serialized_start=176,
  serialized_end=231,
)


_KEY_PATHELEMENT = _descriptor.Descriptor(
  name='PathElement',
  full_name='google.datastore.v1.Key.PathElement',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='kind', full_name='google.datastore.v1.Key.PathElement.kind', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='id', full_name='google.datastore.v1.Key.PathElement.id', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='name', full_name='google.datastore.v1.Key.PathElement.name', index=2,
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
    _descriptor.OneofDescriptor(
      name='id_type', full_name='google.datastore.v1.Key.PathElement.id_type',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=349,
  serialized_end=417,
)

_KEY = _descriptor.Descriptor(
  name='Key',
  full_name='google.datastore.v1.Key',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='partition_id', full_name='google.datastore.v1.Key.partition_id', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='path', full_name='google.datastore.v1.Key.path', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_KEY_PATHELEMENT, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=234,
  serialized_end=417,
)


_ARRAYVALUE = _descriptor.Descriptor(
  name='ArrayValue',
  full_name='google.datastore.v1.ArrayValue',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='values', full_name='google.datastore.v1.ArrayValue.values', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=419,
  serialized_end=475,
)


_VALUE = _descriptor.Descriptor(
  name='Value',
  full_name='google.datastore.v1.Value',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='null_value', full_name='google.datastore.v1.Value.null_value', index=0,
      number=11, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='boolean_value', full_name='google.datastore.v1.Value.boolean_value', index=1,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='integer_value', full_name='google.datastore.v1.Value.integer_value', index=2,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='double_value', full_name='google.datastore.v1.Value.double_value', index=3,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='timestamp_value', full_name='google.datastore.v1.Value.timestamp_value', index=4,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='key_value', full_name='google.datastore.v1.Value.key_value', index=5,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='string_value', full_name='google.datastore.v1.Value.string_value', index=6,
      number=17, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='blob_value', full_name='google.datastore.v1.Value.blob_value', index=7,
      number=18, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='geo_point_value', full_name='google.datastore.v1.Value.geo_point_value', index=8,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='entity_value', full_name='google.datastore.v1.Value.entity_value', index=9,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='array_value', full_name='google.datastore.v1.Value.array_value', index=10,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='meaning', full_name='google.datastore.v1.Value.meaning', index=11,
      number=14, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exclude_from_indexes', full_name='google.datastore.v1.Value.exclude_from_indexes', index=12,
      number=19, type=8, cpp_type=7, label=1,
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
    _descriptor.OneofDescriptor(
      name='value_type', full_name='google.datastore.v1.Value.value_type',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=478,
  serialized_end=975,
)


_ENTITY_PROPERTIESENTRY = _descriptor.Descriptor(
  name='PropertiesEntry',
  full_name='google.datastore.v1.Entity.PropertiesEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='google.datastore.v1.Entity.PropertiesEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='google.datastore.v1.Entity.PropertiesEntry.value', index=1,
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
  options=_descriptor._ParseOptions(descriptor_pb2.MessageOptions(), _b('8\001')),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1092,
  serialized_end=1169,
)

_ENTITY = _descriptor.Descriptor(
  name='Entity',
  full_name='google.datastore.v1.Entity',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='google.datastore.v1.Entity.key', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='properties', full_name='google.datastore.v1.Entity.properties', index=1,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_ENTITY_PROPERTIESENTRY, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=978,
  serialized_end=1169,
)

_KEY_PATHELEMENT.containing_type = _KEY
_KEY_PATHELEMENT.oneofs_by_name['id_type'].fields.append(
  _KEY_PATHELEMENT.fields_by_name['id'])
_KEY_PATHELEMENT.fields_by_name['id'].containing_oneof = _KEY_PATHELEMENT.oneofs_by_name['id_type']
_KEY_PATHELEMENT.oneofs_by_name['id_type'].fields.append(
  _KEY_PATHELEMENT.fields_by_name['name'])
_KEY_PATHELEMENT.fields_by_name['name'].containing_oneof = _KEY_PATHELEMENT.oneofs_by_name['id_type']
_KEY.fields_by_name['partition_id'].message_type = _PARTITIONID
_KEY.fields_by_name['path'].message_type = _KEY_PATHELEMENT
_ARRAYVALUE.fields_by_name['values'].message_type = _VALUE
_VALUE.fields_by_name['null_value'].enum_type = google_dot_protobuf_dot_struct__pb2._NULLVALUE
_VALUE.fields_by_name['timestamp_value'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_VALUE.fields_by_name['key_value'].message_type = _KEY
_VALUE.fields_by_name['geo_point_value'].message_type = google_dot_type_dot_latlng__pb2._LATLNG
_VALUE.fields_by_name['entity_value'].message_type = _ENTITY
_VALUE.fields_by_name['array_value'].message_type = _ARRAYVALUE
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['null_value'])
_VALUE.fields_by_name['null_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['boolean_value'])
_VALUE.fields_by_name['boolean_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['integer_value'])
_VALUE.fields_by_name['integer_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['double_value'])
_VALUE.fields_by_name['double_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['timestamp_value'])
_VALUE.fields_by_name['timestamp_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['key_value'])
_VALUE.fields_by_name['key_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['string_value'])
_VALUE.fields_by_name['string_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['blob_value'])
_VALUE.fields_by_name['blob_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['geo_point_value'])
_VALUE.fields_by_name['geo_point_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['entity_value'])
_VALUE.fields_by_name['entity_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_VALUE.oneofs_by_name['value_type'].fields.append(
  _VALUE.fields_by_name['array_value'])
_VALUE.fields_by_name['array_value'].containing_oneof = _VALUE.oneofs_by_name['value_type']
_ENTITY_PROPERTIESENTRY.fields_by_name['value'].message_type = _VALUE
_ENTITY_PROPERTIESENTRY.containing_type = _ENTITY
_ENTITY.fields_by_name['key'].message_type = _KEY
_ENTITY.fields_by_name['properties'].message_type = _ENTITY_PROPERTIESENTRY
DESCRIPTOR.message_types_by_name['PartitionId'] = _PARTITIONID
DESCRIPTOR.message_types_by_name['Key'] = _KEY
DESCRIPTOR.message_types_by_name['ArrayValue'] = _ARRAYVALUE
DESCRIPTOR.message_types_by_name['Value'] = _VALUE
DESCRIPTOR.message_types_by_name['Entity'] = _ENTITY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PartitionId = _reflection.GeneratedProtocolMessageType('PartitionId', (_message.Message,), dict(
  DESCRIPTOR = _PARTITIONID,
  __module__ = 'google.datastore.v1.entity_pb2'
  # @@protoc_insertion_point(class_scope:google.datastore.v1.PartitionId)
  ))
_sym_db.RegisterMessage(PartitionId)

Key = _reflection.GeneratedProtocolMessageType('Key', (_message.Message,), dict(

  PathElement = _reflection.GeneratedProtocolMessageType('PathElement', (_message.Message,), dict(
    DESCRIPTOR = _KEY_PATHELEMENT,
    __module__ = 'google.datastore.v1.entity_pb2'
    # @@protoc_insertion_point(class_scope:google.datastore.v1.Key.PathElement)
    ))
  ,
  DESCRIPTOR = _KEY,
  __module__ = 'google.datastore.v1.entity_pb2'
  # @@protoc_insertion_point(class_scope:google.datastore.v1.Key)
  ))
_sym_db.RegisterMessage(Key)
_sym_db.RegisterMessage(Key.PathElement)

ArrayValue = _reflection.GeneratedProtocolMessageType('ArrayValue', (_message.Message,), dict(
  DESCRIPTOR = _ARRAYVALUE,
  __module__ = 'google.datastore.v1.entity_pb2'
  # @@protoc_insertion_point(class_scope:google.datastore.v1.ArrayValue)
  ))
_sym_db.RegisterMessage(ArrayValue)

Value = _reflection.GeneratedProtocolMessageType('Value', (_message.Message,), dict(
  DESCRIPTOR = _VALUE,
  __module__ = 'google.datastore.v1.entity_pb2'
  # @@protoc_insertion_point(class_scope:google.datastore.v1.Value)
  ))
_sym_db.RegisterMessage(Value)

Entity = _reflection.GeneratedProtocolMessageType('Entity', (_message.Message,), dict(

  PropertiesEntry = _reflection.GeneratedProtocolMessageType('PropertiesEntry', (_message.Message,), dict(
    DESCRIPTOR = _ENTITY_PROPERTIESENTRY,
    __module__ = 'google.datastore.v1.entity_pb2'
    # @@protoc_insertion_point(class_scope:google.datastore.v1.Entity.PropertiesEntry)
    ))
  ,
  DESCRIPTOR = _ENTITY,
  __module__ = 'google.datastore.v1.entity_pb2'
  # @@protoc_insertion_point(class_scope:google.datastore.v1.Entity)
  ))
_sym_db.RegisterMessage(Entity)
_sym_db.RegisterMessage(Entity.PropertiesEntry)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\027com.google.datastore.v1B\013EntityProtoP\001Z<google.golang.org/genproto/googleapis/datastore/v1;datastore\252\002\031Google.Cloud.Datastore.V1'))
_ENTITY_PROPERTIESENTRY.has_options = True
_ENTITY_PROPERTIESENTRY._options = _descriptor._ParseOptions(descriptor_pb2.MessageOptions(), _b('8\001'))
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
