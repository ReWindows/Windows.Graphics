#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 23 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapTypedValue {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapTypedValue@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapTypedValue@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapTypedValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertType@CBitmapTypedValue@Imaging@Graphics@Windows@@SAJPEAUIInspectable@@W4PropertyType@Foundation@4@PEAPEAU5@@Z
    static long ConvertType(IInspectable *, int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBitmapTypedValue@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBitmapTypedValue@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBitmapTypedValue@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBitmapTypedValue@Imaging@Graphics@Windows@@QEAAJPEAUIInspectable@@W4PropertyType@Foundation@4@@Z
    long Initialize(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBitmapTypedValue@Imaging@Graphics@Windows@@QEAAJPEAUIInspectable@@@Z
    long Initialize(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CBitmapTypedValue@Imaging@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CBitmapTypedValue@Imaging@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapTypedValue@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapTypedValue@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CBitmapTypedValue@Imaging@Graphics@Windows@@UEAAJPEAW4PropertyType@Foundation@4@@Z
    virtual long get_Type(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CBitmapTypedValue@Imaging@Graphics@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Value(IInspectable * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapTypedValue@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CBitmapTypedValue();
};
} // namespace Windows::Graphics::Imaging
