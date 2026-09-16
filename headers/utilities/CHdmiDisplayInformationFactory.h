#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 21 member(s).
namespace Windows::Graphics::Display::Core {
class CHdmiDisplayInformationFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@QEAA@XZ
    CHdmiDisplayInformationFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@UEAAJPEAPEAUIHdmiDisplayInformation@2345@@Z
    virtual long GetForCurrentView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHdmiDisplayInformationFactory@Core@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Graphics::Display::Core
