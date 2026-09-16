#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 32 member(s).
namespace Windows::Devices::Display {
class DisplayMonitorFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DisplayMonitorFactory@Display@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromId@DisplayMonitorFactory@Display@Devices@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIDisplayMonitor@234@@Z
    virtual long FromId(HSTRING__*, ::Windows::Devices::Display::IDisplayMonitor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromIdAsync@DisplayMonitorFactory@Display@Devices@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVDisplayMonitor@Display@Devices@Windows@@@Foundation@4@@Z
    virtual long FromIdAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromInterfaceIdAsync@DisplayMonitorFactory@Display@Devices@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVDisplayMonitor@Display@Devices@Windows@@@Foundation@4@@Z
    virtual long FromInterfaceIdAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromTarget@DisplayMonitorFactory@Display@Devices@Windows@@UEAAJ_KIPEAPEAUIDisplayMonitor@234@@Z
    virtual long FromTarget(uint64_t, unsigned int, ::Windows::Devices::Display::IDisplayMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceSelector@DisplayMonitorFactory@Display@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDeviceSelector(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DisplayMonitorFactory@Display@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DisplayMonitorFactory@Display@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DisplayMonitorFactory@Display@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DisplayMonitorFactory@Display@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DisplayMonitorFactory@Display@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterTargetForDeviceId@DisplayMonitorFactory@Display@Devices@Windows@@CAJW4_DEV_OBJECT_TYPE@@PEBGAEAU_LUID@@AEAI@Z
    static long GetAdapterTargetForDeviceId(int, unsigned short const *, _LUID &, unsigned int &);
};
} // namespace Windows::Devices::Display
