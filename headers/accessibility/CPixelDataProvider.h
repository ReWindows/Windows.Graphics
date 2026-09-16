#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 17 member(s).
namespace Windows::Graphics::Imaging {
class CPixelDataProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPixelDataProvider@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPixelDataProvider@Imaging@Graphics@Windows@@QEAA@XZ
    CPixelDataProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachPixelData@CPixelDataProvider@Imaging@Graphics@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long DetachPixelData(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CPixelDataProvider@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CPixelDataProvider@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CPixelDataProvider@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPixelDataProvider@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPixelDataProvider@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPixelDataProvider@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CPixelDataProvider();
};
} // namespace Windows::Graphics::Imaging
