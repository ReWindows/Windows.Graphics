#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class StaticLifetimeStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@StaticLifetimeStore@Internal@Windows@@SAJPEAUICoreApplication@Core@ApplicationModel@3@PEBGE@Z
    static long Delete(::Windows::ApplicationModel::Core::ICoreApplication *, unsigned short const *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@StaticLifetimeStore@Internal@Windows@@SAJPEAUICoreApplication@Core@ApplicationModel@3@PEBGPEAUIInspectable@@E@Z
    static long Write(::Windows::ApplicationModel::Core::ICoreApplication *, unsigned short const *, IInspectable *, unsigned char);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyBagForThread@StaticLifetimeStore@Internal@Windows@@CAJPEAUICoreApplication@Core@ApplicationModel@3@EPEAPEAUIPropertySet@Collections@Foundation@3@@Z
    static long GetPropertyBagForThread(::Windows::ApplicationModel::Core::ICoreApplication *, unsigned char, WindissectOpaque * *);
};
} // namespace Windows::Internal
