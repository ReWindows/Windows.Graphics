#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 27 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapProperties@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapProperties@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBitmapProperties@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBitmapProperties@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBitmapProperties@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBitmapProperties@Imaging@Graphics@Windows@@QEAAJPEAUIWICMetadataQueryWriter@@@Z
    long Initialize(IWICMetadataQueryWriter *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapProperties@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapProperties@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertiesAsync@CBitmapProperties@Imaging@Graphics@Windows@@UEAAJPEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVBitmapTypedValue@Imaging@Graphics@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@4@PEAPEAUIAsyncAction@74@@Z
    virtual long SetPropertiesAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapProperties@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CBitmapProperties();
};
} // namespace Windows::Graphics::Imaging
