#include <nvjpeg.h>

#define STUB_IMPL(...)                                 \
  __VA_ARGS__ {                                        \
    return NVJPEG_STATUS_IMPLEMENTATION_NOT_SUPPORTED; \
  }

STUB_IMPL(nvjpegStatus_t nvjpegGetProperty(libraryPropertyType, int*));

STUB_IMPL(nvjpegStatus_t nvjpegGetCudartProperty(libraryPropertyType, int*));

STUB_IMPL(nvjpegStatus_t nvjpegCreateSimple(nvjpegHandle_t*));

STUB_IMPL(nvjpegStatus_t nvjpegCreateEx(
    nvjpegBackend_t,
    nvjpegDevAllocator_t*,
    nvjpegPinnedAllocator_t*,
    unsigned int,
    nvjpegHandle_t*));

STUB_IMPL(nvjpegStatus_t nvjpegCreateExV2(
    nvjpegBackend_t,
    nvjpegDevAllocatorV2_t*,
    nvjpegPinnedAllocatorV2_t*,
    unsigned int,
    nvjpegHandle_t*));

STUB_IMPL(nvjpegStatus_t nvjpegDestroy(nvjpegHandle_t));

STUB_IMPL(nvjpegStatus_t nvjpegSetDeviceMemoryPadding(size_t, nvjpegHandle_t));

STUB_IMPL(nvjpegStatus_t nvjpegGetDeviceMemoryPadding(size_t*, nvjpegHandle_t));

STUB_IMPL(nvjpegStatus_t nvjpegSetPinnedMemoryPadding(size_t, nvjpegHandle_t));

STUB_IMPL(nvjpegStatus_t nvjpegGetPinnedMemoryPadding(size_t*, nvjpegHandle_t));

STUB_IMPL(nvjpegStatus_t nvjpegGetHardwareDecoderInfo(
    nvjpegHandle_t,
    unsigned int*,
    unsigned int*));

STUB_IMPL(
    nvjpegStatus_t nvjpegJpegStateCreate(nvjpegHandle_t, nvjpegJpegState_t*));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStateDestroy(nvjpegJpegState_t))

STUB_IMPL(nvjpegStatus_t nvjpegGetImageInfo(
    nvjpegHandle_t,
    const unsigned char*,
    size_t,
    int*,
    nvjpegChromaSubsampling_t*,
    int*,
    int*));

STUB_IMPL(nvjpegStatus_t nvjpegDecode(
    nvjpegHandle_t,
    nvjpegJpegState_t,
    const unsigned char*,
    size_t,
    nvjpegOutputFormat_t,
    nvjpegImage_t*,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeBatchedInitialize(
    nvjpegHandle_t,
    nvjpegJpegState_t,
    int,
    int,
    nvjpegOutputFormat_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeBatched(
    nvjpegHandle_t,
    nvjpegJpegState_t,
    const unsigned char* const*,
    const size_t*,
    nvjpegImage_t*,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeBatchedPreAllocate(
    nvjpegHandle_t,
    nvjpegJpegState_t,
    int,
    int,
    int,
    nvjpegChromaSubsampling_t,
    nvjpegOutputFormat_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeBatchedParseJpegTables(
    nvjpegHandle_t,
    nvjpegJpegState_t,
    const unsigned char*,
    const size_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderStateCreate(
    nvjpegHandle_t,
    nvjpegEncoderState_t*,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderStateDestroy(nvjpegEncoderState_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderParamsCreate(
    nvjpegHandle_t,
    nvjpegEncoderParams_t*,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderParamsDestroy(nvjpegEncoderParams_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderParamsSetQuality(
    nvjpegEncoderParams_t,
    const int,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderParamsSetEncoding(
    nvjpegEncoderParams_t,
    nvjpegJpegEncoding_t,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderParamsSetOptimizedHuffman(
    nvjpegEncoderParams_t,
    const int,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderParamsSetSamplingFactors(
    nvjpegEncoderParams_t,
    const nvjpegChromaSubsampling_t,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncodeGetBufferSize(
    nvjpegHandle_t,
    const nvjpegEncoderParams_t,
    int,
    int,
    size_t*));

STUB_IMPL(nvjpegStatus_t nvjpegEncodeYUV(
    nvjpegHandle_t,
    nvjpegEncoderState_t,
    const nvjpegEncoderParams_t,
    const nvjpegImage_t*,
    nvjpegChromaSubsampling_t,
    int,
    int,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncodeImage(
    nvjpegHandle_t,
    nvjpegEncoderState_t,
    const nvjpegEncoderParams_t,
    const nvjpegImage_t*,
    nvjpegInputFormat_t,
    int,
    int,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncodeRetrieveBitstreamDevice(
    nvjpegHandle_t,
    nvjpegEncoderState_t,
    unsigned char*,
    size_t*,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncodeRetrieveBitstream(
    nvjpegHandle_t,
    nvjpegEncoderState_t,
    unsigned char*,
    size_t*,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegBufferPinnedCreate(
    nvjpegHandle_t,
    nvjpegPinnedAllocator_t*,
    nvjpegBufferPinned_t*));

STUB_IMPL(nvjpegStatus_t nvjpegBufferPinnedCreateV2(
    nvjpegHandle_t,
    nvjpegPinnedAllocatorV2_t*,
    nvjpegBufferPinned_t*));

STUB_IMPL(nvjpegStatus_t nvjpegBufferPinnedDestroy(nvjpegBufferPinned_t));

STUB_IMPL(nvjpegStatus_t nvjpegBufferDeviceCreate(
    nvjpegHandle_t,
    nvjpegDevAllocator_t*,
    nvjpegBufferDevice_t*));

STUB_IMPL(nvjpegStatus_t nvjpegBufferDeviceCreateV2(
    nvjpegHandle_t,
    nvjpegDevAllocatorV2_t*,
    nvjpegBufferDevice_t*));

STUB_IMPL(nvjpegStatus_t nvjpegBufferDeviceDestroy(nvjpegBufferDevice_t));

STUB_IMPL(nvjpegStatus_t nvjpegBufferPinnedRetrieve(
    nvjpegBufferPinned_t,
    size_t*,
    void**));

STUB_IMPL(nvjpegStatus_t nvjpegBufferDeviceRetrieve(
    nvjpegBufferDevice_t,
    size_t*,
    void**));

STUB_IMPL(nvjpegStatus_t nvjpegStateAttachPinnedBuffer(
    nvjpegJpegState_t,
    nvjpegBufferPinned_t));

STUB_IMPL(nvjpegStatus_t nvjpegStateAttachDeviceBuffer(
    nvjpegJpegState_t,
    nvjpegBufferDevice_t));

STUB_IMPL(
    nvjpegStatus_t nvjpegJpegStreamCreate(nvjpegHandle_t, nvjpegJpegStream_t*));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamDestroy(nvjpegJpegStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamParse(
    nvjpegHandle_t,
    const unsigned char*,
    size_t,
    int,
    int,
    nvjpegJpegStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamParseHeader(
    nvjpegHandle_t,
    const unsigned char*,
    size_t,
    nvjpegJpegStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamParseTables(
    nvjpegHandle_t,
    const unsigned char*,
    size_t,
    nvjpegJpegStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamGetJpegEncoding(
    nvjpegJpegStream_t,
    nvjpegJpegEncoding_t*));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamGetFrameDimensions(
    nvjpegJpegStream_t,
    unsigned int*,
    unsigned int*));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamGetComponentsNum(
    nvjpegJpegStream_t,
    unsigned int*));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamGetComponentDimensions(
    nvjpegJpegStream_t,
    unsigned int,
    unsigned int*,
    unsigned int*));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamGetExifOrientation(
    nvjpegJpegStream_t,
    nvjpegExifOrientation_t*));

STUB_IMPL(nvjpegStatus_t nvjpegJpegStreamGetChromaSubsampling(
    nvjpegJpegStream_t,
    nvjpegChromaSubsampling_t*));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeParamsCreate(
    nvjpegHandle_t,
    nvjpegDecodeParams_t*));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeParamsDestroy(nvjpegDecodeParams_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeParamsSetOutputFormat(
    nvjpegDecodeParams_t,
    nvjpegOutputFormat_t));

STUB_IMPL(
    nvjpegStatus_t
        nvjpegDecodeParamsSetROI(nvjpegDecodeParams_t, int, int, int, int));

STUB_IMPL(
    nvjpegStatus_t nvjpegDecodeParamsSetAllowCMYK(nvjpegDecodeParams_t, int));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeParamsSetScaleFactor(
    nvjpegDecodeParams_t,
    nvjpegScaleFactor_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeParamsSetExifOrientation(
    nvjpegDecodeParams_t,
    nvjpegExifOrientation_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecoderCreate(
    nvjpegHandle_t,
    nvjpegBackend_t,
    nvjpegJpegDecoder_t*));

STUB_IMPL(nvjpegStatus_t nvjpegDecoderDestroy(nvjpegJpegDecoder_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecoderJpegSupported(
    nvjpegJpegDecoder_t,
    nvjpegJpegStream_t,
    nvjpegDecodeParams_t,
    int*));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeBatchedSupported(
    nvjpegHandle_t,
    nvjpegJpegStream_t,
    int*));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeBatchedSupportedEx(
    nvjpegHandle_t,
    nvjpegJpegStream_t,
    nvjpegDecodeParams_t,
    int*));

STUB_IMPL(nvjpegStatus_t nvjpegDecoderStateCreate(
    nvjpegHandle_t,
    nvjpegJpegDecoder_t,
    nvjpegJpegState_t*));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeJpeg(
    nvjpegHandle_t,
    nvjpegJpegDecoder_t,
    nvjpegJpegState_t,
    nvjpegJpegStream_t,
    nvjpegImage_t*,
    nvjpegDecodeParams_t,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeJpegHost(
    nvjpegHandle_t,
    nvjpegJpegDecoder_t,
    nvjpegJpegState_t,
    nvjpegDecodeParams_t,
    nvjpegJpegStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeJpegTransferToDevice(
    nvjpegHandle_t,
    nvjpegJpegDecoder_t,
    nvjpegJpegState_t,
    nvjpegJpegStream_t,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeJpegDevice(
    nvjpegHandle_t,
    nvjpegJpegDecoder_t,
    nvjpegJpegState_t,
    nvjpegImage_t*,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegDecodeBatchedEx(
    nvjpegHandle_t,
    nvjpegJpegState_t,
    const unsigned char* const*,
    const size_t*,
    nvjpegImage_t*,
    nvjpegDecodeParams_t*,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderParamsCopyMetadata(
    nvjpegEncoderState_t,
    nvjpegEncoderParams_t,
    nvjpegJpegStream_t,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderParamsCopyQuantizationTables(
    nvjpegEncoderParams_t,
    nvjpegJpegStream_t,
    cudaStream_t));

STUB_IMPL(nvjpegStatus_t nvjpegEncoderParamsCopyHuffmanTables(
    nvjpegEncoderState_t,
    nvjpegEncoderParams_t,
    nvjpegJpegStream_t,
    cudaStream_t));
