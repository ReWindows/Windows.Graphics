#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 71 member(s).
namespace Windows::Devices::Display {
class DisplayMonitor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DisplayMonitor@Display@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayMonitor@Display@Devices@Windows@@QEAA@XZ
    DisplayMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptor@DisplayMonitor@Display@Devices@Windows@@UEAAJW4DisplayMonitorDescriptorKind@234@PEAIPEAPEAE@Z
    virtual long GetDescriptor(int, unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DisplayMonitor@Display@Devices@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DisplayMonitor@Display@Devices@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DisplayMonitor@Display@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DisplayMonitor@Display@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DisplayMonitor@Display@Devices@Windows@@QEAAJU_LUID@@IUDISPLAYCONFIG_STATE_TOKEN@@@Z
    long RuntimeClassInitialize(_LUID, unsigned int, DISPLAYCONFIG_STATE_TOKEN);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BluePrimary@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_BluePrimary(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConnectionKind@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4DisplayMonitorConnectionKind@234@@Z
    virtual long get_ConnectionKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceId@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DeviceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayAdapterDeviceId@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayAdapterDeviceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayAdapterId@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAUDisplayAdapterId@Graphics@4@@Z
    virtual long get_DisplayAdapterId(::Windows::Graphics::DisplayAdapterId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayAdapterTargetId@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAI@Z
    virtual long get_DisplayAdapterTargetId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayTechnology@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4DisplayMonitorTechnology@Internal@234@@Z
    virtual long get_DisplayTechnology(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GreenPrimary@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_GreenPrimary(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDolbyVisionSupportedInHdrMode@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAE@Z
    virtual long get_IsDolbyVisionSupportedInHdrMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHdrLuminanceDataEstimated@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAE@Z
    virtual long get_IsHdrLuminanceDataEstimated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxAverageFullFrameLuminanceInNits@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAM@Z
    virtual long get_MaxAverageFullFrameLuminanceInNits(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxLuminanceInNits@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAM@Z
    virtual long get_MaxLuminanceInNits(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinLuminanceInNits@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAM@Z
    virtual long get_MinLuminanceInNits(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NativeResolutionInRawPixels@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAUSizeInt32@Graphics@4@@Z
    virtual long get_NativeResolutionInRawPixels(::Windows::Graphics::SizeInt32*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalConnector@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4DisplayMonitorPhysicalConnectorKind@234@@Z
    virtual long get_PhysicalConnector(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalSizeInInches@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAPEAU?$IReference@USize@Foundation@Windows@@@Foundation@4@@Z
    virtual long get_PhysicalSizeInInches(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMaximumBrightness@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAI@Z
    virtual long get_PreferredMaximumBrightness(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RawDpiX@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAM@Z
    virtual long get_RawDpiX(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RawDpiY@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAM@Z
    virtual long get_RawDpiY(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RedPrimary@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_RedPrimary(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedBrightness@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4BrightnessSupport@Internal@234@@Z
    virtual long get_SupportedBrightness(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedBrightnessBoostNitRanges@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAPEAU?$IVectorView@UBrightnessNitLevelRange@Internal@Display@Devices@Windows@@@Collections@Foundation@4@@Z
    virtual long get_SupportedBrightnessBoostNitRanges(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedBrightnessLegacyLevels@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAPEAU?$IVectorView@E@Collections@Foundation@4@@Z
    virtual long get_SupportedBrightnessLegacyLevels(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedBrightnessNormalNitRanges@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAPEAU?$IVectorView@UBrightnessNitLevelRange@Internal@Display@Devices@Windows@@@Collections@Foundation@4@@Z
    virtual long get_SupportedBrightnessNormalNitRanges(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedColorSpaces@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4MonitorColorSpaces@Internal@234@@Z
    virtual long get_SupportedColorSpaces(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedElectroOpticalTransferFunctions@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4ElectroOpticalTransferFunctions@Internal@234@@Z
    virtual long get_SupportedElectroOpticalTransferFunctions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedHdrMetadata@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4HdrMetadataSupport@Internal@234@@Z
    virtual long get_SupportedHdrMetadata(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedPixelEncodingFormats@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAPEAU?$IVectorView@UMonitorPixelEncodingFormat@Internal@Display@Devices@Windows@@@Collections@Foundation@4@@Z
    virtual long get_SupportedPixelEncodingFormats(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsAdaptiveBrightness@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsAdaptiveBrightness(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsSmoothBrightness@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsSmoothBrightness(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsageKind@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4DisplayMonitorUsageKind@234@@Z
    virtual long get_UsageKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsageSubKind@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAW4DisplayMonitorUsageSubKind@Internal@234@@Z
    virtual long get_UsageSubKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WhitePoint@DisplayMonitor@Display@Devices@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_WhitePoint(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayMonitor@Display@Devices@Windows@@UEAA@XZ
    virtual ~DisplayMonitor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPixelEncodings@DisplayMonitor@Display@Devices@Windows@@CAJIW4MonitorPixelEncoding@Internal@234@PEAV?$Vector@UMonitorPixelEncodingFormat@Internal@Display@Devices@Windows@@U?$DefaultEqualityPredicate@UMonitorPixelEncodingFormat@Internal@Display@Devices@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@UMonitorPixelEncodingFormat@Internal@Display@Devices@Windows@@@2785@U?$DefaultVectorOptions@UMonitorPixelEncodingFormat@Internal@Display@Devices@Windows@@@2785@@6Collections@Foundation@4@@Z
    static long AddPixelEncodings(unsigned int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyBrightnessDataFromMonitorInternalInfo@DisplayMonitor@Display@Devices@Windows@@AEAAJAEBU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z
    long CopyBrightnessDataFromMonitorInternalInfo(_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateValueBoxer@DisplayMonitor@Display@Devices@Windows@@CA?AV?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque CreateValueBoxer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshBrightnessData@DisplayMonitor@Display@Devices@Windows@@AEAAJXZ
    long RefreshBrightnessData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshBrightnessDataIfNeeded@DisplayMonitor@Display@Devices@Windows@@AEAAXXZ
    void RefreshBrightnessDataIfNeeded();
};
} // namespace Windows::Devices::Display
