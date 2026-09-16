#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 53 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapEncoder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapEncoder@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapEncoder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitFMEFrame@CBitmapEncoder@Imaging@Graphics@Windows@@QEAAJI@Z
    long CommitFMEFrame(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitFrame@CBitmapEncoder@Imaging@Graphics@Windows@@QEAAJIPEAUIWICImagingFactory@@@Z
    long CommitFrame(unsigned int, IWICImagingFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyGlobalData@CBitmapEncoder@Imaging@Graphics@Windows@@SAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapEncoder@@@Z
    static long CopyGlobalData(IWICImagingFactory *, IWICBitmapDecoder *, IWICBitmapEncoder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyRemainingFrames@CBitmapEncoder@Imaging@Graphics@Windows@@QEAAJPEAUIWICImagingFactory@@@Z
    long CopyRemainingFrames(IWICImagingFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewFMEFrame@CBitmapEncoder@Imaging@Graphics@Windows@@QEAAJPEAUIWICImagingFactory@@@Z
    long CreateNewFMEFrame(IWICImagingFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewFrame@CBitmapEncoder@Imaging@Graphics@Windows@@QEAAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapEncoder@@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVBitmapTypedValue@Imaging@Graphics@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@4@_N@Z
    long CreateNewFrame(IWICImagingFactory *, IWICBitmapDecoder *, IWICBitmapEncoder *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishInitialization@CBitmapEncoder@Imaging@Graphics@Windows@@QEAAJPEAUIWICBitmapEncoder@@@Z
    long FinishInitialization(IWICBitmapEncoder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAsync@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long FlushAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToNextFrameAsync@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long GoToNextFrameAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToNextFrameWithEncodingOptionsAsync@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVBitmapTypedValue@Imaging@Graphics@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@4@PEAPEAUIAsyncAction@74@@Z
    virtual long GoToNextFrameWithEncodingOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CBitmapEncoder@Imaging@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CBitmapEncoder@Imaging@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBitmapEncoder@Imaging@Graphics@Windows@@QEAAJAEBU_GUID@@PEAUIRandomAccessStream@Streams@Storage@4@@Z
    long RuntimeClassInitialize(_GUID const &, ::Windows::Storage::Streams::IRandomAccessStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBitmapEncoder@Imaging@Graphics@Windows@@QEAAJPEAUIBitmapDecoder@234@@Z
    long RuntimeClassInitialize(::Windows::Graphics::Imaging::IBitmapDecoder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBitmapEncoder@Imaging@Graphics@Windows@@QEAAJPEAUIBitmapDecoder@234@PEAUIRandomAccessStream@Streams@Storage@4@@Z
    long RuntimeClassInitialize(::Windows::Graphics::Imaging::IBitmapDecoder *, ::Windows::Storage::Streams::IRandomAccessStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPixelData@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJW4BitmapPixelFormat@234@W4BitmapAlphaMode@234@IINNIPEAE@Z
    virtual long SetPixelData(int, int, unsigned int, unsigned int, double, double, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSoftwareBitmap@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAUISoftwareBitmap@234@@Z
    virtual long SetSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapContainerProperties@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIBitmapProperties@234@@Z
    virtual long get_BitmapContainerProperties(::Windows::Graphics::Imaging::IBitmapProperties * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapProperties@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIBitmapProperties@234@@Z
    virtual long get_BitmapProperties(::Windows::Graphics::Imaging::IBitmapProperties * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapTransform@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIBitmapTransform@234@@Z
    virtual long get_BitmapTransform(::Windows::Graphics::Imaging::IBitmapTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EncoderInformation@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIBitmapCodecInformation@234@@Z
    virtual long get_EncoderInformation(::Windows::Graphics::Imaging::IBitmapCodecInformation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GeneratedThumbnailHeight@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_GeneratedThumbnailHeight(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GeneratedThumbnailWidth@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_GeneratedThumbnailWidth(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsThumbnailGenerated@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJPEAE@Z
    virtual long get_IsThumbnailGenerated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GeneratedThumbnailHeight@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJI@Z
    virtual long put_GeneratedThumbnailHeight(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GeneratedThumbnailWidth@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJI@Z
    virtual long put_GeneratedThumbnailWidth(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsThumbnailGenerated@CBitmapEncoder@Imaging@Graphics@Windows@@UEAAJE@Z
    virtual long put_IsThumbnailGenerated(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapEncoder@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CBitmapEncoder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleStage@CBitmapEncoder@Imaging@Graphics@Windows@@AEBAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU5@@Z
    long CreateScaleStage(IWICBitmapSource *, IWICImagingFactory *, IWICBitmapSource * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNotFME@CBitmapEncoder@Imaging@Graphics@Windows@@AEAAJXZ
    long EnsureNotFME();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolutionDefaulted@CBitmapEncoder@Imaging@Graphics@Windows@@CAXPEAUIWICBitmapSource@@PEAN1@Z
    static void GetResolutionDefaulted(IWICBitmapSource *, double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWicBitmap@CBitmapEncoder@Imaging@Graphics@Windows@@AEAAJW4BitmapPixelFormat@234@W4BitmapAlphaMode@234@AEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@Z
    long SetWicBitmap(int, int, WindissectOpaque const &);
};
} // namespace Windows::Graphics::Imaging
