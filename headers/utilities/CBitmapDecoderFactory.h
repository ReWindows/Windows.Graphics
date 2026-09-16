#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 19 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapDecoderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapDecoderFactory@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapDecoderFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAsync@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAUIRandomAccessStream@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVBitmapDecoder@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long CreateAsync(::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapCodecInformationFromWICCodecInfo@CBitmapDecoderFactory@Imaging@Graphics@Windows@@SAJPEAUIWICBitmapCodecInfo@@PEAPEAUIBitmapCodecInformation@234@@Z
    static long CreateBitmapCodecInformationFromWICCodecInfo(IWICBitmapCodecInfo *, ::Windows::Graphics::Imaging::IBitmapCodecInformation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithIdAsync@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJU_GUID@@PEAUIRandomAccessStream@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVBitmapDecoder@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long CreateWithIdAsync(_GUID, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCodecInfoEnumerator@CBitmapDecoderFactory@Imaging@Graphics@Windows@@SAJHPEAPEAU?$IVectorView@PEAVBitmapCodecInformation@Imaging@Graphics@Windows@@@Collections@Foundation@4@@Z
    static long GetCodecInfoEnumerator(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecoderInformationEnumerator@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVBitmapCodecInformation@Imaging@Graphics@Windows@@@Collections@Foundation@4@@Z
    virtual long GetDecoderInformationEnumerator(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BmpDecoderId@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_BmpDecoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GifDecoderId@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_GifDecoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeifDecoderId@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_HeifDecoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IcoDecoderId@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_IcoDecoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_JpegDecoderId@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_JpegDecoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_JpegXRDecoderId@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_JpegXRDecoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PngDecoderId@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_PngDecoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TiffDecoderId@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TiffDecoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebpDecoderId@CBitmapDecoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_WebpDecoderId(_GUID *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDecoder@CBitmapDecoderFactory@Imaging@Graphics@Windows@@AEAAJPEAUIRandomAccessStream@Streams@Storage@4@PEAU_GUID@@PEAPEAU?$IAsyncOperation@PEAVBitmapDecoder@Imaging@Graphics@Windows@@@Foundation@4@@Z
    long CreateDecoder(::Windows::Storage::Streams::IRandomAccessStream *, _GUID *, WindissectOpaque * *);
};
} // namespace Windows::Graphics::Imaging
