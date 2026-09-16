#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 30 member(s).
namespace RoVariant {
class Accessor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z
    long GetBoolean(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBooleanArray@Accessor@RoVariant@@QEBAJPEAIPEAPEAE@Z
    long GetBooleanArray(unsigned int *, unsigned char * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChar16@Accessor@RoVariant@@QEBAJPEAG@Z
    long GetChar16(unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChar16Array@Accessor@RoVariant@@QEBAJPEAIPEAPEAG@Z
    long GetChar16Array(unsigned int *, unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateTime@Accessor@RoVariant@@QEBAJPEAUDateTime@Foundation@Windows@@@Z
    long GetDateTime(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateTimeArray@Accessor@RoVariant@@QEBAJPEAIPEAPEAUDateTime@Foundation@Windows@@@Z
    long GetDateTimeArray(unsigned int *, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDouble@Accessor@RoVariant@@QEBAJPEAN@Z
    long GetDouble(double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDoubleArray@Accessor@RoVariant@@QEBAJPEAIPEAPEAN@Z
    long GetDoubleArray(unsigned int *, double * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGuid@Accessor@RoVariant@@QEBAJPEAU_GUID@@@Z
    long GetGuid(_GUID *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGuidArray@Accessor@RoVariant@@QEBAJPEAIPEAPEAU_GUID@@@Z
    long GetGuidArray(unsigned int *, _GUID * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInspectable@Accessor@RoVariant@@QEBAJPEAPEAUIInspectable@@@Z
    long GetInspectable(IInspectable * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInspectableArray@Accessor@RoVariant@@QEBAJPEAIPEAPEAPEAUIInspectable@@@Z
    long GetInspectableArray(unsigned int *, IInspectable * * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt16@Accessor@RoVariant@@QEBAJPEAF@Z
    long GetInt16(short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt16Array@Accessor@RoVariant@@QEBAJPEAIPEAPEAF@Z
    long GetInt16Array(unsigned int *, short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z
    long GetInt32(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt32Array@Accessor@RoVariant@@QEBAJPEAIPEAPEAH@Z
    long GetInt32Array(unsigned int *, int * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt64@Accessor@RoVariant@@QEBAJPEA_J@Z
    long GetInt64(int64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt64Array@Accessor@RoVariant@@QEBAJPEAIPEAPEA_J@Z
    long GetInt64Array(unsigned int *, int64_t * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z
    long GetString(HSTRING__* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringArray@Accessor@RoVariant@@QEBAJPEAIPEAPEAPEAUHSTRING__@@@Z
    long GetStringArray(unsigned int *, HSTRING__* * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt16@Accessor@RoVariant@@QEBAJPEAG@Z
    long GetUInt16(unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt16Array@Accessor@RoVariant@@QEBAJPEAIPEAPEAG@Z
    long GetUInt16Array(unsigned int *, unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt32@Accessor@RoVariant@@QEBAJPEAI@Z
    long GetUInt32(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt32Array@Accessor@RoVariant@@QEBAJPEAIPEAPEAI@Z
    long GetUInt32Array(unsigned int *, unsigned int * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt64@Accessor@RoVariant@@QEBAJPEA_K@Z
    long GetUInt64(uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt64Array@Accessor@RoVariant@@QEBAJPEAIPEAPEA_K@Z
    long GetUInt64Array(unsigned int *, uint64_t * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt8@Accessor@RoVariant@@QEBAJPEAE@Z
    long GetUInt8(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt8Array@Accessor@RoVariant@@QEBAJPEAIPEAPEAE@Z
    long GetUInt8Array(unsigned int *, unsigned char * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Accessor@RoVariant@@QEBAJPEAW4PropertyType@Foundation@Windows@@@Z
    long get_Type(int *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPV@Accessor@RoVariant@@AEBAJXZ
    long VerifyPV() const;
};
} // namespace RoVariant
