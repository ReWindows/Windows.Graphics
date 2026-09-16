#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 4 member(s).
class CDisplayMonitor {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayMonitor@@QEAA@XZ
    ~CDisplayMonitor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildColorTransformShimIccFileName@CDisplayMonitor@@AEAAJPEBG@Z
    long BuildColorTransformShimIccFileName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureColorTransformShimIccFile@CDisplayMonitor@@AEAAJPEBG@Z
    long EnsureColorTransformShimIccFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateClass5Guid@CDisplayMonitor@@CAJPEBU_GUID@@PEAXKPEAU2@@Z
    static long GenerateClass5Guid(_GUID const *, void *, unsigned long, _GUID *);
};
