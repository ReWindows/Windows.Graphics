#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 8 member(s).
class WicBitmapLockOnSoftwareBitmap {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataPointer@WicBitmapLockOnSoftwareBitmap@@UEAAJPEAIPEAPEAE@Z
    virtual long GetDataPointer(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@WicBitmapLockOnSoftwareBitmap@@UEAAJPEAU_GUID@@@Z
    virtual long GetPixelFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@WicBitmapLockOnSoftwareBitmap@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStride@WicBitmapLockOnSoftwareBitmap@@UEAAJPEAI@Z
    virtual long GetStride(unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WicBitmapLockOnSoftwareBitmap@@QEAA@AEBV?$ComPtr@UIClosableByteAccess@@@WRL@Microsoft@@U_GUID@@PEAEIIII@Z
    WicBitmapLockOnSoftwareBitmap(WindissectOpaque const &, _GUID, unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WicBitmapLockOnSoftwareBitmap@@EEAA@XZ
    virtual ~WicBitmapLockOnSoftwareBitmap();
};
