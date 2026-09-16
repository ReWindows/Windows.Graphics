#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 2 member(s).
namespace Windows::Graphics {
class CUtilities {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateError@CUtilities@Graphics@Windows@@SAXJG@Z
    static void OriginateError(long, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformError@CUtilities@Graphics@Windows@@SAXJJG@Z
    static void TransformError(long, long, unsigned short);
};
} // namespace Windows::Graphics
