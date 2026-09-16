#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 18 member(s).
class WicBitmapOnSoftwareBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPalette@WicBitmapOnSoftwareBitmap@@UEAAJPEAUIWICPalette@@@Z
    virtual long CopyPalette(IWICPalette *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@WicBitmapOnSoftwareBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z
    virtual long CopyPixels(WICRect const *, unsigned int, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@WicBitmapOnSoftwareBitmap@@UEAAJPEAU_GUID@@@Z
    virtual long GetPixelFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolution@WicBitmapOnSoftwareBitmap@@UEAAJPEAN0@Z
    virtual long GetResolution(double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@WicBitmapOnSoftwareBitmap@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@WicBitmapOnSoftwareBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z
    virtual long Lock(WICRect const *, unsigned long, IWICBitmapLock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockBuffer@WicBitmapOnSoftwareBitmap@@QEAAJXZ
    long LockBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPalette@WicBitmapOnSoftwareBitmap@@UEAAJPEAUIWICPalette@@@Z
    virtual long SetPalette(IWICPalette *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResolution@WicBitmapOnSoftwareBitmap@@UEAAJNN@Z
    virtual long SetResolution(double, double);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapBuffer@WicBitmapOnSoftwareBitmap@@AEAAJKPEAPEAUIBitmapBuffer@Imaging@Graphics@Windows@@@Z
    long GetBitmapBuffer(unsigned long, ::Windows::Graphics::Imaging::IBitmapBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormatInfo@WicBitmapOnSoftwareBitmap@@CAAEBUPixelFormatInfo@1@W4BitmapPixelFormat@Imaging@Graphics@Windows@@W4BitmapAlphaMode@456@@Z
    static WindissectOpaque const & GetFormatInfo(int, int);
};
