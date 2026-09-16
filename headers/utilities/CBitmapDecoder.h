#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 61 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapDecoder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishInitialization@CBitmapDecoder@Imaging@Graphics@Windows@@QEAAJPEAUIWICBitmapDecoder@@@Z
    long FinishInitialization(IWICBitmapDecoder *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameAsync@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJIPEAPEAU?$IAsyncOperation@PEAVBitmapFrame@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetFrameAsync(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelDataAsync@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVPixelDataProvider@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetPixelDataAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelDataTransformedAsync@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJW4BitmapPixelFormat@234@W4BitmapAlphaMode@234@PEAUIBitmapTransform@234@W4ExifOrientationMode@234@W4ColorManagementMode@234@PEAPEAU?$IAsyncOperation@PEAVPixelDataProvider@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetPixelDataTransformedAsync(int, int, ::Windows::Graphics::Imaging::IBitmapTransform *, int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviewAsync@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVImageStream@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetPreviewAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareBitmapAsync@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVSoftwareBitmap@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetSoftwareBitmapAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareBitmapConvertedAsync@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJW4BitmapPixelFormat@234@W4BitmapAlphaMode@234@PEAPEAU?$IAsyncOperation@PEAVSoftwareBitmap@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetSoftwareBitmapConvertedAsync(int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareBitmapTransformedAsync@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJW4BitmapPixelFormat@234@W4BitmapAlphaMode@234@PEAUIBitmapTransform@234@W4ExifOrientationMode@234@W4ColorManagementMode@234@PEAPEAU?$IAsyncOperation@PEAVSoftwareBitmap@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetSoftwareBitmapTransformedAsync(int, int, ::Windows::Graphics::Imaging::IBitmapTransform *, int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@4@@Z
    virtual long GetStream(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailAsync@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVImageStream@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetThumbnailAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWICBitmapDecoder@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIWICBitmapDecoder@@@Z
    virtual long GetWICBitmapDecoder(IWICBitmapDecoder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CBitmapDecoder@Imaging@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CBitmapDecoder@Imaging@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapAlphaMode@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAW4BitmapAlphaMode@234@@Z
    virtual long get_BitmapAlphaMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapContainerProperties@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIBitmapPropertiesView@234@@Z
    virtual long get_BitmapContainerProperties(::Windows::Graphics::Imaging::IBitmapPropertiesView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapPixelFormat@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAW4BitmapPixelFormat@234@@Z
    virtual long get_BitmapPixelFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapProperties@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIBitmapPropertiesView@234@@Z
    virtual long get_BitmapProperties(::Windows::Graphics::Imaging::IBitmapPropertiesView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DecoderInformation@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAPEAUIBitmapCodecInformation@234@@Z
    virtual long get_DecoderInformation(::Windows::Graphics::Imaging::IBitmapCodecInformation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DpiX@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAN@Z
    virtual long get_DpiX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DpiY@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAN@Z
    virtual long get_DpiY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameCount@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_FrameCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrientedPixelHeight@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_OrientedPixelHeight(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrientedPixelWidth@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_OrientedPixelWidth(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelHeight@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_PixelHeight(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelWidth@CBitmapDecoder@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_PixelWidth(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapDecoder@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CBitmapDecoder();
};
} // namespace Windows::Graphics::Imaging
