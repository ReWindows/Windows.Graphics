#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 62 member(s).
namespace Windows::Graphics::Imaging {
class CImageStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImageStream@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageStream@Imaging@Graphics@Windows@@QEAA@XZ
    CImageStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneStream@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@4@@Z
    virtual long CloneStream(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CImageStream@Imaging@Graphics@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAsync@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long FlushAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamAt@CImageStream@Imaging@Graphics@Windows@@UEAAJ_KPEAPEAUIInputStream@Streams@Storage@4@@Z
    virtual long GetInputStreamAt(uint64_t, ::Windows::Storage::Streams::IInputStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamAt@CImageStream@Imaging@Graphics@Windows@@UEAAJ_KPEAPEAUIOutputStream@Streams@Storage@4@@Z
    virtual long GetOutputStreamAt(uint64_t, ::Windows::Storage::Streams::IOutputStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImageStream@Imaging@Graphics@Windows@@QEAAJPEAUIRandomAccessStream@Streams@Storage@4@PEAUHSTRING__@@@Z
    long Initialize(::Windows::Storage::Streams::IRandomAccessStream *, HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CImageStream@Imaging@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAsync@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@IW4InputStreamOptions@674@PEAPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@4@@Z
    virtual long ReadAsync(::Windows::Storage::Streams::IBuffer *, unsigned int, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImageStream@Imaging@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CImageStream@Imaging@Graphics@Windows@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAsync@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperationWithProgress@II@Foundation@4@@Z
    virtual long WriteAsync(::Windows::Storage::Streams::IBuffer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRead@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAE@Z
    virtual long get_CanRead(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanWrite@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAE@Z
    virtual long get_CanWrite(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentType@CImageStream@Imaging@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ContentType(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CImageStream@Imaging@Graphics@Windows@@UEAAJPEA_K@Z
    virtual long get_Position(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CImageStream@Imaging@Graphics@Windows@@UEAAJPEA_K@Z
    virtual long get_Size(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@CImageStream@Imaging@Graphics@Windows@@UEAAJ_K@Z
    virtual long put_Size(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageStream@Imaging@Graphics@Windows@@UEAA@XZ
    virtual ~CImageStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckState@CImageStream@Imaging@Graphics@Windows@@CAJPEAUIRandomAccessStream@Streams@Storage@4@@Z
    static long CheckState(::Windows::Storage::Streams::IRandomAccessStream *);
};
} // namespace Windows::Graphics::Imaging
