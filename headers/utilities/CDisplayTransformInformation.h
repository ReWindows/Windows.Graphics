#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 22 member(s).
namespace Windows::Graphics::Display {
class CDisplayTransformInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayTransformInformation@Display@Graphics@Windows@@QEAA@XZ
    CDisplayTransformInformation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDisplayTransformInformation@Display@Graphics@Windows@@QEAAJPEAVCDisplayInformation@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplaySizePhysicalPixels@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAJPEAUVector2@Numerics@Foundation@4@@Z
    virtual long get_DisplaySizePhysicalPixels(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScreenPhysicalPixelsToHimetricScaleFactor@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAJPEAUVector2@Numerics@Foundation@4@@Z
    virtual long get_ScreenPhysicalPixelsToHimetricScaleFactor(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualRelativePixelsToScreenPhysicalPixelsRotation@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAJPEAUVector3@Numerics@Foundation@4@@Z
    virtual long get_VisualRelativePixelsToScreenPhysicalPixelsRotation(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualRelativePixelsToScreenPhysicalPixelsScale@CDisplayTransformInformation@Display@Graphics@Windows@@UEAAJPEAM@Z
    virtual long get_VisualRelativePixelsToScreenPhysicalPixelsScale(float *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayTransformInformation@Display@Graphics@Windows@@UEAA@XZ
    virtual ~CDisplayTransformInformation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMonitor@CDisplayTransformInformation@Display@Graphics@Windows@@AEAAJAEAVCoreMonitorInfo@234@@Z
    long _GetMonitor(WindissectOpaque &);
};
} // namespace Windows::Graphics::Display
