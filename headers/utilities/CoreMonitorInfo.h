#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 14 member(s).
namespace Windows::Graphics::Display {
class CoreMonitorInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreMonitorInfo@Display@Graphics@Windows@@QEAA@XZ
    CoreMonitorInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromWindow@CoreMonitorInfo@Display@Graphics@Windows@@QEAAJAEAVCoreWindowInfo@234@_N@Z
    long InitializeFromWindow(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAdvancedColorInfo@CoreMonitorInfo@Display@Graphics@Windows@@QEAAJPEAU_ADVANCED_COLOR_INFO@234@@Z
    long QueryAdvancedColorInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAdvancedColorInfoDefault@CoreMonitorInfo@Display@Graphics@Windows@@QEAAJPEAU_ADVANCED_COLOR_INFO@234@@Z
    long QueryAdvancedColorInfoDefault(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryColorProfile@CoreMonitorInfo@Display@Graphics@Windows@@QEAAJPEAGI@Z
    long QueryColorProfile(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryOrientation@CoreMonitorInfo@Display@Graphics@Windows@@QEAAJ_NAEAUQueryOrientationLog@234@PEAW4DisplayOrientations@234@2@Z
    long QueryOrientation(bool, WindissectOpaque &, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryRawDpi@CoreMonitorInfo@Display@Graphics@Windows@@QEAAJPEAM0@Z
    long QueryRawDpi(float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryResolution@CoreMonitorInfo@Display@Graphics@Windows@@QEAAJPEAI0@Z
    long QueryResolution(unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStereoEnabled@CoreMonitorInfo@Display@Graphics@Windows@@QEAAJPEA_N@Z
    long QueryStereoEnabled(bool *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdvancedColorInfoRaw@CoreMonitorInfo@Display@Graphics@Windows@@AEAAJPEAU_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO_2@@@Z
    long GetAdvancedColorInfoRaw(_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO_2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHmdPathInfo@CoreMonitorInfo@Display@Graphics@Windows@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@@Z
    long GetHmdPathInfo(DISPLAYCONFIG_PATH_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationPreferencesWinRT@CoreMonitorInfo@Display@Graphics@Windows@@AEAA?AUORIENTATION_PREFERENCES@@AEAUQueryOrientationLog@234@@Z
    ORIENTATION_PREFERENCES GetOrientationPreferencesWinRT(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPathInfo@CoreMonitorInfo@Display@Graphics@Windows@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@@Z
    long GetPathInfo(DISPLAYCONFIG_PATH_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInfo@CoreMonitorInfo@Display@Graphics@Windows@@AEAAJPEAUtagMONITORINFOEXW@@@Z
    long GetViewInfo(tagMONITORINFOEXW *);
};
} // namespace Windows::Graphics::Display
