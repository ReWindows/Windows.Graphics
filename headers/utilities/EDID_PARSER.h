#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 7 member(s).
namespace MonDescParser {
class EDID_PARSER {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z
    int GetBlockType(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHdmiForum20VendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_2_0_VENDOR_SPECIFIC_DESC@@@Z
    bool GetHdmiForum20VendorDataBlock(_EDID_V1_CEA_861_HDMI_FORUM_2_0_VENDOR_SPECIFIC_DESC *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC@@@Z
    bool GetHdmiLLCVendorDataBlock(_EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z
    long Initialize(unsigned char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidCheckSum@EDID_PARSER@MonDescParser@@QEBA_NH@Z
    bool IsValidCheckSum(int) const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z
    _EDID_V1_BLOCK * const * GetIterAtElement(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidCheckSum@EDID_PARSER@MonDescParser@@AEBA_NPEAT_EDID_V1_BLOCK@@@Z
    bool IsValidCheckSum(_EDID_V1_BLOCK *) const;
};
} // namespace MonDescParser
