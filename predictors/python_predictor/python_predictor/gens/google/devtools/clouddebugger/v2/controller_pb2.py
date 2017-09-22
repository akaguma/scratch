# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/devtools/clouddebugger/v2/controller.proto

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
from google.devtools.clouddebugger.v2 import data_pb2 as google_dot_devtools_dot_clouddebugger_dot_v2_dot_data__pb2
from google.protobuf import empty_pb2 as google_dot_protobuf_dot_empty__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/devtools/clouddebugger/v2/controller.proto',
  package='google.devtools.clouddebugger.v2',
  syntax='proto3',
  serialized_pb=_b('\n1google/devtools/clouddebugger/v2/controller.proto\x12 google.devtools.clouddebugger.v2\x1a\x1cgoogle/api/annotations.proto\x1a+google/devtools/clouddebugger/v2/data.proto\x1a\x1bgoogle/protobuf/empty.proto\"W\n\x17RegisterDebuggeeRequest\x12<\n\x08\x64\x65\x62uggee\x18\x01 \x01(\x0b\x32*.google.devtools.clouddebugger.v2.Debuggee\"X\n\x18RegisterDebuggeeResponse\x12<\n\x08\x64\x65\x62uggee\x18\x01 \x01(\x0b\x32*.google.devtools.clouddebugger.v2.Debuggee\"c\n\x1cListActiveBreakpointsRequest\x12\x13\n\x0b\x64\x65\x62uggee_id\x18\x01 \x01(\t\x12\x12\n\nwait_token\x18\x02 \x01(\t\x12\x1a\n\x12success_on_timeout\x18\x03 \x01(\x08\"\x91\x01\n\x1dListActiveBreakpointsResponse\x12\x41\n\x0b\x62reakpoints\x18\x01 \x03(\x0b\x32,.google.devtools.clouddebugger.v2.Breakpoint\x12\x17\n\x0fnext_wait_token\x18\x02 \x01(\t\x12\x14\n\x0cwait_expired\x18\x03 \x01(\x08\"v\n\x1dUpdateActiveBreakpointRequest\x12\x13\n\x0b\x64\x65\x62uggee_id\x18\x01 \x01(\t\x12@\n\nbreakpoint\x18\x02 \x01(\x0b\x32,.google.devtools.clouddebugger.v2.Breakpoint\" \n\x1eUpdateActiveBreakpointResponse2\x8b\x05\n\x0b\x43ontroller2\x12\xb7\x01\n\x10RegisterDebuggee\x12\x39.google.devtools.clouddebugger.v2.RegisterDebuggeeRequest\x1a:.google.devtools.clouddebugger.v2.RegisterDebuggeeResponse\",\x82\xd3\xe4\x93\x02&\"!/v2/controller/debuggees/register:\x01*\x12\xd4\x01\n\x15ListActiveBreakpoints\x12>.google.devtools.clouddebugger.v2.ListActiveBreakpointsRequest\x1a?.google.devtools.clouddebugger.v2.ListActiveBreakpointsResponse\":\x82\xd3\xe4\x93\x02\x34\x12\x32/v2/controller/debuggees/{debuggee_id}/breakpoints\x12\xea\x01\n\x16UpdateActiveBreakpoint\x12?.google.devtools.clouddebugger.v2.UpdateActiveBreakpointRequest\x1a@.google.devtools.clouddebugger.v2.UpdateActiveBreakpointResponse\"M\x82\xd3\xe4\x93\x02G\x1a\x42/v2/controller/debuggees/{debuggee_id}/breakpoints/{breakpoint.id}:\x01*B\xa3\x01\n$com.google.devtools.clouddebugger.v2B\x0f\x43ontrollerProtoP\x01ZMgoogle.golang.org/genproto/googleapis/devtools/clouddebugger/v2;clouddebugger\xaa\x02\x18Google.Cloud.Debugger.V2b\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_devtools_dot_clouddebugger_dot_v2_dot_data__pb2.DESCRIPTOR,google_dot_protobuf_dot_empty__pb2.DESCRIPTOR,])




_REGISTERDEBUGGEEREQUEST = _descriptor.Descriptor(
  name='RegisterDebuggeeRequest',
  full_name='google.devtools.clouddebugger.v2.RegisterDebuggeeRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='debuggee', full_name='google.devtools.clouddebugger.v2.RegisterDebuggeeRequest.debuggee', index=0,
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
  serialized_start=191,
  serialized_end=278,
)


_REGISTERDEBUGGEERESPONSE = _descriptor.Descriptor(
  name='RegisterDebuggeeResponse',
  full_name='google.devtools.clouddebugger.v2.RegisterDebuggeeResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='debuggee', full_name='google.devtools.clouddebugger.v2.RegisterDebuggeeResponse.debuggee', index=0,
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
  serialized_start=280,
  serialized_end=368,
)


_LISTACTIVEBREAKPOINTSREQUEST = _descriptor.Descriptor(
  name='ListActiveBreakpointsRequest',
  full_name='google.devtools.clouddebugger.v2.ListActiveBreakpointsRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='debuggee_id', full_name='google.devtools.clouddebugger.v2.ListActiveBreakpointsRequest.debuggee_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='wait_token', full_name='google.devtools.clouddebugger.v2.ListActiveBreakpointsRequest.wait_token', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='success_on_timeout', full_name='google.devtools.clouddebugger.v2.ListActiveBreakpointsRequest.success_on_timeout', index=2,
      number=3, type=8, cpp_type=7, label=1,
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
  serialized_start=370,
  serialized_end=469,
)


_LISTACTIVEBREAKPOINTSRESPONSE = _descriptor.Descriptor(
  name='ListActiveBreakpointsResponse',
  full_name='google.devtools.clouddebugger.v2.ListActiveBreakpointsResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='breakpoints', full_name='google.devtools.clouddebugger.v2.ListActiveBreakpointsResponse.breakpoints', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='next_wait_token', full_name='google.devtools.clouddebugger.v2.ListActiveBreakpointsResponse.next_wait_token', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='wait_expired', full_name='google.devtools.clouddebugger.v2.ListActiveBreakpointsResponse.wait_expired', index=2,
      number=3, type=8, cpp_type=7, label=1,
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
  serialized_start=472,
  serialized_end=617,
)


_UPDATEACTIVEBREAKPOINTREQUEST = _descriptor.Descriptor(
  name='UpdateActiveBreakpointRequest',
  full_name='google.devtools.clouddebugger.v2.UpdateActiveBreakpointRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='debuggee_id', full_name='google.devtools.clouddebugger.v2.UpdateActiveBreakpointRequest.debuggee_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='breakpoint', full_name='google.devtools.clouddebugger.v2.UpdateActiveBreakpointRequest.breakpoint', index=1,
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
  ],
  serialized_start=619,
  serialized_end=737,
)


_UPDATEACTIVEBREAKPOINTRESPONSE = _descriptor.Descriptor(
  name='UpdateActiveBreakpointResponse',
  full_name='google.devtools.clouddebugger.v2.UpdateActiveBreakpointResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
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
  serialized_start=739,
  serialized_end=771,
)

_REGISTERDEBUGGEEREQUEST.fields_by_name['debuggee'].message_type = google_dot_devtools_dot_clouddebugger_dot_v2_dot_data__pb2._DEBUGGEE
_REGISTERDEBUGGEERESPONSE.fields_by_name['debuggee'].message_type = google_dot_devtools_dot_clouddebugger_dot_v2_dot_data__pb2._DEBUGGEE
_LISTACTIVEBREAKPOINTSRESPONSE.fields_by_name['breakpoints'].message_type = google_dot_devtools_dot_clouddebugger_dot_v2_dot_data__pb2._BREAKPOINT
_UPDATEACTIVEBREAKPOINTREQUEST.fields_by_name['breakpoint'].message_type = google_dot_devtools_dot_clouddebugger_dot_v2_dot_data__pb2._BREAKPOINT
DESCRIPTOR.message_types_by_name['RegisterDebuggeeRequest'] = _REGISTERDEBUGGEEREQUEST
DESCRIPTOR.message_types_by_name['RegisterDebuggeeResponse'] = _REGISTERDEBUGGEERESPONSE
DESCRIPTOR.message_types_by_name['ListActiveBreakpointsRequest'] = _LISTACTIVEBREAKPOINTSREQUEST
DESCRIPTOR.message_types_by_name['ListActiveBreakpointsResponse'] = _LISTACTIVEBREAKPOINTSRESPONSE
DESCRIPTOR.message_types_by_name['UpdateActiveBreakpointRequest'] = _UPDATEACTIVEBREAKPOINTREQUEST
DESCRIPTOR.message_types_by_name['UpdateActiveBreakpointResponse'] = _UPDATEACTIVEBREAKPOINTRESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

RegisterDebuggeeRequest = _reflection.GeneratedProtocolMessageType('RegisterDebuggeeRequest', (_message.Message,), dict(
  DESCRIPTOR = _REGISTERDEBUGGEEREQUEST,
  __module__ = 'google.devtools.clouddebugger.v2.controller_pb2'
  # @@protoc_insertion_point(class_scope:google.devtools.clouddebugger.v2.RegisterDebuggeeRequest)
  ))
_sym_db.RegisterMessage(RegisterDebuggeeRequest)

RegisterDebuggeeResponse = _reflection.GeneratedProtocolMessageType('RegisterDebuggeeResponse', (_message.Message,), dict(
  DESCRIPTOR = _REGISTERDEBUGGEERESPONSE,
  __module__ = 'google.devtools.clouddebugger.v2.controller_pb2'
  # @@protoc_insertion_point(class_scope:google.devtools.clouddebugger.v2.RegisterDebuggeeResponse)
  ))
_sym_db.RegisterMessage(RegisterDebuggeeResponse)

ListActiveBreakpointsRequest = _reflection.GeneratedProtocolMessageType('ListActiveBreakpointsRequest', (_message.Message,), dict(
  DESCRIPTOR = _LISTACTIVEBREAKPOINTSREQUEST,
  __module__ = 'google.devtools.clouddebugger.v2.controller_pb2'
  # @@protoc_insertion_point(class_scope:google.devtools.clouddebugger.v2.ListActiveBreakpointsRequest)
  ))
_sym_db.RegisterMessage(ListActiveBreakpointsRequest)

ListActiveBreakpointsResponse = _reflection.GeneratedProtocolMessageType('ListActiveBreakpointsResponse', (_message.Message,), dict(
  DESCRIPTOR = _LISTACTIVEBREAKPOINTSRESPONSE,
  __module__ = 'google.devtools.clouddebugger.v2.controller_pb2'
  # @@protoc_insertion_point(class_scope:google.devtools.clouddebugger.v2.ListActiveBreakpointsResponse)
  ))
_sym_db.RegisterMessage(ListActiveBreakpointsResponse)

UpdateActiveBreakpointRequest = _reflection.GeneratedProtocolMessageType('UpdateActiveBreakpointRequest', (_message.Message,), dict(
  DESCRIPTOR = _UPDATEACTIVEBREAKPOINTREQUEST,
  __module__ = 'google.devtools.clouddebugger.v2.controller_pb2'
  # @@protoc_insertion_point(class_scope:google.devtools.clouddebugger.v2.UpdateActiveBreakpointRequest)
  ))
_sym_db.RegisterMessage(UpdateActiveBreakpointRequest)

UpdateActiveBreakpointResponse = _reflection.GeneratedProtocolMessageType('UpdateActiveBreakpointResponse', (_message.Message,), dict(
  DESCRIPTOR = _UPDATEACTIVEBREAKPOINTRESPONSE,
  __module__ = 'google.devtools.clouddebugger.v2.controller_pb2'
  # @@protoc_insertion_point(class_scope:google.devtools.clouddebugger.v2.UpdateActiveBreakpointResponse)
  ))
_sym_db.RegisterMessage(UpdateActiveBreakpointResponse)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n$com.google.devtools.clouddebugger.v2B\017ControllerProtoP\001ZMgoogle.golang.org/genproto/googleapis/devtools/clouddebugger/v2;clouddebugger\252\002\030Google.Cloud.Debugger.V2'))

_CONTROLLER2 = _descriptor.ServiceDescriptor(
  name='Controller2',
  full_name='google.devtools.clouddebugger.v2.Controller2',
  file=DESCRIPTOR,
  index=0,
  options=None,
  serialized_start=774,
  serialized_end=1425,
  methods=[
  _descriptor.MethodDescriptor(
    name='RegisterDebuggee',
    full_name='google.devtools.clouddebugger.v2.Controller2.RegisterDebuggee',
    index=0,
    containing_service=None,
    input_type=_REGISTERDEBUGGEEREQUEST,
    output_type=_REGISTERDEBUGGEERESPONSE,
    options=_descriptor._ParseOptions(descriptor_pb2.MethodOptions(), _b('\202\323\344\223\002&\"!/v2/controller/debuggees/register:\001*')),
  ),
  _descriptor.MethodDescriptor(
    name='ListActiveBreakpoints',
    full_name='google.devtools.clouddebugger.v2.Controller2.ListActiveBreakpoints',
    index=1,
    containing_service=None,
    input_type=_LISTACTIVEBREAKPOINTSREQUEST,
    output_type=_LISTACTIVEBREAKPOINTSRESPONSE,
    options=_descriptor._ParseOptions(descriptor_pb2.MethodOptions(), _b('\202\323\344\223\0024\0222/v2/controller/debuggees/{debuggee_id}/breakpoints')),
  ),
  _descriptor.MethodDescriptor(
    name='UpdateActiveBreakpoint',
    full_name='google.devtools.clouddebugger.v2.Controller2.UpdateActiveBreakpoint',
    index=2,
    containing_service=None,
    input_type=_UPDATEACTIVEBREAKPOINTREQUEST,
    output_type=_UPDATEACTIVEBREAKPOINTRESPONSE,
    options=_descriptor._ParseOptions(descriptor_pb2.MethodOptions(), _b('\202\323\344\223\002G\032B/v2/controller/debuggees/{debuggee_id}/breakpoints/{breakpoint.id}:\001*')),
  ),
])
_sym_db.RegisterServiceDescriptor(_CONTROLLER2)

DESCRIPTOR.services_by_name['Controller2'] = _CONTROLLER2

try:
  # THESE ELEMENTS WILL BE DEPRECATED.
  # Please use the generated *_pb2_grpc.py files instead.
  import grpc
  from grpc.beta import implementations as beta_implementations
  from grpc.beta import interfaces as beta_interfaces
  from grpc.framework.common import cardinality
  from grpc.framework.interfaces.face import utilities as face_utilities


  class Controller2Stub(object):
    """The Controller service provides the API for orchestrating a collection of
    debugger agents to perform debugging tasks. These agents are each attached
    to a process of an application which may include one or more replicas.

    The debugger agents register with the Controller to identify the application
    being debugged, the Debuggee. All agents that register with the same data,
    represent the same Debuggee, and are assigned the same `debuggee_id`.

    The debugger agents call the Controller to retrieve  the list of active
    Breakpoints. Agents with the same `debuggee_id` get the same breakpoints
    list. An agent that can fulfill the breakpoint request updates the
    Controller with the breakpoint result. The controller selects the first
    result received and discards the rest of the results.
    Agents that poll again for active breakpoints will no longer have
    the completed breakpoint in the list and should remove that breakpoint from
    their attached process.

    The Controller service does not provide a way to retrieve the results of
    a completed breakpoint. This functionality is available using the Debugger
    service.
    """

    def __init__(self, channel):
      """Constructor.

      Args:
        channel: A grpc.Channel.
      """
      self.RegisterDebuggee = channel.unary_unary(
          '/google.devtools.clouddebugger.v2.Controller2/RegisterDebuggee',
          request_serializer=RegisterDebuggeeRequest.SerializeToString,
          response_deserializer=RegisterDebuggeeResponse.FromString,
          )
      self.ListActiveBreakpoints = channel.unary_unary(
          '/google.devtools.clouddebugger.v2.Controller2/ListActiveBreakpoints',
          request_serializer=ListActiveBreakpointsRequest.SerializeToString,
          response_deserializer=ListActiveBreakpointsResponse.FromString,
          )
      self.UpdateActiveBreakpoint = channel.unary_unary(
          '/google.devtools.clouddebugger.v2.Controller2/UpdateActiveBreakpoint',
          request_serializer=UpdateActiveBreakpointRequest.SerializeToString,
          response_deserializer=UpdateActiveBreakpointResponse.FromString,
          )


  class Controller2Servicer(object):
    """The Controller service provides the API for orchestrating a collection of
    debugger agents to perform debugging tasks. These agents are each attached
    to a process of an application which may include one or more replicas.

    The debugger agents register with the Controller to identify the application
    being debugged, the Debuggee. All agents that register with the same data,
    represent the same Debuggee, and are assigned the same `debuggee_id`.

    The debugger agents call the Controller to retrieve  the list of active
    Breakpoints. Agents with the same `debuggee_id` get the same breakpoints
    list. An agent that can fulfill the breakpoint request updates the
    Controller with the breakpoint result. The controller selects the first
    result received and discards the rest of the results.
    Agents that poll again for active breakpoints will no longer have
    the completed breakpoint in the list and should remove that breakpoint from
    their attached process.

    The Controller service does not provide a way to retrieve the results of
    a completed breakpoint. This functionality is available using the Debugger
    service.
    """

    def RegisterDebuggee(self, request, context):
      """Registers the debuggee with the controller service.

      All agents attached to the same application must call this method with
      exactly the same request content to get back the same stable `debuggee_id`.
      Agents should call this method again whenever `google.rpc.Code.NOT_FOUND`
      is returned from any controller method.

      This protocol allows the controller service to disable debuggees, recover
      from data loss, or change the `debuggee_id` format. Agents must handle
      `debuggee_id` value changing upon re-registration.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def ListActiveBreakpoints(self, request, context):
      """Returns the list of all active breakpoints for the debuggee.

      The breakpoint specification (`location`, `condition`, and `expressions`
      fields) is semantically immutable, although the field values may
      change. For example, an agent may update the location line number
      to reflect the actual line where the breakpoint was set, but this
      doesn't change the breakpoint semantics.

      This means that an agent does not need to check if a breakpoint has changed
      when it encounters the same breakpoint on a successive call.
      Moreover, an agent should remember the breakpoints that are completed
      until the controller removes them from the active list to avoid
      setting those breakpoints again.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def UpdateActiveBreakpoint(self, request, context):
      """Updates the breakpoint state or mutable fields.
      The entire Breakpoint message must be sent back to the controller service.

      Updates to active breakpoint fields are only allowed if the new value
      does not change the breakpoint specification. Updates to the `location`,
      `condition` and `expressions` fields should not alter the breakpoint
      semantics. These may only make changes such as canonicalizing a value
      or snapping the location to the correct line of code.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')


  def add_Controller2Servicer_to_server(servicer, server):
    rpc_method_handlers = {
        'RegisterDebuggee': grpc.unary_unary_rpc_method_handler(
            servicer.RegisterDebuggee,
            request_deserializer=RegisterDebuggeeRequest.FromString,
            response_serializer=RegisterDebuggeeResponse.SerializeToString,
        ),
        'ListActiveBreakpoints': grpc.unary_unary_rpc_method_handler(
            servicer.ListActiveBreakpoints,
            request_deserializer=ListActiveBreakpointsRequest.FromString,
            response_serializer=ListActiveBreakpointsResponse.SerializeToString,
        ),
        'UpdateActiveBreakpoint': grpc.unary_unary_rpc_method_handler(
            servicer.UpdateActiveBreakpoint,
            request_deserializer=UpdateActiveBreakpointRequest.FromString,
            response_serializer=UpdateActiveBreakpointResponse.SerializeToString,
        ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
        'google.devtools.clouddebugger.v2.Controller2', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


  class BetaController2Servicer(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    """The Controller service provides the API for orchestrating a collection of
    debugger agents to perform debugging tasks. These agents are each attached
    to a process of an application which may include one or more replicas.

    The debugger agents register with the Controller to identify the application
    being debugged, the Debuggee. All agents that register with the same data,
    represent the same Debuggee, and are assigned the same `debuggee_id`.

    The debugger agents call the Controller to retrieve  the list of active
    Breakpoints. Agents with the same `debuggee_id` get the same breakpoints
    list. An agent that can fulfill the breakpoint request updates the
    Controller with the breakpoint result. The controller selects the first
    result received and discards the rest of the results.
    Agents that poll again for active breakpoints will no longer have
    the completed breakpoint in the list and should remove that breakpoint from
    their attached process.

    The Controller service does not provide a way to retrieve the results of
    a completed breakpoint. This functionality is available using the Debugger
    service.
    """
    def RegisterDebuggee(self, request, context):
      """Registers the debuggee with the controller service.

      All agents attached to the same application must call this method with
      exactly the same request content to get back the same stable `debuggee_id`.
      Agents should call this method again whenever `google.rpc.Code.NOT_FOUND`
      is returned from any controller method.

      This protocol allows the controller service to disable debuggees, recover
      from data loss, or change the `debuggee_id` format. Agents must handle
      `debuggee_id` value changing upon re-registration.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def ListActiveBreakpoints(self, request, context):
      """Returns the list of all active breakpoints for the debuggee.

      The breakpoint specification (`location`, `condition`, and `expressions`
      fields) is semantically immutable, although the field values may
      change. For example, an agent may update the location line number
      to reflect the actual line where the breakpoint was set, but this
      doesn't change the breakpoint semantics.

      This means that an agent does not need to check if a breakpoint has changed
      when it encounters the same breakpoint on a successive call.
      Moreover, an agent should remember the breakpoints that are completed
      until the controller removes them from the active list to avoid
      setting those breakpoints again.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def UpdateActiveBreakpoint(self, request, context):
      """Updates the breakpoint state or mutable fields.
      The entire Breakpoint message must be sent back to the controller service.

      Updates to active breakpoint fields are only allowed if the new value
      does not change the breakpoint specification. Updates to the `location`,
      `condition` and `expressions` fields should not alter the breakpoint
      semantics. These may only make changes such as canonicalizing a value
      or snapping the location to the correct line of code.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)


  class BetaController2Stub(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    """The Controller service provides the API for orchestrating a collection of
    debugger agents to perform debugging tasks. These agents are each attached
    to a process of an application which may include one or more replicas.

    The debugger agents register with the Controller to identify the application
    being debugged, the Debuggee. All agents that register with the same data,
    represent the same Debuggee, and are assigned the same `debuggee_id`.

    The debugger agents call the Controller to retrieve  the list of active
    Breakpoints. Agents with the same `debuggee_id` get the same breakpoints
    list. An agent that can fulfill the breakpoint request updates the
    Controller with the breakpoint result. The controller selects the first
    result received and discards the rest of the results.
    Agents that poll again for active breakpoints will no longer have
    the completed breakpoint in the list and should remove that breakpoint from
    their attached process.

    The Controller service does not provide a way to retrieve the results of
    a completed breakpoint. This functionality is available using the Debugger
    service.
    """
    def RegisterDebuggee(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Registers the debuggee with the controller service.

      All agents attached to the same application must call this method with
      exactly the same request content to get back the same stable `debuggee_id`.
      Agents should call this method again whenever `google.rpc.Code.NOT_FOUND`
      is returned from any controller method.

      This protocol allows the controller service to disable debuggees, recover
      from data loss, or change the `debuggee_id` format. Agents must handle
      `debuggee_id` value changing upon re-registration.
      """
      raise NotImplementedError()
    RegisterDebuggee.future = None
    def ListActiveBreakpoints(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Returns the list of all active breakpoints for the debuggee.

      The breakpoint specification (`location`, `condition`, and `expressions`
      fields) is semantically immutable, although the field values may
      change. For example, an agent may update the location line number
      to reflect the actual line where the breakpoint was set, but this
      doesn't change the breakpoint semantics.

      This means that an agent does not need to check if a breakpoint has changed
      when it encounters the same breakpoint on a successive call.
      Moreover, an agent should remember the breakpoints that are completed
      until the controller removes them from the active list to avoid
      setting those breakpoints again.
      """
      raise NotImplementedError()
    ListActiveBreakpoints.future = None
    def UpdateActiveBreakpoint(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Updates the breakpoint state or mutable fields.
      The entire Breakpoint message must be sent back to the controller service.

      Updates to active breakpoint fields are only allowed if the new value
      does not change the breakpoint specification. Updates to the `location`,
      `condition` and `expressions` fields should not alter the breakpoint
      semantics. These may only make changes such as canonicalizing a value
      or snapping the location to the correct line of code.
      """
      raise NotImplementedError()
    UpdateActiveBreakpoint.future = None


  def beta_create_Controller2_server(servicer, pool=None, pool_size=None, default_timeout=None, maximum_timeout=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_deserializers = {
      ('google.devtools.clouddebugger.v2.Controller2', 'ListActiveBreakpoints'): ListActiveBreakpointsRequest.FromString,
      ('google.devtools.clouddebugger.v2.Controller2', 'RegisterDebuggee'): RegisterDebuggeeRequest.FromString,
      ('google.devtools.clouddebugger.v2.Controller2', 'UpdateActiveBreakpoint'): UpdateActiveBreakpointRequest.FromString,
    }
    response_serializers = {
      ('google.devtools.clouddebugger.v2.Controller2', 'ListActiveBreakpoints'): ListActiveBreakpointsResponse.SerializeToString,
      ('google.devtools.clouddebugger.v2.Controller2', 'RegisterDebuggee'): RegisterDebuggeeResponse.SerializeToString,
      ('google.devtools.clouddebugger.v2.Controller2', 'UpdateActiveBreakpoint'): UpdateActiveBreakpointResponse.SerializeToString,
    }
    method_implementations = {
      ('google.devtools.clouddebugger.v2.Controller2', 'ListActiveBreakpoints'): face_utilities.unary_unary_inline(servicer.ListActiveBreakpoints),
      ('google.devtools.clouddebugger.v2.Controller2', 'RegisterDebuggee'): face_utilities.unary_unary_inline(servicer.RegisterDebuggee),
      ('google.devtools.clouddebugger.v2.Controller2', 'UpdateActiveBreakpoint'): face_utilities.unary_unary_inline(servicer.UpdateActiveBreakpoint),
    }
    server_options = beta_implementations.server_options(request_deserializers=request_deserializers, response_serializers=response_serializers, thread_pool=pool, thread_pool_size=pool_size, default_timeout=default_timeout, maximum_timeout=maximum_timeout)
    return beta_implementations.server(method_implementations, options=server_options)


  def beta_create_Controller2_stub(channel, host=None, metadata_transformer=None, pool=None, pool_size=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_serializers = {
      ('google.devtools.clouddebugger.v2.Controller2', 'ListActiveBreakpoints'): ListActiveBreakpointsRequest.SerializeToString,
      ('google.devtools.clouddebugger.v2.Controller2', 'RegisterDebuggee'): RegisterDebuggeeRequest.SerializeToString,
      ('google.devtools.clouddebugger.v2.Controller2', 'UpdateActiveBreakpoint'): UpdateActiveBreakpointRequest.SerializeToString,
    }
    response_deserializers = {
      ('google.devtools.clouddebugger.v2.Controller2', 'ListActiveBreakpoints'): ListActiveBreakpointsResponse.FromString,
      ('google.devtools.clouddebugger.v2.Controller2', 'RegisterDebuggee'): RegisterDebuggeeResponse.FromString,
      ('google.devtools.clouddebugger.v2.Controller2', 'UpdateActiveBreakpoint'): UpdateActiveBreakpointResponse.FromString,
    }
    cardinalities = {
      'ListActiveBreakpoints': cardinality.Cardinality.UNARY_UNARY,
      'RegisterDebuggee': cardinality.Cardinality.UNARY_UNARY,
      'UpdateActiveBreakpoint': cardinality.Cardinality.UNARY_UNARY,
    }
    stub_options = beta_implementations.stub_options(host=host, metadata_transformer=metadata_transformer, request_serializers=request_serializers, response_deserializers=response_deserializers, thread_pool=pool, thread_pool_size=pool_size)
    return beta_implementations.dynamic_stub(channel, 'google.devtools.clouddebugger.v2.Controller2', cardinalities, options=stub_options)
except ImportError:
  pass
# @@protoc_insertion_point(module_scope)
