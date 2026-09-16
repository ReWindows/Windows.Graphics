#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 25 member(s).
namespace Windows::Graphics::Display {
class CAdvancedColorInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAdvancedColorKindAvailable@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJW4AdvancedColorKind@234@PEAE@Z
    virtual long IsAdvancedColorKindAvailable(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHdrMetadataFormatCurrentlySupported@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJW4HdrMetadataFormat@234@PEAE@Z
    virtual long IsHdrMetadataFormatCurrentlySupported(int, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BluePrimary@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_BluePrimary(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentAdvancedColorKind@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAW4AdvancedColorKind@234@@Z
    virtual long get_CurrentAdvancedColorKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GreenPrimary@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_GreenPrimary(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxAverageFullFrameLuminanceInNits@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAM@Z
    virtual long get_MaxAverageFullFrameLuminanceInNits(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxLuminanceInNits@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAM@Z
    virtual long get_MaxLuminanceInNits(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinLuminanceInNits@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAM@Z
    virtual long get_MinLuminanceInNits(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RedPrimary@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_RedPrimary(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SdrWhiteLevelInNits@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAM@Z
    virtual long get_SdrWhiteLevelInNits(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WhitePoint@CAdvancedColorInfo@Display@Graphics@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_WhitePoint(WindissectOpaque *);
};
} // namespace Windows::Graphics::Display
