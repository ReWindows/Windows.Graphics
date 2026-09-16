#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 2 member(s).
namespace Windows::Graphics::Display {
class CDisplayProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CDisplayProperties@Display@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CDisplayProperties@Display@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
};
} // namespace Windows::Graphics::Display
