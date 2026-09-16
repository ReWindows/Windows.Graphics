#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 23 member(s).
namespace Windows::Graphics::Display {
class CDisplayPropertiesFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayPropertiesFactory@Display@Graphics@Windows@@QEAA@XZ
    CDisplayPropertiesFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorProfileAsync@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@4@@Z
    virtual long GetColorProfileAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ColorProfileChanged@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    virtual long add_ColorProfileChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DisplayContentsInvalidated@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    virtual long add_DisplayContentsInvalidated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LogicalDpiChanged@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    virtual long add_LogicalDpiChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrientationChanged@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    virtual long add_OrientationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_StereoEnabledChanged@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAUIDisplayPropertiesEventHandler@234@PEAUEventRegistrationToken@@@Z
    virtual long add_StereoEnabledChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoRotationPreferences@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAW4DisplayOrientations@234@@Z
    virtual long get_AutoRotationPreferences(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAW4DisplayOrientations@234@@Z
    virtual long get_CurrentOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalDpi@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAM@Z
    virtual long get_LogicalDpi(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NativeOrientation@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAW4DisplayOrientations@234@@Z
    virtual long get_NativeOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolutionScale@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAW4ResolutionScale@234@@Z
    virtual long get_ResolutionScale(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StereoEnabled@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJPEAE@Z
    virtual long get_StereoEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoRotationPreferences@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJW4DisplayOrientations@234@@Z
    virtual long put_AutoRotationPreferences(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ColorProfileChanged@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ColorProfileChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DisplayContentsInvalidated@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DisplayContentsInvalidated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LogicalDpiChanged@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LogicalDpiChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrientationChanged@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrientationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_StereoEnabledChanged@CDisplayPropertiesFactory@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_StereoEnabledChanged(EventRegistrationToken);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAptLocalSingleton@CDisplayPropertiesFactory@Display@Graphics@Windows@@AEAAJPEAPEAVCDisplayPropertiesAptLocalSingleton@234@@Z
    long GetAptLocalSingleton(WindissectOpaque * *);
};
} // namespace Windows::Graphics::Display
