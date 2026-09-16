#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 6 member(s).
namespace Windows::Graphics::Imaging {
class CGetPixelDataOperationBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGetPixelDataOperationBase@Imaging@Graphics@Windows@@QEAA@W4BitmapPixelFormat@123@W4BitmapAlphaMode@123@PEAUIBitmapTransform@123@W4ExifOrientationMode@123@W4ColorManagementMode@123@PEAUIWICBitmapFrameDecode@@AEBU_GUID@@@Z
    CGetPixelDataOperationBase(int, int, ::Windows::Graphics::Imaging::IBitmapTransform *, int, int, IWICBitmapFrameDecode *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CGetPixelDataOperationBase@Imaging@Graphics@Windows@@QEAAJXZ
    long DoWork();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGetPixelDataOperationBase@Imaging@Graphics@Windows@@QEAA@XZ
    ~CGetPixelDataOperationBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorAndPixelConversionStage@CGetPixelDataOperationBase@Imaging@Graphics@Windows@@IEBAJPEAUIWICBitmapFrameDecode@@PEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z
    long CreateColorAndPixelConversionStage(IWICBitmapFrameDecode *, IWICImagingFactory *, IWICBitmapSource * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFlipRotateStage@CGetPixelDataOperationBase@Imaging@Graphics@Windows@@IEBAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAUIWICBitmapFrameDecode@@PEAPEAU5@@Z
    long CreateFlipRotateStage(IWICBitmapSource *, IWICImagingFactory *, IWICBitmapFrameDecode *, IWICBitmapSource * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleStage@CGetPixelDataOperationBase@Imaging@Graphics@Windows@@IEBAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU5@@Z
    long CreateScaleStage(IWICBitmapSource *, IWICImagingFactory *, IWICBitmapSource * *) const;
};
} // namespace Windows::Graphics::Imaging
