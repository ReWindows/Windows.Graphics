#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 29 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapTransform {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapTransform@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapTransform@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CBitmapTransform@Imaging@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CBitmapTransform@Imaging@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapTransform@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJPEAUBitmapBounds@234@@Z
    virtual long get_Bounds(::Windows::Graphics::Imaging::BitmapBounds *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flip@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJPEAW4BitmapFlip@234@@Z
    virtual long get_Flip(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InterpolationMode@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJPEAW4BitmapInterpolationMode@234@@Z
    virtual long get_InterpolationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Rotation@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJPEAW4BitmapRotation@234@@Z
    virtual long get_Rotation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaledHeight@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_ScaledHeight(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaledWidth@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_ScaledWidth(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Bounds@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJUBitmapBounds@234@@Z
    virtual long put_Bounds(::Windows::Graphics::Imaging::BitmapBounds);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Flip@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJW4BitmapFlip@234@@Z
    virtual long put_Flip(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InterpolationMode@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJW4BitmapInterpolationMode@234@@Z
    virtual long put_InterpolationMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Rotation@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJW4BitmapRotation@234@@Z
    virtual long put_Rotation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaledHeight@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJI@Z
    virtual long put_ScaledHeight(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaledWidth@CBitmapTransform@Imaging@Graphics@Windows@@UEAAJI@Z
    virtual long put_ScaledWidth(unsigned int);
};
} // namespace Windows::Graphics::Imaging
