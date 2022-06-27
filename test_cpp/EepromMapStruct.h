///////////////////////////////////////////////////////////////////////////////
/// @file DemoMap.h
/// @brief Head file to define the structure of user preference data.
/// @author MStarSemi Inc.
///
///
///
/// Features
///  -
///  -
///  -
///  -
///////////////////////////////////////////////////////////////////////////////
#ifndef _EepromMapStruct_H_
#define _EepromMapStruct_H_

//#include <windef.h>

#define PORT_CNT                    8
#define WIND_CNT                    4
#define CNT_MODE_SETS               60

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;

// eEEP_HDCPBlock
typedef struct
{
    BYTE u8HDCP_Data[0x121];
    BYTE u8HDCP_KeyID[8];
    BYTE u8HDCP_Padding[3];
}__attribute__((packed)) ST_EEP_HDCP;


// eEEP_HDCP22Block
typedef struct
{
    BYTE u8HDCP22_Data[1012];
    BYTE u8HDCP22_KeyID[8];
    BYTE u8HDCP22_Padding[3];
}__attribute__((packed)) ST_EEP_HDCP22;


// eEEP_FactoryFixedBlock
typedef struct
{
    WORD u16FAC_EepromVersionCode;
    WORD u16FAC_EepromSize;

    BYTE u8FAC_SrgbDefault;

    WORD u16FAC_AdcGainR;
    WORD u16FAC_AdcGainG;
    WORD u16FAC_AdcGainB;

    BYTE u8FAC_AdcPgaGain;

    BYTE u8FAC_AdcOffsetR;
    BYTE u8FAC_AdcOffsetG;
    BYTE u8FAC_AdcOffsetB;

    BYTE u8FAC_ColorSrgb_R;
    BYTE u8FAC_ColorSrgb_G;
    BYTE u8FAC_ColorSrgb_B;
    BYTE u8FAC_ColorSrgb_Bri;
    BYTE u8FAC_ColorSrgb_Con;

    BYTE u8FAC_4500K_R;
    BYTE u8FAC_4500K_G;
    BYTE u8FAC_4500K_B;
    BYTE u8FAC_4500K_Bri;
    BYTE u8FAC_4500K_Con;

    BYTE u8FAC_5000K_R;
    BYTE u8FAC_5000K_G;
    BYTE u8FAC_5000K_B;
    BYTE u8FAC_5000K_Bri;
    BYTE u8FAC_5000K_Con;

    BYTE u8FAC_5500K_R;
    BYTE u8FAC_5500K_G;
    BYTE u8FAC_5500K_B;
    BYTE u8FAC_5500K_Bri;
    BYTE u8FAC_5500K_Con;

    BYTE u8FAC_5700K_R;
    BYTE u8FAC_5700K_G;
    BYTE u8FAC_5700K_B;
    BYTE u8FAC_5700K_Bri;
    BYTE u8FAC_5700K_Con;

    BYTE u8FAC_6500K_R;
    BYTE u8FAC_6500K_G;
    BYTE u8FAC_6500K_B;
    BYTE u8FAC_6500K_Bri;
    BYTE u8FAC_6500K_Con;

    BYTE u8FAC_7000K_R;
    BYTE u8FAC_7000K_G;
    BYTE u8FAC_7000K_B;
    BYTE u8FAC_7000K_Bri;
    BYTE u8FAC_7000K_Con;

    BYTE u8FAC_7500K_R;
    BYTE u8FAC_7500K_G;
    BYTE u8FAC_7500K_B;
    BYTE u8FAC_7500K_Bri;
    BYTE u8FAC_7500K_Con;

    BYTE u8FAC_8500K_R;
    BYTE u8FAC_8500K_G;
    BYTE u8FAC_8500K_B;
    BYTE u8FAC_8500K_Bri;
    BYTE u8FAC_8500K_Con;

    BYTE u8FAC_9300K_R;
    BYTE u8FAC_9300K_G;
    BYTE u8FAC_9300K_B;
    BYTE u8FAC_9300K_Bri;
    BYTE u8FAC_9300K_Con;

    BYTE u8FAC_10000K_R;
    BYTE u8FAC_10000K_G;
    BYTE u8FAC_10000K_B;
    BYTE u8FAC_10000K_Bri;
    BYTE u8FAC_10000K_Con;

    BYTE u8FAC_FacBrightness;
    BYTE u8FAC_FacContrast;

    #if 0 //CVT_EN_BOE_AT_FUNCTION
    BYTE u8DeltaEValue[5];
    BYTE u8GammaValue[5];
    BYTE u8ColorTempValue[6];
    #endif
}__attribute__((packed)) ST_EEP_FACTORY_FIXED;


// eEEP_FactoryBlock
typedef struct
{
    //BYTE u8FAC_EepromChksum;

#if 1 //CVT_EN_SYNC_SN_TO_EDID
    BYTE u8FAC_SN_SyncState;
    BYTE u8FAC_SN_Length;
    BYTE u8FAC_SN_Data[30];
#endif

    BYTE u8FAC_Padding[3];
    //BYTE u8FAC_FacBuildTime[20];
    WORD u16FAC_BinCheckSum;

#if 1 //CVT_EN_AT_FUNCTION
    WORD u16FAC_Mode_Flag;
    BYTE u8FAC_CVT_SN_Length;
    BYTE u8FAC_CVT_SN_Data[22];
#endif

    BYTE u8FAC_PANEL_SSC_Frequency;
    BYTE u8FAC_PANEL_SSC_Permillage;
    BYTE u8FAC_DDR_SSC_Frequency;
    BYTE u8FAC_DDR_SSC_Permillage;

    WORD u16FAC_PANEL_RunTime_Hour;
    BYTE u8FAC_PANEL_RunTime_Min;

#if 0 //CVT_EN_BOE_PRODUCT_MODE
    WORD u8ProductMode;
    BYTE u8ProductModeFlag;
#endif

#if 0 //CVT_EN_STM8_WS2812
    BYTE u8STM8Version[3];
#endif

    BYTE u8FAC_FacBuildTime[20];
    BYTE u8FAC_EepromChksum;
}__attribute__((packed)) ST_EEP_FACTORY;


// eEEP_UserSaveDataBlock
typedef struct
{
    BYTE u8SYS_BackLight[PORT_CNT];
    BYTE u8SYS_ContextualMode;
    BYTE u8SYS_ResponseTime;
    BYTE u8SYS_AudioMuteStatus;
    BYTE u8SYS_Volume;

    BYTE u8COLOR_Contrast[PORT_CNT][WIND_CNT];
    BYTE u8COLOR_Saturature[PORT_CNT][WIND_CNT];
    BYTE u8COLOR_BlueLight[PORT_CNT][WIND_CNT];
    BYTE u8COLOR_ColorTemperature[PORT_CNT][WIND_CNT];
    BYTE u8COLOR_BlackLevel[PORT_CNT][WIND_CNT];
    BYTE u8COLOR_Gamma[PORT_CNT][WIND_CNT];

}__attribute__((packed)) ST_EEP_USER_SAVE_DATA;


//Support max 4 output display windows
typedef struct
{
    WORD u16X;
    WORD u16Y;
}__attribute__((packed)) ST_EEP_POS_XY;

// eEEP_SystemBlock
typedef struct
{
    WORD u16SYS_SystemFlag;
    WORD u16SYS_Misc;
    WORD u16SYS_DDCFlag;
    BYTE u8SYS_CtrlHPD;
    BYTE u8SYS_AutoDetect;
    BYTE u8SYS_WideMode[PORT_CNT];         //Support max 8 input port
    BYTE u8SYS_MltWinOnOff;
    BYTE u8SYS_MltWin_SEL;
    BYTE u8SYS_MltWinSRC[WIND_CNT];        //Support max 4 output display windows
    BYTE u8SYS_MltWinSize[WIND_CNT];       //Support max 4 output display windows
    BYTE u8SYS_MltWinBorderColor;
    ST_EEP_POS_XY MltWinPos[WIND_CNT];     //Support max 4 output display windows
    BYTE u8SYS_MltWinRotate[WIND_CNT];     //Support max 4 output display windows

    #if 1 //CVT_EN_PIPPOS_MODE
    BYTE MltWinPosMode[WIND_CNT];     //Support max 4 output display windows
    #endif

    BYTE u8SYS_Language;
    BYTE u8SYS_MenuTranspareny;
    BYTE u8SYS_DPConfigType;
    BYTE u8SYS_DDCCI;
    BYTE u8SYS_OSDHPos;
    BYTE u8SYS_OSDVPos;
    BYTE u8SYS_OSDTime;

    #if 1 //ENABLE_OSD_ROTATION
    BYTE u8SYS_OSDRotation;
    #endif

    #if 0 //CVT_EN_ON_OFF_LOW_BLUELIGHT
    BYTE u8SYS_LowBlueLight;
    #endif

    BYTE u8SYS_OSDLock;
    BYTE u8SYS_OSDPivot;
    BYTE u8SYS_Volume;
    BYTE u8SYS_AudioSRC;
    BYTE u8SYS_AudioMuteStatus;
    BYTE u8SYS_AudioConfig;
    BYTE u8SYS_AudioChannelOut;
    BYTE u8SYS_OffTimer;
    BYTE u8SYS_OverScan[WIND_CNT];        //Support max 4 output display windows
    BYTE u8SYS_ResponseTime;
    DWORD u32SYS_BacklightTime;
    BYTE  u8SYS_BackLight[PORT_CNT];      //Support max 8 input port

#if 0 //CVT_EN_SAVE_DATA_FOR_PICTURE_MODE
    BYTE  u8SYS_PModeBackLight[PICTURE_MODE_NUMS];      //Support max 8 input port
    #if CVT_EN_PMODE_RESPONSE_TIME_FOR_PICTURE_MODE
    BYTE  u8SYS_PModeResponseTime[PICTURE_MODE_NUMS];
    #endif
#elif 0 //CVT_EN_SAVE_DATA_BY_PICTURE_MODE_FOR_SKYWORTH
    BYTE  u8SYS_ContextualModeBackLight[CM_MAX];
#endif

    #if 0 //CVT_EN_HDR_ENHANCE_MODE
    BYTE u8SYS_HDRenhanceMode;
    #endif

    #if 0  //CVT_EN_EYE_PROTECTION_MODE
    BYTE u8SYS_EyeEyeProtectionMode;
    #endif

    #if 0 //CVT_EN_SUPPORT_TWO_EDID
    BYTE u8SYS_SwitchEdidOnOff;
    #endif

    BYTE u8SYS_DeMuraMeasureCommand;
    BYTE u8SYS_Preset_Mode_Eeprom_Index;
    BYTE u8SYS_User_Mode_Eeprom_Index;
    BYTE u8SYS_FreeSyncMode;
    BYTE u8SYS_MSTPortSelect;
    BYTE u8SYS_DSCPortSelect;
    BYTE u8SYS_DPTxPortSelect;
    BYTE u8SYS_Padding[1];
    BYTE u8SYS_Mprt;
    BYTE u8SYS_GameMode;
    BYTE u8SYS_ContextualMode;

    BYTE u8SYS_SplicingScreen;
    BYTE u8SYS_AutoPower;
    BYTE u8SYS_EyeshieldRemind;

    #if 0 //CVT_EN_LIGHT_SENSOR
    BYTE u8SYS_LightSensor;
    #endif

    #if 1 //CVT_EN_GRAVITY_SENSOR
    BYTE u8SYS_GravitySensor;
    #endif

    #if 0 //CVT_EN_SITTING_INDUCTION
    BYTE u8SYS_SettingInduction;
    #endif

    #if 1 //CVT_EN_USB_SWITCH
    BYTE u8SYS_USBSwitch[PORT_CNT];
    #endif

    BYTE u8SYS_AimPointMode;

    #if 0 //ENABLE_MSBHK_OSD
    BYTE u8SYS_MSTInputPort;
    BYTE u8SYS_MSTStream;
    BYTE u8SYS_HDMI2_1;
    BYTE u8SYS_DSCEnable;
    #endif

    BYTE u8SYS_SourceSelect;//only record current input source for ui use
    BYTE u8SYS_Hdr;
    BYTE u8SYS_Hotkey1;
    BYTE u8SYS_Hotkey2;
    BYTE u8SYS_Hotkey3;
    BYTE u8SYS_Hotkey4;
    BYTE u8SYS_GameTime;
    BYTE u8SYS_WindowLocation;
    BYTE u8SYS_RefreshShow;
    BYTE u8SYS_RefreshShowPosition;
    BYTE u8SYS_PhysicalSuperView;
    BYTE u8SYS_PhysicalSuperViewPosition;
    BYTE u8SYS_ColorReminderTime;
    BYTE u8SYS_AmbientLight;
    BYTE u8SYS_Peripherals;
    BYTE u8SYS_UltraLowLatency;
    WORD u16SYS_Countdown;

    #if CVT_EN_EUROPEAN_ENERGY_EFFICIENCY
    BOOL u1SYS_EuropeanEnergyFlag;
    #endif

    #if 0 //CVT_EN_USER_SAVE_OWN_DATA
    ST_EEP_USER_SAVE_DATA sUserSaveData[USER_SAVE_DATA_MODE_CNT];
    #endif

    #if 1 //CVT_EN_SAVE_OSD_PREF_BRIGHTNESS
    BYTE  u8SYS_OsdPrefBackLight;
    #endif

    #if 0 //CVT_EN_SAVE_OSD_PREF_RESPONSE_TIME
    BYTE  u8SYS_OsdPrefResponseTime;
    #endif

    #if 1 //CVT_EN_HDR_GAME_MODE
    BYTE u8SYS_HDRGameMode;
    #endif
}__attribute__((packed)) ST_EEP_SYSTEM;


// eEEP_ColorParameterBlock
typedef struct
{
    BYTE u8COLOR_Contrast;
    BYTE u8COLOR_BLUELIGHT;
    BYTE u8COLOR_InputColorFormat;
    BYTE u8COLOR_InputColorRange;
    BYTE u8COLOR_Gamma;

    BYTE u8COLOR_ColorTemperature;
    BYTE u8COLOR_Saturature;
    BYTE u8COLOR_Hue;
    BYTE u8COLOR_ColorMode;
    BYTE u8COLOR_Sharpness;
    BYTE u8COLOR_RedColor;
    BYTE u8COLOR_GreenColor;
    BYTE u8COLOR_BlueColor;

    #if 1 //CVT_EN_COLORTEMP_SECOND_USER
    BYTE u8COLOR_User2RedColor;
    BYTE u8COLOR_User2GreenColor;
    BYTE u8COLOR_User2BlueColor;
    #endif

    #if 1 //CVT_EN_COLORTEMP_THIRD_USER
    BYTE u8COLOR_User3RedColor;
    BYTE u8COLOR_User3GreenColor;
    BYTE u8COLOR_User3BlueColor;
    #endif

    BYTE u8COLOR_RedBlackLevel;
    BYTE u8COLOR_BlueBlackLevel;
    BYTE u8COLOR_GreenBlackLevel;

    BYTE u8COLOR_R_Hue;
    BYTE u8COLOR_G_Hue;
    BYTE u8COLOR_B_Hue;
    BYTE u8COLOR_C_Hue;
    BYTE u8COLOR_M_Hue;
    BYTE u8COLOR_Y_Hue;
    BYTE u8COLOR_R_Saturation;
    BYTE u8COLOR_G_Saturation;
    BYTE u8COLOR_B_Saturation;
    BYTE u8COLOR_C_Saturation;
    BYTE u8COLOR_M_Saturation;
    BYTE u8COLOR_Y_Saturation;
    BYTE u8COLOR_R_Brightness;
    BYTE u8COLOR_G_Brightness;
    BYTE u8COLOR_B_Brightness;
    BYTE u8COLOR_C_Brightness;
    BYTE u8COLOR_M_Brightness;
    BYTE u8COLOR_Y_Brightness;

    BYTE u8COLOR_SuperResolution;
    BYTE u8COLOR_NoiseReduction;
    BYTE u8COLOR_SkinTone;
    BYTE u8COLOR_SNR;
    BYTE u8COLOR_StaticLuminanceControl;
    BYTE u8COLOR_FilmDetectionOnOff;
    BYTE u8COLOR_CorrectionCCTMode;
    BYTE u8COLOR_CorrectionGammaMode;

    BYTE u8COLOR_Padding[2];

    #if 0 //CVT_EN_PICTURE_MODE_FUNCTION
    BYTE u8COLOR_PictureMode;
    #endif

#if 0 //CVT_EN_SAVE_DATA_FOR_PICTURE_MODE
    BYTE u8COLOR_PModeContrast[PICTURE_MODE_NUMS];  //Support max 8 ;
    BYTE u8COLOR_PModeSaturature[PICTURE_MODE_NUMS];  //Support max 8 ;
    BYTE u8COLOR_PModeSharpness[PICTURE_MODE_NUMS];  //Support max 8 ;
    BYTE u8COLOR_PModeColorMode[PICTURE_MODE_NUMS];  //Support max 8 ;
    BYTE u8COLOR_PModeBlackLevel[PICTURE_MODE_NUMS];  //Support max 8 ;
    #if CVT_EN_PMODE_HUE_FOR_PICTURE_MODE
    BYTE u8COLOR_PModeHue[PICTURE_MODE_NUMS];  //Support max 8 ;
    #endif
    #if CVT_EN_PMODE_COLOR_TEMPERATURE_FOR_PICTURE_MODE
    BYTE u8COLOR_PModeColorTemperature[PICTURE_MODE_NUMS];  //Support max 8 ;
    #endif
    #if CVT_EN_PMODE_GAMMA_FOR_PICTURE_MODE
    BYTE u8COLOR_PModeGamma[PICTURE_MODE_NUMS];  //Support max 8 ;
    #endif
#elif 0 //CVT_EN_SAVE_DATA_BY_PICTURE_MODE_FOR_SKYWORTH
    BYTE u8COLOR_ContextualModeContrast[CM_MAX];
    BYTE u8COLOR_ContextualModeSaturature[CM_MAX];
    BYTE u8COLOR_ContextualModeHue[CM_MAX];
    BYTE u8COLOR_ContextualColorTemperature[CM_MAX];
    BYTE u8COLOR_ContextualRedBlackLevel[CM_MAX];
    BYTE u8COLOR_ContextualBlueBlackLevel[CM_MAX];
    BYTE u8COLOR_ContextualGreenBlackLevel[CM_MAX];
#endif
}__attribute__((packed)) ST_EEP_COLOR;


// eEEP_ModeBlock
typedef struct
{
    WORD u16MODE_HTotal;
    WORD u16MODE_HStart;

    WORD u16MODE_VStart;
    WORD u16MODE_Auto_HStart;

    WORD u16MODE_Auto_VStart;
    BYTE u8MODE_Phase;
    BYTE u8MODE_AutoTime;

    BYTE u8MODE_ModeIndex;
    BYTE u8MODE_CheckSum;
    BYTE u8MODE_UserModeIndex;
    BYTE u8MODE_Reserve0;
}__attribute__((packed)) ST_EEP_MODE;


// eEEP_ODBlock
typedef struct
{
    BYTE u8OD_Data[0x420];
}__attribute__((packed)) ST_EEP_OD;


// eEEP User Data
typedef struct
{
    ST_EEP_HDCP             sUdHDCP;
    ST_EEP_HDCP22           sUdHDCP22;
    ST_EEP_FACTORY_FIXED    sUdFactoryFixed;
    ST_EEP_FACTORY          sUdFactory;
    ST_EEP_SYSTEM           sUdSystem;
    ST_EEP_COLOR            sUdColor[PORT_CNT][WIND_CNT];     // [PORT: max 8 input port][WIN: max 4 windows]
    ST_EEP_MODE             sUdMode[CNT_MODE_SETS];
    ST_EEP_OD               sUdOverDrive;
}__attribute__((packed)) ST_EEP_USER_DATA;

#endif

