#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 16 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapEncoderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapEncoderFactory@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapEncoderFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAsync@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJU_GUID@@PEAUIRandomAccessStream@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVBitmapEncoder@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long CreateAsync(_GUID, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForInPlacePropertyEncodingAsync@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAUIBitmapDecoder@234@PEAPEAU?$IAsyncOperation@PEAVBitmapEncoder@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long CreateForInPlacePropertyEncodingAsync(::Windows::Graphics::Imaging::IBitmapDecoder *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForTranscodingAsync@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAUIRandomAccessStream@Streams@Storage@4@PEAUIBitmapDecoder@234@PEAPEAU?$IAsyncOperation@PEAVBitmapEncoder@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long CreateForTranscodingAsync(::Windows::Storage::Streams::IRandomAccessStream *, ::Windows::Graphics::Imaging::IBitmapDecoder *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithEncodingOptionsAsync@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJU_GUID@@PEAUIRandomAccessStream@Streams@Storage@4@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVBitmapTypedValue@Imaging@Graphics@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@4@PEAPEAU?$IAsyncOperation@PEAVBitmapEncoder@Imaging@Graphics@Windows@@@Foundation@4@@Z
    virtual long CreateWithEncodingOptionsAsync(_GUID, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEncoderInformationEnumerator@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVBitmapCodecInformation@Imaging@Graphics@Windows@@@Collections@Foundation@4@@Z
    virtual long GetEncoderInformationEnumerator(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BmpEncoderId@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_BmpEncoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GifEncoderId@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_GifEncoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeifEncoderId@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_HeifEncoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_JpegEncoderId@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_JpegEncoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_JpegXREncoderId@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_JpegXREncoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PngEncoderId@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_PngEncoderId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TiffEncoderId@CBitmapEncoderFactory@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TiffEncoderId(_GUID *);
};
} // namespace Windows::Graphics::Imaging
