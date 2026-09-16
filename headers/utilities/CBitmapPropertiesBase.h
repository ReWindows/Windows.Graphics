#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 5 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapPropertiesBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapPropertiesBase@Imaging@Graphics@Windows@@QEAA@XZ
    CBitmapPropertiesBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertiesAsync@CBitmapPropertiesBase@Imaging@Graphics@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAU?$IAsyncOperation@PEAVBitmapPropertySet@Imaging@Graphics@Windows@@@74@@Z
    virtual long GetPropertiesAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWICMetadataQueryReader@CBitmapPropertiesBase@Imaging@Graphics@Windows@@UEAAJPEAPEAUIWICMetadataQueryReader@@@Z
    virtual long GetWICMetadataQueryReader(IWICMetadataQueryReader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBitmapPropertiesBase@Imaging@Graphics@Windows@@QEAAJPEAUIWICMetadataQueryReader@@@Z
    long Initialize(IWICMetadataQueryReader *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapPropertiesBase@Imaging@Graphics@Windows@@QEAA@XZ
    ~CBitmapPropertiesBase();
};
} // namespace Windows::Graphics::Imaging
