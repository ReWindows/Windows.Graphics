#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 3 member(s).
namespace MonDescParser {
class EDID_PARSER_CEA_861_EXT {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z
    void ChangeCEABlock(_EDID_V1_BLOCK *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z
    bool GetDataBlock(unsigned int, _EDID_V1_CEA_861_DATA_HEADER * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC@@@Z
    bool GetHdmiLLCVendorData(_EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC *);
};
} // namespace MonDescParser
