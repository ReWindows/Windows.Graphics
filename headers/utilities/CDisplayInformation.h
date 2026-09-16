#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Graphics.dll by Windissect. 119 member(s).
namespace Windows::Graphics::Display {
class CDisplayInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDisplayInformation@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayInformation@Display@Graphics@Windows@@QEAA@XZ
    CDisplayInformation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateThreadSafeTransformInformation@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateThreadSafeTransformInformation(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdvancedColorInfo@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAPEAUIAdvancedColorInfo@234@@Z
    virtual long GetAdvancedColorInfo(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorProfileAsync@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@4@@Z
    virtual long GetColorProfileAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CDisplayInformation@Display@Graphics@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CDisplayInformation@Display@Graphics@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDisplayInformation@Display@Graphics@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDisplayInformation@Display@Graphics@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDisplayInformation@Display@Graphics@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDisplayInformation@Display@Graphics@Windows@@QEAAJPEAUHWND__@@@Z
    long RuntimeClassInitialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@CDisplayInformation@Display@Graphics@Windows@@UEAAJXZ
    virtual long WindowDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDpiChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJXZ
    virtual long WindowDpiChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowMoved@CDisplayInformation@Display@Graphics@Windows@@UEAAJXZ
    virtual long WindowMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowPositionChanged@CDisplayInformation@Display@Graphics@Windows@@QEAAJPEAUICoreWindow@Core@UI@4@PEAUIInspectable@@@Z
    long WindowPositionChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowSizeChanged@CDisplayInformation@Display@Graphics@Windows@@QEAAJPEAUICoreWindow@Core@UI@4@PEAUIWindowSizeChangedEventArgs@674@@Z
    long WindowSizeChanged(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IWindowSizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AdvancedColorInfoChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDisplayInformation@Display@Graphics@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_AdvancedColorInfoChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ColorProfileChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDisplayInformation@Display@Graphics@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ColorProfileChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DpiChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDisplayInformation@Display@Graphics@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_DpiChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrientationChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDisplayInformation@Display@Graphics@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_OrientationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_StereoEnabledChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDisplayInformation@Display@Graphics@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_StereoEnabledChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentMaximumRefreshRate@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAN@Z
    virtual long get_CurrentMaximumRefreshRate(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAW4DisplayOrientations@234@@Z
    virtual long get_CurrentOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DiagonalSizeInInches@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAPEAU?$IReference@N@Foundation@4@@Z
    virtual long get_DiagonalSizeInInches(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalDpi@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAM@Z
    virtual long get_LogicalDpi(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NativeOrientation@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAW4DisplayOrientations@234@@Z
    virtual long get_NativeOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RawDpiX@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAM@Z
    virtual long get_RawDpiX(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RawDpiY@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAM@Z
    virtual long get_RawDpiY(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RawPixelsPerViewPixel@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAN@Z
    virtual long get_RawPixelsPerViewPixel(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolutionScale@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAW4ResolutionScale@234@@Z
    virtual long get_ResolutionScale(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScreenHeightInRawPixels@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_ScreenHeightInRawPixels(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScreenWidthInRawPixels@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAI@Z
    virtual long get_ScreenWidthInRawPixels(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StereoEnabled@CDisplayInformation@Display@Graphics@Windows@@UEAAJPEAE@Z
    virtual long get_StereoEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AdvancedColorInfoChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AdvancedColorInfoChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ColorProfileChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ColorProfileChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DpiChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DpiChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrientationChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrientationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_StereoEnabledChanged@CDisplayInformation@Display@Graphics@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_StereoEnabledChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyCaller@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long VerifyCaller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyEventSupport@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long VerifyEventSupport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateAllDpiChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _ActivateAllDpiChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateAllOrientationChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _ActivateAllOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateNotificationPhoneOrientationChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _ActivateNotificationPhoneOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateNotificationScalingPlateauChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _ActivateNotificationScalingPlateauChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateNotificationStereoChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _ActivateNotificationStereoChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateNotificationWindowMoved@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _ActivateNotificationWindowMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateNotificationWindowSizeChange@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _ActivateNotificationWindowSizeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateWNFHelper@CDisplayInformation@Display@Graphics@Windows@@CAJPEAV1234@U_WNF_STATE_NAME@@P6AJ1KPEAU_WNF_TYPE_ID@@PEAXPEBXK@ZPEAPEAU_WNF_USER_SUBSCRIPTION@@PEAI@Z
    static long _ActivateWNFHelper(WindissectOpaque *, _WNF_STATE_NAME, long ( *)(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long), _WNF_USER_SUBSCRIPTION * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallbackColorProfileChanged@CDisplayInformation@Display@Graphics@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long _CallbackColorProfileChanged(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallbackDisplayColorimetryChanged@CDisplayInformation@Display@Graphics@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long _CallbackDisplayColorimetryChanged(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallbackDisplayModeChanged@CDisplayInformation@Display@Graphics@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long _CallbackDisplayModeChanged(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallbackDxgiStereoChanged@CDisplayInformation@Display@Graphics@Windows@@CAXPEAX@Z
    static void _CallbackDxgiStereoChanged(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallbackOrientationChangedOnPhone@CDisplayInformation@Display@Graphics@Windows@@AEAAJPEAUIInspectable@@0@Z
    long _CallbackOrientationChangedOnPhone(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallbackSdrWhiteLevelChanged@CDisplayInformation@Display@Graphics@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long _CallbackSdrWhiteLevelChanged(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallbackWnfDoNothing@CDisplayInformation@Display@Graphics@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long _CallbackWnfDoNothing(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeactivateAllDpiChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAXXZ
    void _DeactivateAllDpiChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeactivateAllOrientationChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAXXZ
    void _DeactivateAllOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeactivateNotificationPhoneOrientationChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _DeactivateNotificationPhoneOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeactivateNotificationScalingPlateauChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _DeactivateNotificationScalingPlateauChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeactivateNotificationStereoChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _DeactivateNotificationStereoChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeactivateNotificationWindowMoved@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _DeactivateNotificationWindowMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeactivateNotificationWindowSizeChange@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _DeactivateNotificationWindowSizeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeactivateWNFHelper@CDisplayInformation@Display@Graphics@Windows@@CAJPEAVSRWLock@Wrappers@WRL@Microsoft@@PEAPEAU_WNF_USER_SUBSCRIPTION@@PEAI@Z
    static long _DeactivateWNFHelper(::Microsoft::WRL::Wrappers::SRWLock *, _WNF_USER_SUBSCRIPTION * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyEvents@CDisplayInformation@Display@Graphics@Windows@@AEAAJW4DisplayPropertyTypes@234@@Z
    long _NotifyEvents(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateLKGForAdvancedColor@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _PopulateLKGForAdvancedColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateLKGForColorProfile@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _PopulateLKGForColorProfile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateLKGForDpi@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _PopulateLKGForDpi();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateLKGForOrientation@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _PopulateLKGForOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateLKGForStereo@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _PopulateLKGForStereo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostNotifyMessageToApp@CDisplayInformation@Display@Graphics@Windows@@AEAAJW4DisplayPropertyTypes@234@@Z
    long _PostNotifyMessageToApp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessWindowMoved@CDisplayInformation@Display@Graphics@Windows@@AEAAXXZ
    void _ProcessWindowMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterPhoneOrientationChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _UnregisterPhoneOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterScalingPlateauChanged@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _UnregisterScalingPlateauChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterWNFHelper@CDisplayInformation@Display@Graphics@Windows@@CAJPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z
    static long _UnregisterWNFHelper(_WNF_USER_SUBSCRIPTION * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterWindowMoved@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _UnregisterWindowMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterWindowSizeChange@CDisplayInformation@Display@Graphics@Windows@@AEAAJXZ
    long _UnregisterWindowSizeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTypes@CDisplayInformation@Display@Graphics@Windows@@AEAAXW4DisplayPropertyTypes@234@W4ResolutionScale@234@@Z
    void _UpdateTypes(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayInformation@Display@Graphics@Windows@@EEAA@XZ
    virtual ~CDisplayInformation();
};
} // namespace Windows::Graphics::Display
