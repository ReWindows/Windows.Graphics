#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 21 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapCodecInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapCodecInformation@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapCodecInformation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CodecId@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_CodecId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileExtensions@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_FileExtensions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FriendlyName@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FriendlyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MimeTypes@CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_MimeTypes(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapCodecInformation@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CBitmapCodecInformation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommaDelimitedStringToVector@CBitmapCodecInformation@Imaging@Graphics@Windows@@CAJAEBVString@Internal@4@PEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    static long CommaDelimitedStringToVector(::Windows::Internal::String const &, WindissectOpaque * *);
};
} // namespace Windows::Graphics::Imaging
