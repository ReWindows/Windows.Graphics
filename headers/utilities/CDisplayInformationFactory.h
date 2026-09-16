#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 38 member(s).
namespace Windows::Graphics::Display {
class CDisplayInformationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayInformationFactory@Display@Graphics@Windows@@QEAA@XZ
    CDisplayInformationFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJPEAPEAUIDisplayInformation@234@@Z
    virtual long GetForCurrentView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForMonitor@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJPEAUHMONITOR__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetForMonitor(HMONITOR__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetForWindow(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CDisplayInformationFactory@Display@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CDisplayInformationFactory@Display@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DisplayContentsInvalidated@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDisplayInformation@Display@Graphics@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_DisplayContentsInvalidated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoRotationPreferences@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJPEAW4DisplayOrientations@234@@Z
    virtual long get_AutoRotationPreferences(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoRotationPreferences@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJW4DisplayOrientations@234@@Z
    virtual long put_AutoRotationPreferences(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DisplayContentsInvalidated@CDisplayInformationFactory@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DisplayContentsInvalidated(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateDisplayContentsInvalidated@CDisplayInformationFactory@Display@Graphics@Windows@@AEAAJXZ
    long _ActivateDisplayContentsInvalidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeactivateDisplayContentsInvalidated@CDisplayInformationFactory@Display@Graphics@Windows@@AEAAJXZ
    long _DeactivateDisplayContentsInvalidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyDisplayContentsInvalidated@CDisplayInformationFactory@Display@Graphics@Windows@@AEAAJPEAUICoreWindow@Core@UI@4@@Z
    long _NotifyDisplayContentsInvalidated(::Windows::UI::Core::ICoreWindow *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayInformationFactory@Display@Graphics@Windows@@EEAA@XZ
    virtual ~CDisplayInformationFactory();
};
} // namespace Windows::Graphics::Display
