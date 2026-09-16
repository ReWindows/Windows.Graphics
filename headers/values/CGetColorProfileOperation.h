#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 25 member(s).
namespace Windows::Graphics::Display {
class CGetColorProfileOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGetColorProfileOperation@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGetColorProfileOperation@Display@Graphics@Windows@@QEAA@IPEAUHMONITOR__@@_N@Z
    CGetColorProfileOperation(unsigned int, HMONITOR__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CGetColorProfileOperation@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CGetColorProfileOperation@Display@Graphics@Windows@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@4@@Z
    virtual long GetResults(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CGetColorProfileOperation@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CGetColorProfileOperation@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGetColorProfileOperation@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGetColorProfileOperation@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGetColorProfileOperation@Display@Graphics@Windows@@UEAA@XZ
    virtual ~CGetColorProfileOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncDoWork@CGetColorProfileOperation@Display@Graphics@Windows@@MEAAJXZ
    virtual long AsyncDoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@CGetColorProfileOperation@Display@Graphics@Windows@@MEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColorProfile@CGetColorProfileOperation@Display@Graphics@Windows@@IEAAJPEAPEAUIRandomAccessStream@Streams@Storage@4@@Z
    long _GetColorProfile(::Windows::Storage::Streams::IRandomAccessStream * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasIccProfileSignature@CGetColorProfileOperation@Display@Graphics@Windows@@CAJPEBG@Z
    static long _HasIccProfileSignature(unsigned short const *);
};
} // namespace Windows::Graphics::Display
