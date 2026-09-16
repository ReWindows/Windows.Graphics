#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 6 member(s).
namespace Windows::Graphics::Imaging {
class CGetPixelDataOperation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGetPixelDataOperation@Imaging@Graphics@Windows@@QEAA@W4BitmapPixelFormat@123@W4BitmapAlphaMode@123@PEAUIBitmapTransform@123@W4ExifOrientationMode@123@W4ColorManagementMode@123@PEAUIWICBitmapFrameDecode@@AEBU_GUID@@AEAV?$CMarshaledInterfaceResult@UIPixelDataProvider@Imaging@Graphics@Windows@@@Internal@3@@Z
    CGetPixelDataOperation(int, int, ::Windows::Graphics::Imaging::IBitmapTransform *, int, int, IWICBitmapFrameDecode *, _GUID const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGetPixelDataOperation@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CGetPixelDataOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueAsyncOperation@CGetPixelDataOperation@Imaging@Graphics@Windows@@MEAA_NXZ
    virtual bool ContinueAsyncOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunPipeline@CGetPixelDataOperation@Imaging@Graphics@Windows@@MEAAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@@Z
    virtual long RunPipeline(IWICBitmapSource *, IWICImagingFactory *);
};
} // namespace Windows::Graphics::Imaging
