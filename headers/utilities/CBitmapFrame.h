#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 38 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapFrame {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapFrame@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapFrame@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishInitialization@CBitmapFrame@Imaging@Graphics@Windows@@QEAAJPEAUIWICBitmapFrameDecode@@@Z
    long FinishInitialization(IWICBitmapFrameDecode *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelDataAsync@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVPixelDataProvider@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetPixelDataAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelDataTransformedAsync@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJW4BitmapPixelFormat@234@W4BitmapAlphaMode@234@PEAUIBitmapTransform@234@W4ExifOrientationMode@234@W4ColorManagementMode@234@PEAPEAU?$IAsyncOperation@PEAVPixelDataProvider@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetPixelDataTransformedAsync(int, int, ::Windows::Graphics::Imaging::IBitmapTransform *, int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareBitmapAsync@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVSoftwareBitmap@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetSoftwareBitmapAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareBitmapConvertedAsync@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJW4BitmapPixelFormat@234@W4BitmapAlphaMode@234@PEAPEAU?$IAsyncOperation@PEAVSoftwareBitmap@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetSoftwareBitmapConvertedAsync(int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareBitmapTransformedAsync@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJW4BitmapPixelFormat@234@W4BitmapAlphaMode@234@PEAUIBitmapTransform@234@W4ExifOrientationMode@234@W4ColorManagementMode@234@PEAPEAU?$IAsyncOperation@PEAVSoftwareBitmap@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetSoftwareBitmapTransformedAsync(int, int, ::Windows::Graphics::Imaging::IBitmapTransform *, int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailAsync@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVImageStream@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long GetThumbnailAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapFrame@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapAlphaMode@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAW4BitmapAlphaMode@234@@Z
    virtual long get_BitmapAlphaMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapPixelFormat@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAW4BitmapPixelFormat@234@@Z
    virtual long get_BitmapPixelFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapProperties@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAPEAUIBitmapPropertiesView@234@@Z
    virtual long get_BitmapProperties(::Windows::Graphics::Imaging::IBitmapPropertiesView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DpiX@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAN@Z
    virtual long get_DpiX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DpiY@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAN@Z
    virtual long get_DpiY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrientedPixelHeight@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_OrientedPixelHeight(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrientedPixelWidth@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_OrientedPixelWidth(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelHeight@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_PixelHeight(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelWidth@CBitmapFrame@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_PixelWidth(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapFrame@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CBitmapFrame();
};
} // namespace Windows::Graphics::Imaging
