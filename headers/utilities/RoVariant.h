#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 3 member(s).
class RoVariant {
public:
    class Accessor;
    class OutRef;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z
    void Attach(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wrap@RoVariant@@SA?AV1@PEAUIInspectable@@@Z
    static RoVariant Wrap(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RoVariant@@QEAA@XZ
    ~RoVariant();
};
