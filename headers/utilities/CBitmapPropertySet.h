#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 33 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapPropertySet {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapPropertySet@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapPropertySet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVBitmapTypedValue@Imaging@Graphics@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVBitmapTypedValue@Imaging@Graphics@Windows@@@Collections@Foundation@4@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBitmapPropertySet@Imaging@Graphics@Windows@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAUHSTRING__@@PEAUIBitmapTypedValue@234@PEAE@Z
    virtual long Insert(HSTRING__*, ::Windows::Graphics::Imaging::IBitmapTypedValue *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CBitmapPropertySet@Imaging@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CBitmapPropertySet@Imaging@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIBitmapTypedValue@234@@Z
    virtual long Lookup(HSTRING__*, ::Windows::Graphics::Imaging::IBitmapTypedValue * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CBitmapPropertySet@Imaging@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapPropertySet@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CBitmapPropertySet();
};
} // namespace Windows::Graphics::Imaging
