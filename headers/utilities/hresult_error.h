#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 2 member(s).
namespace winrt {
class hresult_error {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ
    ::winrt::hstring message() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ
    ::winrt::hresult to_abi() const;
};
} // namespace winrt
