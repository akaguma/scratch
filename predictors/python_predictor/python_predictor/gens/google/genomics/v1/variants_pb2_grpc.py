# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from google.genomics.v1 import variants_pb2 as google_dot_genomics_dot_v1_dot_variants__pb2
from google.longrunning import operations_pb2 as google_dot_longrunning_dot_operations__pb2
from google.protobuf import empty_pb2 as google_dot_protobuf_dot_empty__pb2


class StreamingVariantServiceStub(object):
  # missing associated documentation comment in .proto file
  pass

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.StreamVariants = channel.unary_stream(
        '/google.genomics.v1.StreamingVariantService/StreamVariants',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.StreamVariantsRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.StreamVariantsResponse.FromString,
        )


class StreamingVariantServiceServicer(object):
  # missing associated documentation comment in .proto file
  pass

  def StreamVariants(self, request, context):
    """Returns a stream of all the variants matching the search request, ordered
    by reference name, position, and ID.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_StreamingVariantServiceServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'StreamVariants': grpc.unary_stream_rpc_method_handler(
          servicer.StreamVariants,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.StreamVariantsRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.StreamVariantsResponse.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'google.genomics.v1.StreamingVariantService', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))


class VariantServiceV1Stub(object):
  # missing associated documentation comment in .proto file
  pass

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.ImportVariants = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/ImportVariants',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.ImportVariantsRequest.SerializeToString,
        response_deserializer=google_dot_longrunning_dot_operations__pb2.Operation.FromString,
        )
    self.CreateVariantSet = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/CreateVariantSet',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.CreateVariantSetRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.VariantSet.FromString,
        )
    self.ExportVariantSet = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/ExportVariantSet',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.ExportVariantSetRequest.SerializeToString,
        response_deserializer=google_dot_longrunning_dot_operations__pb2.Operation.FromString,
        )
    self.GetVariantSet = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/GetVariantSet',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.GetVariantSetRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.VariantSet.FromString,
        )
    self.SearchVariantSets = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/SearchVariantSets',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchVariantSetsRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchVariantSetsResponse.FromString,
        )
    self.DeleteVariantSet = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/DeleteVariantSet',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.DeleteVariantSetRequest.SerializeToString,
        response_deserializer=google_dot_protobuf_dot_empty__pb2.Empty.FromString,
        )
    self.UpdateVariantSet = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/UpdateVariantSet',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.UpdateVariantSetRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.VariantSet.FromString,
        )
    self.SearchVariants = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/SearchVariants',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchVariantsRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchVariantsResponse.FromString,
        )
    self.CreateVariant = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/CreateVariant',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.CreateVariantRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.Variant.FromString,
        )
    self.UpdateVariant = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/UpdateVariant',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.UpdateVariantRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.Variant.FromString,
        )
    self.DeleteVariant = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/DeleteVariant',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.DeleteVariantRequest.SerializeToString,
        response_deserializer=google_dot_protobuf_dot_empty__pb2.Empty.FromString,
        )
    self.GetVariant = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/GetVariant',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.GetVariantRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.Variant.FromString,
        )
    self.MergeVariants = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/MergeVariants',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.MergeVariantsRequest.SerializeToString,
        response_deserializer=google_dot_protobuf_dot_empty__pb2.Empty.FromString,
        )
    self.SearchCallSets = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/SearchCallSets',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchCallSetsRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchCallSetsResponse.FromString,
        )
    self.CreateCallSet = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/CreateCallSet',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.CreateCallSetRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.CallSet.FromString,
        )
    self.UpdateCallSet = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/UpdateCallSet',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.UpdateCallSetRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.CallSet.FromString,
        )
    self.DeleteCallSet = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/DeleteCallSet',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.DeleteCallSetRequest.SerializeToString,
        response_deserializer=google_dot_protobuf_dot_empty__pb2.Empty.FromString,
        )
    self.GetCallSet = channel.unary_unary(
        '/google.genomics.v1.VariantServiceV1/GetCallSet',
        request_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.GetCallSetRequest.SerializeToString,
        response_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.CallSet.FromString,
        )


class VariantServiceV1Servicer(object):
  # missing associated documentation comment in .proto file
  pass

  def ImportVariants(self, request, context):
    """Creates variant data by asynchronously importing the provided information.

    For the definitions of variant sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)

    The variants for import will be merged with any existing variant that
    matches its reference sequence, start, end, reference bases, and
    alternative bases. If no such variant exists, a new one will be created.

    When variants are merged, the call information from the new variant
    is added to the existing variant, and Variant info fields are merged
    as specified in
    [infoMergeConfig][google.genomics.v1.ImportVariantsRequest.info_merge_config].
    As a special case, for single-sample VCF files, QUAL and FILTER fields will
    be moved to the call level; these are sometimes interpreted in a
    call-specific context.
    Imported VCF headers are appended to the metadata already in a variant set.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def CreateVariantSet(self, request, context):
    """Creates a new variant set.

    For the definitions of variant sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)

    The provided variant set must have a valid `datasetId` set - all other
    fields are optional. Note that the `id` field will be ignored, as this is
    assigned by the server.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def ExportVariantSet(self, request, context):
    """Exports variant set data to an external destination.

    For the definitions of variant sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def GetVariantSet(self, request, context):
    """Gets a variant set by ID.

    For the definitions of variant sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def SearchVariantSets(self, request, context):
    """Returns a list of all variant sets matching search criteria.

    For the definitions of variant sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)

    Implements
    [GlobalAllianceApi.searchVariantSets](https://github.com/ga4gh/schemas/blob/v0.5.1/src/main/resources/avro/variantmethods.avdl#L49).
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def DeleteVariantSet(self, request, context):
    """Deletes a variant set including all variants, call sets, and calls within.
    This is not reversible.

    For the definitions of variant sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def UpdateVariantSet(self, request, context):
    """Updates a variant set using patch semantics.

    For the definitions of variant sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def SearchVariants(self, request, context):
    """Gets a list of variants matching the criteria.

    For the definitions of variants and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)

    Implements
    [GlobalAllianceApi.searchVariants](https://github.com/ga4gh/schemas/blob/v0.5.1/src/main/resources/avro/variantmethods.avdl#L126).
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def CreateVariant(self, request, context):
    """Creates a new variant.

    For the definitions of variants and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def UpdateVariant(self, request, context):
    """Updates a variant.

    For the definitions of variants and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)

    This method supports patch semantics. Returns the modified variant without
    its calls.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def DeleteVariant(self, request, context):
    """Deletes a variant.

    For the definitions of variants and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def GetVariant(self, request, context):
    """Gets a variant by ID.

    For the definitions of variants and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def MergeVariants(self, request, context):
    """Merges the given variants with existing variants.

    For the definitions of variants and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)

    Each variant will be
    merged with an existing variant that matches its reference sequence,
    start, end, reference bases, and alternative bases. If no such variant
    exists, a new one will be created.

    When variants are merged, the call information from the new variant
    is added to the existing variant. Variant info fields are merged as
    specified in the
    [infoMergeConfig][google.genomics.v1.MergeVariantsRequest.info_merge_config]
    field of the MergeVariantsRequest.

    Please exercise caution when using this method!  It is easy to introduce
    mistakes in existing variants and difficult to back out of them.  For
    example,
    suppose you were trying to merge a new variant with an existing one and
    both
    variants contain calls that belong to callsets with the same callset ID.

    // Existing variant - irrelevant fields trimmed for clarity
    {
    "variantSetId": "10473108253681171589",
    "referenceName": "1",
    "start": "10582",
    "referenceBases": "G",
    "alternateBases": [
    "A"
    ],
    "calls": [
    {
    "callSetId": "10473108253681171589-0",
    "callSetName": "CALLSET0",
    "genotype": [
    0,
    1
    ],
    }
    ]
    }

    // New variant with conflicting call information
    {
    "variantSetId": "10473108253681171589",
    "referenceName": "1",
    "start": "10582",
    "referenceBases": "G",
    "alternateBases": [
    "A"
    ],
    "calls": [
    {
    "callSetId": "10473108253681171589-0",
    "callSetName": "CALLSET0",
    "genotype": [
    1,
    1
    ],
    }
    ]
    }

    The resulting merged variant would overwrite the existing calls with those
    from the new variant:

    {
    "variantSetId": "10473108253681171589",
    "referenceName": "1",
    "start": "10582",
    "referenceBases": "G",
    "alternateBases": [
    "A"
    ],
    "calls": [
    {
    "callSetId": "10473108253681171589-0",
    "callSetName": "CALLSET0",
    "genotype": [
    1,
    1
    ],
    }
    ]
    }

    This may be the desired outcome, but it is up to the user to determine if
    if that is indeed the case.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def SearchCallSets(self, request, context):
    """Gets a list of call sets matching the criteria.

    For the definitions of call sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)

    Implements
    [GlobalAllianceApi.searchCallSets](https://github.com/ga4gh/schemas/blob/v0.5.1/src/main/resources/avro/variantmethods.avdl#L178).
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def CreateCallSet(self, request, context):
    """Creates a new call set.

    For the definitions of call sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def UpdateCallSet(self, request, context):
    """Updates a call set.

    For the definitions of call sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)

    This method supports patch semantics.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def DeleteCallSet(self, request, context):
    """Deletes a call set.

    For the definitions of call sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def GetCallSet(self, request, context):
    """Gets a call set by ID.

    For the definitions of call sets and other genomics resources, see
    [Fundamentals of Google
    Genomics](https://cloud.google.com/genomics/fundamentals-of-google-genomics)
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_VariantServiceV1Servicer_to_server(servicer, server):
  rpc_method_handlers = {
      'ImportVariants': grpc.unary_unary_rpc_method_handler(
          servicer.ImportVariants,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.ImportVariantsRequest.FromString,
          response_serializer=google_dot_longrunning_dot_operations__pb2.Operation.SerializeToString,
      ),
      'CreateVariantSet': grpc.unary_unary_rpc_method_handler(
          servicer.CreateVariantSet,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.CreateVariantSetRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.VariantSet.SerializeToString,
      ),
      'ExportVariantSet': grpc.unary_unary_rpc_method_handler(
          servicer.ExportVariantSet,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.ExportVariantSetRequest.FromString,
          response_serializer=google_dot_longrunning_dot_operations__pb2.Operation.SerializeToString,
      ),
      'GetVariantSet': grpc.unary_unary_rpc_method_handler(
          servicer.GetVariantSet,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.GetVariantSetRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.VariantSet.SerializeToString,
      ),
      'SearchVariantSets': grpc.unary_unary_rpc_method_handler(
          servicer.SearchVariantSets,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchVariantSetsRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchVariantSetsResponse.SerializeToString,
      ),
      'DeleteVariantSet': grpc.unary_unary_rpc_method_handler(
          servicer.DeleteVariantSet,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.DeleteVariantSetRequest.FromString,
          response_serializer=google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
      ),
      'UpdateVariantSet': grpc.unary_unary_rpc_method_handler(
          servicer.UpdateVariantSet,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.UpdateVariantSetRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.VariantSet.SerializeToString,
      ),
      'SearchVariants': grpc.unary_unary_rpc_method_handler(
          servicer.SearchVariants,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchVariantsRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchVariantsResponse.SerializeToString,
      ),
      'CreateVariant': grpc.unary_unary_rpc_method_handler(
          servicer.CreateVariant,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.CreateVariantRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.Variant.SerializeToString,
      ),
      'UpdateVariant': grpc.unary_unary_rpc_method_handler(
          servicer.UpdateVariant,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.UpdateVariantRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.Variant.SerializeToString,
      ),
      'DeleteVariant': grpc.unary_unary_rpc_method_handler(
          servicer.DeleteVariant,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.DeleteVariantRequest.FromString,
          response_serializer=google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
      ),
      'GetVariant': grpc.unary_unary_rpc_method_handler(
          servicer.GetVariant,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.GetVariantRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.Variant.SerializeToString,
      ),
      'MergeVariants': grpc.unary_unary_rpc_method_handler(
          servicer.MergeVariants,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.MergeVariantsRequest.FromString,
          response_serializer=google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
      ),
      'SearchCallSets': grpc.unary_unary_rpc_method_handler(
          servicer.SearchCallSets,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchCallSetsRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.SearchCallSetsResponse.SerializeToString,
      ),
      'CreateCallSet': grpc.unary_unary_rpc_method_handler(
          servicer.CreateCallSet,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.CreateCallSetRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.CallSet.SerializeToString,
      ),
      'UpdateCallSet': grpc.unary_unary_rpc_method_handler(
          servicer.UpdateCallSet,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.UpdateCallSetRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.CallSet.SerializeToString,
      ),
      'DeleteCallSet': grpc.unary_unary_rpc_method_handler(
          servicer.DeleteCallSet,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.DeleteCallSetRequest.FromString,
          response_serializer=google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
      ),
      'GetCallSet': grpc.unary_unary_rpc_method_handler(
          servicer.GetCallSet,
          request_deserializer=google_dot_genomics_dot_v1_dot_variants__pb2.GetCallSetRequest.FromString,
          response_serializer=google_dot_genomics_dot_v1_dot_variants__pb2.CallSet.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'google.genomics.v1.VariantServiceV1', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
