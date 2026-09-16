#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 3 member(s).
class ColorProfileParser {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorProfileElement@ColorProfileParser@@QEAAJW4icTagSignature@@IPEAEPEAI@Z
    long GetColorProfileElement(int, unsigned int, unsigned char *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ColorProfileParser@@QEAA@XZ
    ~ColorProfileParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitHeader@ColorProfileParser@@AEAAJPEBEI@Z
    long InitHeader(unsigned char const *, unsigned int);
};
