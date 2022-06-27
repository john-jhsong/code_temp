#include <iostream>
#include <vector>
#include <string>
#include "EepromMap.h"

using namespace std;

//#define BIT0                0x01
//#define _bit0_(val)         ((bit)(val & BIT0))

#define HDCP_All_END        0x52b  // Factory Block Fixed
#define FACTORY_FIEX_END    0x573  // Factory Block
#define FACTORY_END         0x5cd  // System Block
#define SYSTEM_END          0x64d  // Color Parameter Block
#define COLOR_BLOCK_END     0xc8d  // Mode Block


int main(int argc, char *argv[])
{
    unsigned long ul_checksum;
    int i_256check[128] = {0};

    ST_EEP_USER_DATA *p_eep_user_data, eep_user_data;
    p_eep_user_data = &eep_user_data;
    // ST_EEP_COLOR *p_eep_color, eep_color;
    // p_eep_color = &eep_color;

    //vector<string> msg{"Hello","c++","World","VS Code"};

    i_256check[0] = sizeof(ST_EEP_USER_DATA); //all
    i_256check[1] = CNT_BLOCK_1;    // CNT_BLOCK_1  sizeof(ST_EEP_HDCP)                        // HDCP Block
    i_256check[2] = CNT_BLOCK_2;    // CNT_BLOCK_2  sizeof(ST_EEP_HDCP22)                      // HDCP22 Block
    i_256check[3] = CNT_BLOCK_3;    // CNT_BLOCK_3  sizeof(ST_EEP_FACTORY_FIXED)               // Factory Block Fixed
    i_256check[4] = CNT_BLOCK_4;    // CNT_BLOCK_4  sizeof(ST_EEP_FACTORY)                     // Factory Block
    i_256check[5] = CNT_BLOCK_5;    // CNT_BLOCK_5  sizeof(ST_EEP_SYSTEM)                      // System Block
    i_256check[6] = CNT_BLOCK_6;    // CNT_BLOCK_6  SIZEOF_ST_EEP_COLOR * PORT_CNT * WIND_CNT  // Color Parameter Block
    i_256check[7] = CNT_BLOCK_7;    // CNT_BLOCK_7  SIZEOF_ST_EEP_MODE * CNT_MODE_SETS         // Mode Block
    i_256check[8] = CNT_BLOCK_8;    // CNT_BLOCK_8  sizeof(ST_EEP_OD)                          // OD Block

    i_256check[11] = CNT_BLOCK_1 + CNT_BLOCK_2;
    i_256check[12] = CNT_BLOCK_1 + CNT_BLOCK_2 + CNT_BLOCK_3;
    i_256check[13] = CNT_BLOCK_1 + CNT_BLOCK_2 + CNT_BLOCK_3 + CNT_BLOCK_4;
    i_256check[14] = CNT_BLOCK_1 + CNT_BLOCK_2 + CNT_BLOCK_3 + CNT_BLOCK_4 + CNT_BLOCK_5;
    i_256check[15] = CNT_BLOCK_1 + CNT_BLOCK_2 + CNT_BLOCK_3 + CNT_BLOCK_4 + CNT_BLOCK_5 + CNT_BLOCK_6;
    i_256check[16] = CNT_BLOCK_1 + CNT_BLOCK_2 + CNT_BLOCK_3 + CNT_BLOCK_4 + CNT_BLOCK_5 + CNT_BLOCK_6 + CNT_BLOCK_7;
    i_256check[17] = CNT_BLOCK_1 + CNT_BLOCK_2 + CNT_BLOCK_3 + CNT_BLOCK_4 + CNT_BLOCK_5 + CNT_BLOCK_6 + CNT_BLOCK_7 + CNT_BLOCK_8;

    //unsigned char uc_aa;
    //uc_aa =  _bit0_(2); //error, "bit" is keil c51 keyword.

    i_256check[110] = sizeof(char);
    i_256check[111] = sizeof(short);
    i_256check[112] = sizeof(int);
    i_256check[113] = sizeof(long);
    i_256check[114] = sizeof(float);
    i_256check[115] = sizeof(double);
    i_256check[116] = sizeof(long long);
    i_256check[117] = sizeof(long double);
    
    cout << "hello world" << endl;

    return (0);
}

