#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 10 member(s).
namespace Windows::Graphics::Display {
class CoreWindowInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindow@CoreWindowInfo@Display@Graphics@Windows@@QEBA?AV?$ComPtr@UIAppWindow@WindowManagement@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque GetAppWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindow@CoreWindowInfo@Display@Graphics@Windows@@QEBA?AV?$ComPtr@UICoreWindow@Core@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque GetCoreWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcher@CoreWindowInfo@Display@Graphics@Windows@@QEAAJPEAPEAUIDispatcherQueue@System@4@@Z
    long GetDispatcher(::Windows::System::IDispatcherQueue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHMonitor@CoreWindowInfo@Display@Graphics@Windows@@QEAAJPEAPEAUHMONITOR__@@@Z
    long GetHMonitor(HMONITOR__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwnd@CoreWindowInfo@Display@Graphics@Windows@@QEBAPEAUHWND__@@XZ
    HWND__* GetHwnd() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowLayout@CoreWindowInfo@Display@Graphics@Windows@@QEAAJPEAPEAUIWindowLayout@Core@UI@4@@Z
    long GetWindowLayout(::Windows::UI::Core::IWindowLayout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryOrientation@CoreWindowInfo@Display@Graphics@Windows@@QEAAJPEAW4DisplayOrientations@234@0_N@Z
    long QueryOrientation(int *, int *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryResolutionScale@CoreWindowInfo@Display@Graphics@Windows@@QEAAJPEAW4ResolutionScale@234@@Z
    long QueryResolutionScale(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryScaleFactor@CoreWindowInfo@Display@Graphics@Windows@@QEAAJPEAI@Z
    long QueryScaleFactor(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowInfo@Display@Graphics@Windows@@QEAA@XZ
    ~CoreWindowInfo();
};
} // namespace Windows::Graphics::Display
