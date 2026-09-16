#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 18 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapPropertiesView {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapPropertiesView@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapPropertiesView@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapPropertiesView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBitmapPropertiesView@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBitmapPropertiesView@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBitmapPropertiesView@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapPropertiesView@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapPropertiesView@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Graphics::Imaging
