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
#ifndef _EepromMap_H_
#define _EepromMap_H_

#include "EepromMapStruct.h"

/*==========================================================================================
< Set Size of NVRAM >
==========================================================================================*/
 #define NVRAM_SIZE  0x4000

/*==========================================================================================
< Set Number of Blocks >
==========================================================================================*/
#define NUM_OF_EEPROM_BLOCKS 6

/*==========================================================================================
< Set Reference Block Index>
==========================================================================================*/
typedef enum
{
    eEEP_FactoryBlock = 1,
    eEEP_SystemBlock,
    eEEP_ColorParameterBlock,
    eEEP_ModeBlock,
    eEEP_HdcpKeyBlock,
    eEEP_OverDriveBlock,
}EepromMapBlockType;

//Num of ach block==========================================================
#define SIZEOF_ST_EEP_COLOR         sizeof(ST_EEP_COLOR)
#define SIZEOF_ST_EEP_MODE          sizeof(ST_EEP_MODE)

//==========================================================================

#define CNT_BLOCK_1                 sizeof(ST_EEP_HDCP)                         //HDCP Block
#define CNT_BLOCK_2                 sizeof(ST_EEP_HDCP22)                       //HDCP22 Block
#define CNT_BLOCK_3                 sizeof(ST_EEP_FACTORY_FIXED)                //Factory Block Fixed
#define CNT_BLOCK_4                 sizeof(ST_EEP_FACTORY)                      //Factory Block
#define CNT_BLOCK_5                 sizeof(ST_EEP_SYSTEM)                       //System Block
#define CNT_BLOCK_6                 SIZEOF_ST_EEP_COLOR * PORT_CNT * WIND_CNT   //Color Parameter Block
#define CNT_BLOCK_7                 SIZEOF_ST_EEP_MODE * CNT_MODE_SETS          //Mode Block
#define CNT_BLOCK_8                 sizeof(ST_EEP_OD)                           //OD Block

#if 0 //ENABLE_DEMURA_FUNCTION
#define CNT_BLOCK_9                 sizeOfDeMuraBlock
#else
#define CNT_BLOCK_9                 0x00
#endif

#if 0 //ENABLE_DELTAE_FUNCTION
#define CNT_BLOCK_10                sizeOfDeltaEBlock   //DeltaE (StoredFormatOfPostGamma + StoredFormatOfColorMatirx*2)
#else
#define CNT_BLOCK_10                0x00
#endif

#if 0 //(ENABLE_COLOR_CALIBRATION_FOR_THIRD_PARTY && ENABLE_SaveMCCSData)
#define CNT_BLOCK_11                sizeOfMCCSDataBlock
#else
#define CNT_BLOCK_11                0x00
#endif

#define CNT_BLOCK_12                0x00
#define CNT_BLOCK_13                0x00
#define CNT_BLOCK_14                0x00
#define CNT_BLOCK_15                0x00
#define CNT_BLOCK_16                0x00
#define CNT_BLOCK_17                0x00
#define CNT_BLOCK_18                0x00
#define CNT_BLOCK_19                0x00
#define CNT_BLOCK_20                0x00
#define CNT_BLOCK_21                0x00
#define CNT_BLOCK_22                0x00
#define CNT_BLOCK_23                0x00
#define CNT_BLOCK_24                0x00
#define CNT_BLOCK_25                0x00
#define CNT_BLOCK_26                0x00

#define CNT_TOTAL                   (CNT_BLOCK_1 + CNT_BLOCK_2 + CNT_BLOCK_3 + CNT_BLOCK_4 + CNT_BLOCK_5 \
                                    + CNT_BLOCK_6 + CNT_BLOCK_7 + CNT_BLOCK_8 + CNT_BLOCK_9 + CNT_BLOCK_10\
                                    + CNT_BLOCK_11 + CNT_BLOCK_12 + CNT_BLOCK_13 + CNT_BLOCK_14 + CNT_BLOCK_15\
                                    + CNT_BLOCK_16 + CNT_BLOCK_17 + CNT_BLOCK_18 + CNT_BLOCK_19 + CNT_BLOCK_20\
                                    + CNT_BLOCK_21 + CNT_BLOCK_22 + CNT_BLOCK_23 + CNT_BLOCK_24 + CNT_BLOCK_25\
                                    + CNT_BLOCK_26)

//ADDR of Each Block=============================================================================
#define ADDR_BLOCK_1                0x00
#define ADDR_BLOCK_2                (ADDR_BLOCK_1+CNT_BLOCK_1)
#define ADDR_BLOCK_3                (ADDR_BLOCK_2+CNT_BLOCK_2)
#define ADDR_BLOCK_4                (ADDR_BLOCK_3+CNT_BLOCK_3)
#define ADDR_BLOCK_5                (ADDR_BLOCK_4+CNT_BLOCK_4)
#define ADDR_BLOCK_6                (ADDR_BLOCK_5+CNT_BLOCK_5)
#define ADDR_BLOCK_7                (ADDR_BLOCK_6+CNT_BLOCK_6)
#define ADDR_BLOCK_8                (ADDR_BLOCK_7+CNT_BLOCK_7)
#define ADDR_BLOCK_9                (ADDR_BLOCK_8+CNT_BLOCK_8)
#define ADDR_BLOCK_10               (ADDR_BLOCK_9+CNT_BLOCK_9)
#define ADDR_BLOCK_11               (ADDR_BLOCK_10+CNT_BLOCK_10)
#define ADDR_BLOCK_12               (ADDR_BLOCK_11+CNT_BLOCK_11)
#define ADDR_BLOCK_13               (ADDR_BLOCK_12+CNT_BLOCK_12)
#define ADDR_BLOCK_14               (ADDR_BLOCK_13+CNT_BLOCK_13)
#define ADDR_BLOCK_15               (ADDR_BLOCK_14+CNT_BLOCK_14)
#define ADDR_BLOCK_16               (ADDR_BLOCK_15+CNT_BLOCK_15)
#define ADDR_BLOCK_17               (ADDR_BLOCK_16+CNT_BLOCK_16)
#define ADDR_BLOCK_18               (ADDR_BLOCK_17+CNT_BLOCK_17)
#define ADDR_BLOCK_19               (ADDR_BLOCK_18+CNT_BLOCK_18)
#define ADDR_BLOCK_20               (ADDR_BLOCK_19+CNT_BLOCK_19)
#define ADDR_BLOCK_21               (ADDR_BLOCK_20+CNT_BLOCK_20)
#define ADDR_BLOCK_22               (ADDR_BLOCK_21+CNT_BLOCK_21)
#define ADDR_BLOCK_23               (ADDR_BLOCK_22+CNT_BLOCK_22)
#define ADDR_BLOCK_24               (ADDR_BLOCK_23+CNT_BLOCK_23)
#define ADDR_BLOCK_25               (ADDR_BLOCK_24+CNT_BLOCK_24)
#define ADDR_BLOCK_26               (ADDR_BLOCK_25+CNT_BLOCK_25)

/*==========================================================================================
< HDCP Block >
==========================================================================================*/
#define ADDR_HDCP_BLOCK             ADDR_BLOCK_1
#define CNT_HDCP_BLOCK              CNT_BLOCK_1

/*==========================================================================================
< HDCP Block >
==========================================================================================*/
#define ADDR_HDCP22_BLOCK           ADDR_BLOCK_2
#define CNT_HDCP22_BLOCK            CNT_BLOCK_2

/*==========================================================================================
< Factory Fixed Block >
==========================================================================================*/
#define ADDR_FACTORY_FIXED_BLOCK                ADDR_BLOCK_3
#define CNT_FACTORY_FIXED_BLOCK                 CNT_BLOCK_3
//#define EEP_FACTORY_FIXED_MEMBER_ADDR(member)   (ADDR_FACTORY_FIXED_BLOCK+offsetof(ST_EEP_FACTORY_FIXED, member))

/*==========================================================================================
< Factory Block >
==========================================================================================*/
#define ADDR_FACTORY_BLOCK          ADDR_BLOCK_4
#define CNT_FACTORY_BLOCK           CNT_BLOCK_4
#define ADDR_BOARD_CHECKSUM         (ADDR_FACTORY_BLOCK)
//#define EEP_FACTORY_MEMBER_ADDR(member)        (ADDR_FACTORY_BLOCK+offsetof(ST_EEP_FACTORY, member))

/*==========================================================================================
< System Block >
==========================================================================================*/
#define ADDR_SYSTEM_BLOCK           ADDR_BLOCK_5
#define CNT_SYSTEM_BLOCK            CNT_BLOCK_5
//#define EEP_SYSTEM_MEMBER_ADDR(member)         (ADDR_SYSTEM_BLOCK+offsetof(ST_EEP_SYSTEM, member))

/*==========================================================================================
< Color Block >
==========================================================================================*/
#define ADDR_COLOR_BLOCK            ADDR_BLOCK_6
#define CNT_COLOR_BLOCK             CNT_BLOCK_6
#define PORT_OFFSET                 SIZEOF_ST_EEP_COLOR * WIND_CNT
#define WIN_OFFSET(win)             SIZEOF_ST_EEP_COLOR * (win)
//#define EEP_COLOR_BASE_ADDR(win)               (ADDR_COLOR_BLOCK + (PORT_OFFSET * USER_PREF_WIN_SRC(win))+WIN_OFFSET(win))
//#define EEP_COLOR_MEMBER_ADDR(member)          (EEP_COLOR_BASE_ADDR(USER_PREF_WIN_SEL)+offsetof(ST_EEP_COLOR, member))

/*==========================================================================================
< Mode Block >
==========================================================================================*/
#define ADDR_MODE_BLOCK             ADDR_BLOCK_7
#define CNT_MODE_BLOCK              CNT_BLOCK_7
//#define MODE_OFFSET                 ((UserModeFlag(Input_Analog1))?(PRESET_MODE_NUMBER+g_u8SaveIndex):(g_u8SaveIndex))
//#define EEP_PRESET_USER_MODE_BASE_ADDR         ((UserModeFlag(Input_Analog1))?(ADDR_MODE_BLOCK+SIZEOF_ST_EEP_MODE*PRESET_MODE_NUMBER):(ADDR_MODE_BLOCK))
//#define EEP_MODE_BASE_ADDR(modeIndex)          (EEP_PRESET_USER_MODE_BASE_ADDR+modeIndex*SIZEOF_ST_EEP_MODE)
//#define EEP_MODE_MEMBER_ADDR(member)           (EEP_MODE_BASE_ADDR(g_u8SaveIndex)+offsetof(ST_EEP_MODE, member))

/*==========================================================================================
< OD Block >
==========================================================================================*/
#define ADDR_OD_BLOCK               ADDR_BLOCK_8
#define CNT_OD_BLOCK                CNT_BLOCK_8

/*==========================================================================================
<< Window Info>>
==========================================================================================*/
//#define GET_WIN_INPUTSOURCE(win)    (u8NVRAM_MAP[EEP_SYSTEM_MEMBER_ADDR(u8SYS_MltWinSRC[win])])
//#define GET_WIN_ROTATEMODE(win)     (u8NVRAM_MAP[EEP_SYSTEM_MEMBER_ADDR(u8SYS_MltWinRotate[win])])

/*==========================================================================================
<< DeMura Info>>
==========================================================================================*/
#define ADDR_DEMURA_BLOCK            ADDR_BLOCK_9
#define CNT_DEMURA_BLOCK             CNT_BLOCK_9

/*==========================================================================================
<< DeltaE Info>>
==========================================================================================*/
#define ADDR_DELTAE_BLOCK            ADDR_BLOCK_10
#define CNT_DELTAE_BLOCK             CNT_BLOCK_10

#if ENABLE_COLOR_CALIBRATION_FOR_THIRD_PARTY
/*==========================================================================================
<< Color Calibration for Third Party Info>>
==========================================================================================*/
#define ADDR_THIRD_PARTY_BLOCK      ADDR_BLOCK_11
#define CNT_THIRD_PARTY_BLOCK       CNT_BLOCK_11
#endif

/*==========================================================================================
    < EDID Block >
==========================================================================================*/
#define ADDR_EDID_INFO_SYNC_BLOCK   ADDR_BLOCK_12

#endif
