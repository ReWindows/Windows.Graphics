#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 11 member(s).
namespace Windows::Graphics {
class Display {
public:
    class CAdvancedColorInfo;
    class CDisplayInformation;
    class CDisplayInformationFactory;
    class CDisplayProperties;
    class CDisplayPropertiesAptLocalSingleton;
    class CDisplayPropertiesFactory;
    class CDisplayTransformInformation;
    class CGetColorProfileOperation;
    class CoreMonitorInfo;
    class CoreWindowInfo;
    class DisplayServicesStatics;
    class LogicalDisplayReference;
    class LogicalDisplayReferenceFactory;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreColorProfilesEqual@Display@Graphics@Windows@@YA_NPEBGI0I@Z
    bool AreColorProfilesEqual(unsigned short const *, unsigned int, unsigned short const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoRotationPreferences@Display@Graphics@Windows@@YAJPEAW4DisplayOrientations@123@@Z
    long GetAutoRotationPreferences(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCurrentThread@Display@Graphics@Windows@@YAJ_NPEAPEAUICoreWindow@Core@UI@3@@Z
    long GetCoreWindowForCurrentThread(bool, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalCoreWindowForCurrentThread@Display@Graphics@Windows@@YAJ_NPEAV?$ComPtr@UIInternalCoreWindow@Core@UI@Windows@@@WRL@Microsoft@@@Z
    long GetInternalCoreWindowForCurrentThread(bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastErrorAsFailHr@Display@Graphics@Windows@@YAJXZ
    long GetLastErrorAsFailHr();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAdvancedColorInfoEqual@Display@Graphics@Windows@@YA_NPEAU_ADVANCED_COLOR_INFO@123@0@Z
    bool IsAdvancedColorInfoEqual(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAutoRotationPreferenceOnAllViews@Display@Graphics@Windows@@YAJW4DisplayOrientations@123@@Z
    long PutAutoRotationPreferenceOnAllViews(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAutoRotationPreferences@Display@Graphics@Windows@@YAJW4DisplayOrientations@123@@Z
    long PutAutoRotationPreferences(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInHmdSlate@Display@Graphics@Windows@@YAJPEA_N@Z
    long QueryInHmdSlate(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformInternalHr@Display@Graphics@Windows@@YAJJG@Z
    long TransformInternalHr(long, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCoreWindowMonitorChangeListener@Display@Graphics@Windows@@YAJPEAUICoreWindow@Core@UI@3@_K@Z
    long UnregisterCoreWindowMonitorChangeListener(::Windows::UI::Core::ICoreWindow *, uint64_t);
};
} // namespace Windows::Graphics
