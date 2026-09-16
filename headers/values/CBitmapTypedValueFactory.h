#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 4 member(s).
namespace Windows::Graphics::Imaging {
class CBitmapTypedValueFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CBitmapTypedValueFactory@Imaging@Graphics@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapTypedValueFactory@Imaging@Graphics@Windows@@UEAAJPEAUIInspectable@@W4PropertyType@Foundation@4@PEAPEAUIBitmapTypedValue@234@@Z
    virtual long Create(IInspectable *, int, ::Windows::Graphics::Imaging::IBitmapTypedValue * *);
};
} // namespace Windows::Graphics::Imaging
