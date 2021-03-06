# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from google.devtools.remoteexecution.v1test import remote_execution_pb2 as google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2
from google.longrunning import operations_pb2 as google_dot_longrunning_dot_operations__pb2


class ExecutionStub(object):
  """The Remote Execution API is used to execute an
  [Action][google.devtools.remoteexecution.v1test.Action] on the remote
  workers.

  As with other services in the Remote Execution API, any call may return an
  error with a [RetryInfo][google.rpc.RetryInfo] error detail providing
  information about when the client should retry the request; clients SHOULD
  respect the information provided.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.Execute = channel.unary_unary(
        '/google.devtools.remoteexecution.v1test.Execution/Execute',
        request_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.ExecuteRequest.SerializeToString,
        response_deserializer=google_dot_longrunning_dot_operations__pb2.Operation.FromString,
        )


class ExecutionServicer(object):
  """The Remote Execution API is used to execute an
  [Action][google.devtools.remoteexecution.v1test.Action] on the remote
  workers.

  As with other services in the Remote Execution API, any call may return an
  error with a [RetryInfo][google.rpc.RetryInfo] error detail providing
  information about when the client should retry the request; clients SHOULD
  respect the information provided.
  """

  def Execute(self, request, context):
    """Execute an action remotely.

    In order to execute an action, the client must first upload all of the
    inputs, as well as the
    [Command][google.devtools.remoteexecution.v1test.Command] to run, into the
    [ContentAddressableStorage][google.devtools.remoteexecution.v1test.ContentAddressableStorage].
    It then calls `Execute` with an
    [Action][google.devtools.remoteexecution.v1test.Action] referring to them.
    The server will run the action and eventually return the result.

    The input `Action`'s fields MUST meet the various canonicalization
    requirements specified in the documentation for their types so that it has
    the same digest as other logically equivalent `Action`s. The server MAY
    enforce the requirements and return errors if a non-canonical input is
    received. It MAY also proceed without verifying some or all of the
    requirements, such as for performance reasons. If the server does not
    verify the requirement, then it will treat the `Action` as distinct from
    another logically equivalent action if they hash differently.

    Returns a [google.longrunning.Operation][google.longrunning.Operation]
    describing the resulting execution, with eventual `response`
    [ExecuteResponse][google.devtools.remoteexecution.v1test.ExecuteResponse].
    The `metadata` on the operation is of type
    [ExecuteOperationMetadata][google.devtools.remoteexecution.v1test.ExecuteOperationMetadata].

    To query the operation, you can use the
    [Operations API][google.longrunning.Operations.GetOperation]. If you wish
    to allow the server to stream operations updates, rather than requiring
    client polling, you can use the
    [Watcher API][google.watcher.v1.Watcher.Watch] with the Operation's `name`
    as the `target`.

    When using the Watcher API, the initial `data` will be the `Operation` at
    the time of the request. Updates will be provided periodically by the
    server until the `Operation` completes, at which point the response message
    will (assuming no error) be at `data.response`.

    The server NEED NOT implement other methods or functionality of the
    Operation and Watcher APIs.

    Errors discovered during creation of the `Operation` will be reported
    as gRPC Status errors, while errors that occurred while running the
    action will be reported in the `status` field of the `ExecuteResponse`. The
    server MUST NOT set the `error` field of the `Operation` proto.
    The possible errors include:
    * `INVALID_ARGUMENT`: One or more arguments are invalid.
    * `FAILED_PRECONDITION`: One or more errors occurred in setting up the
    action requested, such as a missing input or command or no worker being
    available. The client may be able to fix the errors and retry.
    * `RESOURCE_EXHAUSTED`: There is insufficient quota of some resource to run
    the action.
    * `UNAVAILABLE`: Due to a transient condition, such as all workers being
    occupied (and the server does not support a queue), the action could not
    be started. The client should retry.
    * `INTERNAL`: An internal error occurred in the execution engine or the
    worker.
    * `DEADLINE_EXCEEDED`: The execution timed out.

    In the case of a missing input or command, the server SHOULD additionally
    send a [PreconditionFailure][google.rpc.PreconditionFailure] error detail
    where, for each requested blob not present in the CAS, there is a
    `Violation` with a `type` of `MISSING` and a `subject` of
    `"blobs/{hash}/{size}"` indicating the digest of the missing blob.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_ExecutionServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'Execute': grpc.unary_unary_rpc_method_handler(
          servicer.Execute,
          request_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.ExecuteRequest.FromString,
          response_serializer=google_dot_longrunning_dot_operations__pb2.Operation.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'google.devtools.remoteexecution.v1test.Execution', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))


class ActionCacheStub(object):
  """The action cache API is used to query whether a given action has already been
  performed and, if so, retrieve its result. Unlike the
  [ContentAddressableStorage][google.devtools.remoteexecution.v1test.ContentAddressableStorage],
  which addresses blobs by their own content, the action cache addresses the
  [ActionResult][google.devtools.remoteexecution.v1test.ActionResult] by a
  digest of the encoded [Action][google.devtools.remoteexecution.v1test.Action]
  which produced them.

  The lifetime of entries in the action cache is implementation-specific, but
  the server SHOULD assume that more recently used entries are more likely to
  be used again. Additionally, action cache implementations SHOULD ensure that
  any blobs referenced in the
  [ContentAddressableStorage][google.devtools.remoteexecution.v1test.ContentAddressableStorage]
  are still valid when returning a result.

  As with other services in the Remote Execution API, any call may return an
  error with a [RetryInfo][google.rpc.RetryInfo] error detail providing
  information about when the client should retry the request; clients SHOULD
  respect the information provided.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.GetActionResult = channel.unary_unary(
        '/google.devtools.remoteexecution.v1test.ActionCache/GetActionResult',
        request_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.GetActionResultRequest.SerializeToString,
        response_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.ActionResult.FromString,
        )
    self.UpdateActionResult = channel.unary_unary(
        '/google.devtools.remoteexecution.v1test.ActionCache/UpdateActionResult',
        request_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.UpdateActionResultRequest.SerializeToString,
        response_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.ActionResult.FromString,
        )


class ActionCacheServicer(object):
  """The action cache API is used to query whether a given action has already been
  performed and, if so, retrieve its result. Unlike the
  [ContentAddressableStorage][google.devtools.remoteexecution.v1test.ContentAddressableStorage],
  which addresses blobs by their own content, the action cache addresses the
  [ActionResult][google.devtools.remoteexecution.v1test.ActionResult] by a
  digest of the encoded [Action][google.devtools.remoteexecution.v1test.Action]
  which produced them.

  The lifetime of entries in the action cache is implementation-specific, but
  the server SHOULD assume that more recently used entries are more likely to
  be used again. Additionally, action cache implementations SHOULD ensure that
  any blobs referenced in the
  [ContentAddressableStorage][google.devtools.remoteexecution.v1test.ContentAddressableStorage]
  are still valid when returning a result.

  As with other services in the Remote Execution API, any call may return an
  error with a [RetryInfo][google.rpc.RetryInfo] error detail providing
  information about when the client should retry the request; clients SHOULD
  respect the information provided.
  """

  def GetActionResult(self, request, context):
    """Retrieve a cached execution result.

    Errors:
    * `NOT_FOUND`: The requested `ActionResult` is not in the cache.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def UpdateActionResult(self, request, context):
    """Upload a new execution result.

    This method is intended for servers which implement the distributed cache
    independently of the
    [Execution][google.devtools.remoteexecution.v1test.Execution] API. As a
    result, it is OPTIONAL for servers to implement.

    Errors:
    * `NOT_IMPLEMENTED`: This method is not supported by the server.
    * `RESOURCE_EXHAUSTED`: There is insufficient storage space to add the
    entry to the cache.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_ActionCacheServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'GetActionResult': grpc.unary_unary_rpc_method_handler(
          servicer.GetActionResult,
          request_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.GetActionResultRequest.FromString,
          response_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.ActionResult.SerializeToString,
      ),
      'UpdateActionResult': grpc.unary_unary_rpc_method_handler(
          servicer.UpdateActionResult,
          request_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.UpdateActionResultRequest.FromString,
          response_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.ActionResult.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'google.devtools.remoteexecution.v1test.ActionCache', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))


class ContentAddressableStorageStub(object):
  """The CAS (content-addressable storage) is used to store the inputs to and
  outputs from the execution service. Each piece of content is addressed by the
  digest of its binary data.

  Most of the binary data stored in the CAS is opaque to the execution engine,
  and is only used as a communication medium. In order to build an
  [Action][google.devtools.remoteexecution.v1test.Action],
  however, the client will need to also upload the
  [Command][google.devtools.remoteexecution.v1test.Command] and input root
  [Directory][google.devtools.remoteexecution.v1test.Directory] for the Action.
  The Command and Directory messages must be marshalled to wire format and then
  uploaded under the hash as with any other piece of content. In practice, the
  input root directory is likely to refer to other Directories in its
  hierarchy, which must also each be uploaded on their own.

  For small file uploads the client should group them together and call
  [BatchUpdateBlobs][google.devtools.remoteexecution.v1test.ContentAddressableStorage.BatchUpdateBlobs]
  on chunks of no more than 10 MiB. For large uploads, the client must use the
  [Write method][google.bytestream.ByteStream.Write] of the ByteStream API. The
  `resource_name` is `{instance_name}/uploads/{uuid}/blobs/{hash}/{size}`,
  where `instance_name` is as described in the next paragraph, `uuid` is a
  version 4 UUID generated by the client, and `hash` and `size` are the
  [Digest][google.devtools.remoteexecution.v1test.Digest] of the blob. The
  `uuid` is used only to avoid collisions when multiple clients try to upload
  the same file (or the same client tries to upload the file multiple times at
  once on different threads), so the client MAY reuse the `uuid` for uploading
  different blobs. The `resource_name` may optionally have a trailing filename
  (or other metadata) for a client to use if it is storing URLs, as in
  `{instance}/uploads/{uuid}/blobs/{hash}/{size}/foo/bar/baz.cc`. Anything
  after the `size` is ignored.

  A single server MAY support multiple instances of the execution system, each
  with their own workers, storage, cache, etc. The exact relationship between
  instances is up to the server. If the server does, then the `instance_name`
  is an identifier, possibly containing multiple path segments, used to
  distinguish between the various instances on the server, in a manner defined
  by the server. For servers which do not support multiple instances, then the
  `instance_name` is the empty path and the leading slash is omitted, so that
  the `resource_name` becomes `uploads/{uuid}/blobs/{hash}/{size}`.

  When attempting an upload, if another client has already completed the upload
  (which may occur in the middle of a single upload if another client uploads
  the same blob concurrently), the request will terminate immediately with
  a response whose `committed_size` is the full size of the uploaded file
  (regardless of how much data was transmitted by the client). If the client
  completes the upload but the
  [Digest][google.devtools.remoteexecution.v1test.Digest] does not match, an
  `INVALID_ARGUMENT` error will be returned. In either case, the client should
  not attempt to retry the upload.

  For downloading blobs, the client must use the
  [Read method][google.bytestream.ByteStream.Read] of the ByteStream API, with
  a `resource_name` of `"{instance_name}/blobs/{hash}/{size}"`, where
  `instance_name` is the instance name (see above), and `hash` and `size` are
  the [Digest][google.devtools.remoteexecution.v1test.Digest] of the blob.

  The lifetime of entries in the CAS is implementation specific, but it SHOULD
  be long enough to allow for newly-added and recently looked-up entries to be
  used in subsequent calls (e.g. to
  [Execute][google.devtools.remoteexecution.v1test.Execution.Execute]).

  As with other services in the Remote Execution API, any call may return an
  error with a [RetryInfo][google.rpc.RetryInfo] error detail providing
  information about when the client should retry the request; clients SHOULD
  respect the information provided.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.FindMissingBlobs = channel.unary_unary(
        '/google.devtools.remoteexecution.v1test.ContentAddressableStorage/FindMissingBlobs',
        request_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.FindMissingBlobsRequest.SerializeToString,
        response_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.FindMissingBlobsResponse.FromString,
        )
    self.BatchUpdateBlobs = channel.unary_unary(
        '/google.devtools.remoteexecution.v1test.ContentAddressableStorage/BatchUpdateBlobs',
        request_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.BatchUpdateBlobsRequest.SerializeToString,
        response_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.BatchUpdateBlobsResponse.FromString,
        )
    self.GetTree = channel.unary_unary(
        '/google.devtools.remoteexecution.v1test.ContentAddressableStorage/GetTree',
        request_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.GetTreeRequest.SerializeToString,
        response_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.GetTreeResponse.FromString,
        )


class ContentAddressableStorageServicer(object):
  """The CAS (content-addressable storage) is used to store the inputs to and
  outputs from the execution service. Each piece of content is addressed by the
  digest of its binary data.

  Most of the binary data stored in the CAS is opaque to the execution engine,
  and is only used as a communication medium. In order to build an
  [Action][google.devtools.remoteexecution.v1test.Action],
  however, the client will need to also upload the
  [Command][google.devtools.remoteexecution.v1test.Command] and input root
  [Directory][google.devtools.remoteexecution.v1test.Directory] for the Action.
  The Command and Directory messages must be marshalled to wire format and then
  uploaded under the hash as with any other piece of content. In practice, the
  input root directory is likely to refer to other Directories in its
  hierarchy, which must also each be uploaded on their own.

  For small file uploads the client should group them together and call
  [BatchUpdateBlobs][google.devtools.remoteexecution.v1test.ContentAddressableStorage.BatchUpdateBlobs]
  on chunks of no more than 10 MiB. For large uploads, the client must use the
  [Write method][google.bytestream.ByteStream.Write] of the ByteStream API. The
  `resource_name` is `{instance_name}/uploads/{uuid}/blobs/{hash}/{size}`,
  where `instance_name` is as described in the next paragraph, `uuid` is a
  version 4 UUID generated by the client, and `hash` and `size` are the
  [Digest][google.devtools.remoteexecution.v1test.Digest] of the blob. The
  `uuid` is used only to avoid collisions when multiple clients try to upload
  the same file (or the same client tries to upload the file multiple times at
  once on different threads), so the client MAY reuse the `uuid` for uploading
  different blobs. The `resource_name` may optionally have a trailing filename
  (or other metadata) for a client to use if it is storing URLs, as in
  `{instance}/uploads/{uuid}/blobs/{hash}/{size}/foo/bar/baz.cc`. Anything
  after the `size` is ignored.

  A single server MAY support multiple instances of the execution system, each
  with their own workers, storage, cache, etc. The exact relationship between
  instances is up to the server. If the server does, then the `instance_name`
  is an identifier, possibly containing multiple path segments, used to
  distinguish between the various instances on the server, in a manner defined
  by the server. For servers which do not support multiple instances, then the
  `instance_name` is the empty path and the leading slash is omitted, so that
  the `resource_name` becomes `uploads/{uuid}/blobs/{hash}/{size}`.

  When attempting an upload, if another client has already completed the upload
  (which may occur in the middle of a single upload if another client uploads
  the same blob concurrently), the request will terminate immediately with
  a response whose `committed_size` is the full size of the uploaded file
  (regardless of how much data was transmitted by the client). If the client
  completes the upload but the
  [Digest][google.devtools.remoteexecution.v1test.Digest] does not match, an
  `INVALID_ARGUMENT` error will be returned. In either case, the client should
  not attempt to retry the upload.

  For downloading blobs, the client must use the
  [Read method][google.bytestream.ByteStream.Read] of the ByteStream API, with
  a `resource_name` of `"{instance_name}/blobs/{hash}/{size}"`, where
  `instance_name` is the instance name (see above), and `hash` and `size` are
  the [Digest][google.devtools.remoteexecution.v1test.Digest] of the blob.

  The lifetime of entries in the CAS is implementation specific, but it SHOULD
  be long enough to allow for newly-added and recently looked-up entries to be
  used in subsequent calls (e.g. to
  [Execute][google.devtools.remoteexecution.v1test.Execution.Execute]).

  As with other services in the Remote Execution API, any call may return an
  error with a [RetryInfo][google.rpc.RetryInfo] error detail providing
  information about when the client should retry the request; clients SHOULD
  respect the information provided.
  """

  def FindMissingBlobs(self, request, context):
    """Determine if blobs are present in the CAS.

    Clients can use this API before uploading blobs to determine which ones are
    already present in the CAS and do not need to be uploaded again.

    There are no method-specific errors.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def BatchUpdateBlobs(self, request, context):
    """Upload many blobs at once.

    The client MUST NOT upload blobs with a combined total size of more than 10
    MiB using this API. Such requests should either be split into smaller
    chunks or uploaded using the
    [ByteStream API][google.bytestream.ByteStream], as appropriate.

    This request is equivalent to calling [UpdateBlob][] on each individual
    blob, in parallel. The requests may succeed or fail independently.

    Errors:
    * `INVALID_ARGUMENT`: The client attempted to upload more than 10 MiB of
    data.

    Individual requests may return the following errors, additionally:
    * `RESOURCE_EXHAUSTED`: There is insufficient disk quota to store the blob.
    * `INVALID_ARGUMENT`: The
    [Digest][google.devtools.remoteexecution.v1test.Digest] does not match the
    provided data.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def GetTree(self, request, context):
    """DEPRECATED: This method is deprecated and should no longer be used.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_ContentAddressableStorageServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'FindMissingBlobs': grpc.unary_unary_rpc_method_handler(
          servicer.FindMissingBlobs,
          request_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.FindMissingBlobsRequest.FromString,
          response_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.FindMissingBlobsResponse.SerializeToString,
      ),
      'BatchUpdateBlobs': grpc.unary_unary_rpc_method_handler(
          servicer.BatchUpdateBlobs,
          request_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.BatchUpdateBlobsRequest.FromString,
          response_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.BatchUpdateBlobsResponse.SerializeToString,
      ),
      'GetTree': grpc.unary_unary_rpc_method_handler(
          servicer.GetTree,
          request_deserializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.GetTreeRequest.FromString,
          response_serializer=google_dot_devtools_dot_remoteexecution_dot_v1test_dot_remote__execution__pb2.GetTreeResponse.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'google.devtools.remoteexecution.v1test.ContentAddressableStorage', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
