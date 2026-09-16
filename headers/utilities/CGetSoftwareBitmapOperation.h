#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 6 member(s).
namespace Windows::Graphics::Imaging {
class CGetSoftwareBitmapOperation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGetSoftwareBitmapOperation@Imaging@Graphics@Windows@@QEAA@W4BitmapPixelFormat@123@W4BitmapAlphaMode@123@PEAUIBitmapTransform@123@W4ExifOrientationMode@123@W4ColorManagementMode@123@PEAUIWICBitmapFrameDecode@@AEBU_GUID@@AEAV?$CMarshaledInterfaceResult@UISoftwareBitmap@Imaging@Graphics@Windows@@@Internal@3@@Z
    CGetSoftwareBitmapOperation(int, int, ::Windows::Graphics::Imaging::IBitmapTransform *, int, int, IWICBitmapFrameDecode *, _GUID const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGetSoftwareBitmapOperation@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CGetSoftwareBitmapOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueAsyncOperation@CGetSoftwareBitmapOperation@Imaging@Graphics@Windows@@MEAA_NXZ
    virtual bool ContinueAsyncOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunPipeline@CGetSoftwareBitmapOperation@Imaging@Graphics@Windows@@MEAAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@@Z
    virtual long RunPipeline(IWICBitmapSource *, IWICImagingFactory *);
};
} // namespace Windows::Graphics::Imaging
