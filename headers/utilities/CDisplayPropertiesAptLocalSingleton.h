#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 21 member(s).
namespace Windows::Graphics::Display {
class CDisplayPropertiesAptLocalSingleton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@QEAAJXZ
    long Activate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddColorProfileHandler@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@QEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    long AddColorProfileHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDisplayContentsInvalidatedHandler@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@QEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    long AddDisplayContentsInvalidatedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLogicalDpiHandler@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@QEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    long AddLogicalDpiHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrientationHandler@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@QEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    long AddOrientationHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStereoEnabledHandler@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@QEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    long AddStereoEnabledHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@QEAA@XZ
    CDisplayPropertiesAptLocalSingleton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallAptLocalSingletonToInvoke@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@UEAAJW4DisplayPropertyTypes@234@@Z
    virtual long CallAptLocalSingletonToInvoke(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAppOfChange@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@UEAAJW4DisplayPropertyTypes@234@@Z
    virtual long NotifyAppOfChange(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayPropertiesAptLocalSingleton@Display@Graphics@Windows@@EEAA@XZ
    virtual ~CDisplayPropertiesAptLocalSingleton();
};
} // namespace Windows::Graphics::Display
