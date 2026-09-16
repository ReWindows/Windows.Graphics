#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 2 member(s).
namespace winrt {
class impl {
public:
    class factory_cache_entry_base;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z
    WindissectOpaque * precreate_hstring_on_heap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z
    ::winrt::hstring trim_hresult_message(unsigned short const * const, unsigned int);
};
} // namespace winrt
