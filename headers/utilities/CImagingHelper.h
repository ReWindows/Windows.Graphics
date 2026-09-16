#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 15 member(s).
namespace Windows::Graphics::Imaging {
class CImagingHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateImagingFactory@CImagingHelper@Imaging@Graphics@Windows@@SAJPEAPEAUIWICImagingFactory@@@Z
    static long CreateImagingFactory(IWICImagingFactory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapFormatFromWICFormat@CImagingHelper@Imaging@Graphics@Windows@@SAJPEAUIWICPixelFormatInfo2@@PEAW4BitmapPixelFormat@234@PEAW4BitmapAlphaMode@234@@Z
    static long GetBitmapFormatFromWICFormat(IWICPixelFormatInfo2*, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlipRotateFromBitmapTransform@CImagingHelper@Imaging@Graphics@Windows@@SAJPEAUIBitmapTransform@234@W4Orientation@1234@PEAW4WICBitmapTransformOptions@@@Z
    static long GetFlipRotateFromBitmapTransform(::Windows::Graphics::Imaging::IBitmapTransform *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameOrientationWithoutPhotoMetadataPolicy@CImagingHelper@Imaging@Graphics@Windows@@SA?AW4Orientation@1234@PEAUIWICMetadataQueryReader@@AEBU_GUID@@@Z
    static int GetFrameOrientationWithoutPhotoMetadataPolicy(IWICMetadataQueryReader *, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPhotoMetadataPolicyPresent@CImagingHelper@Imaging@Graphics@Windows@@SA_NXZ
    static bool GetIsPhotoMetadataPolicyPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageIdFromWicError@CImagingHelper@Imaging@Graphics@Windows@@SAGJ@Z
    static unsigned short GetMessageIdFromWicError(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWICFormatFromBitmapFormat@CImagingHelper@Imaging@Graphics@Windows@@SA?AU_GUID@@W4BitmapPixelFormat@234@W4BitmapAlphaMode@234@@Z
    static _GUID GetWICFormatFromBitmapFormat(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWICInterpolationFromBitmapInterpolation@CImagingHelper@Imaging@Graphics@Windows@@SA?AW4WICBitmapInterpolationMode@@W4BitmapInterpolationMode@234@@Z
    static int GetWICInterpolationFromBitmapInterpolation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImagingOriginateError@CImagingHelper@Imaging@Graphics@Windows@@SAXJ@Z
    static void ImagingOriginateError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImagingPropVariantToWinRTPropertyValue@CImagingHelper@Imaging@Graphics@Windows@@SAJAEBUtagPROPVARIANT@@PEAPEAUIInspectable@@@Z
    static long ImagingPropVariantToWinRTPropertyValue(tagPROPVARIANT const &, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImagingPropertyValueToPropVariant@CImagingHelper@Imaging@Graphics@Windows@@SAJPEAUIInspectable@@PEAUtagPROPVARIANT@@@Z
    static long ImagingPropertyValueToPropVariant(IInspectable *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImagingTransformError@CImagingHelper@Imaging@Graphics@Windows@@SAXJ@Z
    static void ImagingTransformError(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBGRWICFormat@CImagingHelper@Imaging@Graphics@Windows@@SA_NAEBU_GUID@@@Z
    static bool IsBGRWICFormat(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFrameOrientationWithoutPhotoMetadataPolicy@CImagingHelper@Imaging@Graphics@Windows@@SAXPEAUIWICMetadataQueryWriter@@AEBU_GUID@@@Z
    static void RemoveFrameOrientationWithoutPhotoMetadataPolicy(IWICMetadataQueryWriter *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateFormat@CImagingHelper@Imaging@Graphics@Windows@@SAJW4BitmapPixelFormat@234@W4BitmapAlphaMode@234@@Z
    static long ValidateFormat(int, int);
};
} // namespace Windows::Graphics::Imaging
