#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 25 member(s).
namespace Windows::Graphics::Display {
class DisplayServicesStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DisplayServicesStatics@Display@Graphics@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DisplayServicesStatics@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayServicesStatics@Display@Graphics@Windows@@QEAA@XZ
    DisplayServicesStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAll@DisplayServicesStatics@Display@Graphics@Windows@@UEAAJPEAIPEAPEAUDisplayId@34@@Z
    virtual long FindAll(unsigned int *, ::Windows::Graphics::DisplayId * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DisplayServicesStatics@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DisplayServicesStatics@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DisplayServicesStatics@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@DisplayServicesStatics@Display@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@DisplayServicesStatics@Display@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DisplayServicesStatics@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DisplayServicesStatics@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Graphics::Display
