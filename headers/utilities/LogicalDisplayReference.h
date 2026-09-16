#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 24 member(s).
namespace Windows::Graphics::Display {
class LogicalDisplayReference {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LogicalDisplayReference@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LogicalDisplayReference@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LogicalDisplayReference@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LogicalDisplayReference@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@LogicalDisplayReference@Display@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@LogicalDisplayReference@Display@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LogicalDisplayReference@Display@Graphics@Windows@@QEAA@PEAUHMONITOR__@@@Z
    LogicalDisplayReference(HMONITOR__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LogicalDisplayReference@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LogicalDisplayReference@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hmonitor@LogicalDisplayReference@Display@Graphics@Windows@@UEAAJPEA_K@Z
    virtual long get_Hmonitor(uint64_t *);
};
} // namespace Windows::Graphics::Display
