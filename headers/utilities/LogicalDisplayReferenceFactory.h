#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 23 member(s).
namespace Windows::Graphics::Display {
class LogicalDisplayReferenceFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LogicalDisplayReferenceFactory@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAll@LogicalDisplayReferenceFactory@Display@Graphics@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVLogicalDisplayReference@Display@Graphics@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAll(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllForWindowingEnvironment@LogicalDisplayReferenceFactory@Display@Graphics@Windows@@UEAAJPEAUIWindowingEnvironment@WindowManagement@UI@4@PEAPEAU?$IVectorView@PEAVLogicalDisplayReference@Display@Graphics@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAllForWindowingEnvironment(::Windows::UI::WindowManagement::IWindowingEnvironment *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LogicalDisplayReferenceFactory@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LogicalDisplayReferenceFactory@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LogicalDisplayReferenceFactory@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LogicalDisplayReferenceFactory@Display@Graphics@Windows@@QEAA@XZ
    LogicalDisplayReferenceFactory();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LogicalDisplayReferenceFactory@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LogicalDisplayReferenceFactory@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Graphics::Display
