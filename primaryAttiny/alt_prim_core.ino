#define MX_AVR

#define MX_CAL_AVR

#define MX_CLK_SPEED 8000000

#define FCP_NULL Unconnected_Port

#define MX_USI

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <avr\io.h>
#include <avr\interrupt.h>
#include <avr\eeprom.h>
#include <avr\wdt.h>

//Configuration Start
//Configuration End

/*========================================================================*\
   Use :???????? ??????????? ????
\*========================================================================*/
#include "C:\ProgramData\MatrixTSL\FlowcodeV8\CAL\internals.c"



MX_UINT8 FCLV_LOOP1;
MX_UINT8 FCLV_LOOP2;
MX_UINT8 FCLV_LOOP3;
MX_UINT8 FCLV_LOOP4;
MX_UINT8 FCLV_LOOP5;


/*========================================================================*\
   Use :panel
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/
#define FCV_FALSE (0)
#define FCV_TRUE (1)
MX_GLOBAL MX_UINT8 FCV_POTENT;
MX_GLOBAL MX_UINT8 FCV_CURRENT_T;
MX_GLOBAL MX_UINT8 FCV_DELTA;
MX_GLOBAL MX_UINT8 FCV_PWM_LVL;


/*========================================================================*\
   Use :InjectorBase1
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/

/*========================================================================*\
   Use :TimeStamp1
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/

/*========================================================================*\
   Use :fcdhelper
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/

/*========================================================================*\
   Use :cal_i2c1
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/
#define MX_I2C_SDA_PORT_1 portb
#define MX_I2C_REF1 
#define MX_I2C_1 
#define MX_I2C_BMODE_1 (0)
#define MX_I2C_SDA_TRIS_1 trisb
#define MX_I2C_SCL_PIN_1 (2)
#define MX_I2C_SCL_PORT_1 portb
#define MX_I2C_STOPDEL_1 (0)
#define MX_I2C_SDA_PIN_1 (0)
#define MX_I2C_SCL_TRIS_1 trisb
#define MX_I2C_BAUD_1 (400000)
#define MX_I2C_CHANNEL_1 (1)


/*=----------------------------------------------------------------------=*\
   Use :cal_i2c1
       :?????????????? ???????????
\*=----------------------------------------------------------------------=*/
#define MX_MI2C

MX_GLOBAL MX_UINT8 FCV_07da1_cal_i2c1__TRANSADDR;
MX_GLOBAL MX_UINT32 FCV_07da1_cal_i2c1__CONSOLELOG;

void FC_CAL_I2C_Slave_Uninit_1();
void FCD_07da1_cal_i2c1__Prv_TextConsole(MX_CHAR *FCL_STR, MX_UINT16 FCLsz_STR, MX_UINT8 FCL_COLOUR, MX_UINT8 FCL_APPENDTIMESTAMP);
MX_UINT16 FC_CAL_I2C_Transaction_Write_1(MX_UINT8 *FCL_BUFFER, MX_UINT16 FCLsz_BUFFER, MX_UINT16 FCL_LENGTH);
void FC_CAL_I2C_Master_Stop_1();
void FC_CAL_I2C_Slave_Init_1(MX_UINT8 FCL_ADDRESS, MX_UINT8 FCL_MASK);
void FC_CAL_I2C_Master_Uninit_1();
MX_UINT8 FC_CAL_I2C_Slave_Status_1();
MX_UINT8 FC_CAL_I2C_Slave_TxByte_1(MX_UINT8 FCL_DATA);
void FC_CAL_I2C_Transaction_Uninit_1();
MX_UINT8 FC_CAL_I2C_Slave_RxByte_1(MX_UINT8 FCL_LAST);
void FC_CAL_I2C_Master_Init_1();
void FC_CAL_I2C_Master_Start_1();
MX_UINT16 FC_CAL_I2C_Transaction_Read_1(MX_UINT8 *FCL_BUFFER, MX_UINT16 FCLsz_BUFFER, MX_UINT16 FCL_LENGTH);
MX_UINT8 FC_CAL_I2C_Master_TxByte_1(MX_UINT8 FCL_DATA);
void FC_CAL_I2C_Master_Restart_1();
MX_UINT8 FC_CAL_I2C_Master_RxByte_1(MX_UINT8 FCL_LAST);
MX_UINT8 FC_CAL_I2C_Transaction_Init_1(MX_UINT8 FCL_ADDRESS);

/*========================================================================*\
   Use :ASCIIData
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/
#define FCVsz_00fb2_ASCIIData__FLOATFIXEDLIST 1
#define FCVsz_00fb2_ASCIIData__INTLIST 475
#define FCVsz_00fb2_ASCIIData__FLOATLIST 1
#define FCVsz_00fb2_ASCIIData__INTFIXEDLIST 1
#define FCD_00fb2_ASCIIData__INTLIST(ix) pgm_read_byte(&(FCD_00fb2_ASCIIData__INTLIST_LUT[ix]))
ROMARRAY_(MX_UINT8) FCD_00fb2_ASCIIData__INTLIST_LUT ROMARRAY_E =
{
// Property added elements
  0, 0, 0, 0, 0, 0, 6, 95, 6, 0, 7, 3, 0, 7, 3, 36, 126,
 36, 126, 36, 36, 43, 106, 18, 0, 99, 19, 8, 100, 99, 54, 73, 86,
 32, 80, 0, 7, 3, 0, 0, 0, 62, 65, 0, 0, 0, 65, 62, 0,
 0, 8, 62, 28, 62, 8, 8, 8, 62, 8, 8, 0, 224, 96, 0, 0,
 8, 8, 8, 8, 8, 0, 96, 96, 0, 0, 32, 16, 8, 4, 2, 62,
 81, 73, 69, 62, 0, 66, 127, 64, 0, 98, 81, 73, 73, 70, 34, 73,
 73, 73, 54, 24, 20, 18, 127, 16, 39, 69, 69, 69, 57, 60, 74, 73,
 73, 48, 1, 113, 9, 5, 3, 54, 73, 73, 73, 54, 6, 73, 73, 41,
 30, 0, 108, 108, 0, 0, 0, 236, 108, 0, 0, 8, 20, 34, 65, 0,
 36, 36, 36, 36, 36, 0, 65, 34, 20, 8, 2, 1, 89, 9, 6, 62,
 65, 93, 85, 30, 126, 9, 9, 9, 126, 127, 73, 73, 73, 54, 62, 65,
 65, 65, 34, 127, 65, 65, 65, 62, 127, 73, 73, 73, 65, 127, 9, 9,
 9, 1, 62, 65, 73, 73, 122, 127, 8, 8, 8, 127, 0, 65, 127, 65,
 0, 48, 64, 64, 64, 63, 127, 8, 20, 34, 65, 127, 64, 64, 64, 64,
 127, 2, 4, 2, 127, 127, 2, 4, 8, 127, 62, 65, 65, 65, 62, 127,
 9, 9, 9, 6, 62, 65, 81, 33, 94, 127, 9, 9, 25, 102, 38, 73,
 73, 73, 50, 1, 1, 127, 1, 1, 63, 64, 64, 64, 63, 31, 32, 64,
 32, 31, 63, 64, 60, 64, 63, 99, 20, 8, 20, 99, 7, 8, 112, 8,
 7, 113, 73, 69, 67, 0, 0, 127, 65, 65, 0, 2, 4, 8, 16, 32,
 0, 65, 65, 127, 0, 4, 2, 1, 2, 4, 128, 128, 128, 128, 128, 0,
 3, 7, 0, 0, 32, 84, 84, 84, 120, 127, 68, 68, 68, 56, 56, 68,
 68, 68, 40, 56, 68, 68, 68, 127, 56, 84, 84, 84, 24, 8, 126, 9,
 9, 0, 24, 164, 164, 164, 124, 127, 4, 4, 120, 0, 0, 0, 125, 0,
 0, 64, 128, 132, 125, 0, 127, 16, 40, 68, 0, 0, 0, 127, 64, 0,
 124, 4, 24, 4, 120, 124, 4, 4, 120, 0, 56, 68, 68, 68, 56, 252,
 68, 68, 68, 56, 56, 68, 68, 68, 252, 68, 120, 68, 4, 8, 8, 84,
 84, 84, 32, 4, 62, 68, 36, 0, 60, 64, 32, 124, 0, 28, 32, 64,
 32, 28, 60, 96, 48, 96, 60, 108, 16, 16, 108, 0, 156, 160, 96, 60,
 0, 100, 84, 84, 76, 0, 8, 62, 65, 65, 0, 0, 0, 127, 0, 0,
 0, 65, 65, 62, 8, 2, 1, 2, 1, 0
// Dynamically added elements
 
};


/*========================================================================*\
   Use :Base_GLCD
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/
MX_UINT8 FCD_0ba72_Base_GLCD__ReadASCIILUT(MX_UINT8 FCL_POS_STR, MX_UINT8 FCL_COUNT);

/*========================================================================*\
   Use :gLCD_SSD1306_i2c1
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/
#define FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM7 128
#define FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM6 128
#define FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM5 128
#define FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM4 128
#define FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM3 128
#define FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM2 128
#define FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM1 128
#define FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM0 128
#define FCV_0cc51_gLCD_SSD1306_i2c1__BLACK (0)
#define FCV_0cc51_gLCD_SSD1306_i2c1__WHITE (255)
MX_GLOBAL MX_UINT16 FCV_0cc51_gLCD_SSD1306_i2c1__BACKGROUND_COL_VAR;
MX_GLOBAL MX_UINT8 FCV_0cc51_gLCD_SSD1306_i2c1__PAGE;
MX_GLOBAL MX_UINT8 FCV_0cc51_gLCD_SSD1306_i2c1__CURRENTY;
MX_GLOBAL MX_UINT8 FCV_0cc51_gLCD_SSD1306_i2c1__CURRENTX;
MX_GLOBAL MX_UINT16 FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR;
MX_GLOBAL MX_UINT8 FCV_0cc51_gLCD_SSD1306_i2c1__ORIENTATION = (0x0);
MX_GLOBAL MX_UINT8 FCV_0cc51_gLCD_SSD1306_i2c1__INVERTED = (0x0);
MX_GLOBAL MX_UINT8 FCV_0cc51_gLCD_SSD1306_i2c1__DRAM3[FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM3];
MX_GLOBAL MX_UINT8 FCV_0cc51_gLCD_SSD1306_i2c1__DRAM2[FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM2];
MX_GLOBAL MX_UINT8 FCV_0cc51_gLCD_SSD1306_i2c1__DRAM1[FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM1];
MX_GLOBAL MX_UINT8 FCV_0cc51_gLCD_SSD1306_i2c1__DRAM0[FCVsz_0cc51_gLCD_SSD1306_i2c1__DRAM0];

void FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(MX_UINT8 FCL_COMMAND);
void FCD_0cc51_gLCD_SSD1306_i2c1__PrintNumber(MX_SINT16 FCL_NUMBER, MX_UINT16 FCL_X, MX_UINT16 FCL_Y, MX_UINT8 FCL_FONT, MX_UINT8 FCL_TRANSPARENT);
void FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1, MX_UINT16 FCL_X2, MX_UINT16 FCL_Y2);
void FCD_0cc51_gLCD_SSD1306_i2c1__DrawEllipse(MX_UINT16 FCL_X, MX_UINT16 FCL_Y, MX_UINT16 FCL_XRADIUS, MX_UINT16 FCL_YRADIUS, MX_UINT8 FCL_TRANSPARENT, MX_UINT8 FCL_SOLID);
void FCD_0cc51_gLCD_SSD1306_i2c1__Plot(MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1);
void FCD_0cc51_gLCD_SSD1306_i2c1__Goto_XY(MX_UINT8 FCL_X, MX_UINT8 FCL_Y);
void FCD_0cc51_gLCD_SSD1306_i2c1__ControlDisplay(MX_UINT8 FCL_CONTROL);
void FCD_0cc51_gLCD_SSD1306_i2c1__SendData(MX_UINT8 FCL_BYTE);
void FCD_0cc51_gLCD_SSD1306_i2c1__SetDisplayOrientation(MX_UINT8 FCL_ORIENTATION);
void FCD_0cc51_gLCD_SSD1306_i2c1__BPlot(MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1);
void FCD_0cc51_gLCD_SSD1306_i2c1__Print(MX_CHAR *FCL_STR, MX_UINT16 FCLsz_STR, MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1, MX_UINT8 FCL_FONT, MX_UINT8 FCL_TRANSPARENT);
void FCD_0cc51_gLCD_SSD1306_i2c1__ControlContrast(MX_UINT8 FCL_CONTRAST);
void FCD_0cc51_gLCD_SSD1306_i2c1__ClearDisplay();
void FCD_0cc51_gLCD_SSD1306_i2c1__SetBackgroundColour(MX_UINT8 FCL_PIXELCOLOUR);
void FCD_0cc51_gLCD_SSD1306_i2c1__DrawCircle(MX_UINT16 FCL_X, MX_UINT16 FCL_Y, MX_UINT16 FCL_RADIUS, MX_UINT8 FCL_TRANSPARENT, MX_UINT8 FCL_SOLID);
void FCD_0cc51_gLCD_SSD1306_i2c1__SetForegroundColour(MX_UINT8 FCL_PIXELCOLOUR);
void FCD_0cc51_gLCD_SSD1306_i2c1__DrawRectangle(MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1, MX_UINT16 FCL_X2, MX_UINT16 FCL_Y2, MX_UINT8 FCL_TRANSPARENT, MX_UINT8 FCL_SOLID);
void FCD_0cc51_gLCD_SSD1306_i2c1__Initialise();
void FCD_0cc51_gLCD_SSD1306_i2c1__InvertDisplay();

/*========================================================================*\
   Use :bezel_radiused1
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/

/*========================================================================*\
   Use :scale_linear
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/

/*========================================================================*\
   Use :dash_scale_vert1
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/

/*========================================================================*\
   Use :ASCIIData
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/
#define FCVsz_00fb1_ASCIIData__FLOATFIXEDLIST 1
#define FCVsz_00fb1_ASCIIData__INTLIST 475
#define FCVsz_00fb1_ASCIIData__FLOATLIST 1
#define FCVsz_00fb1_ASCIIData__INTFIXEDLIST 1


/*========================================================================*\
   Use :PWM_Digital
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/
MX_UINT8 FCD_0ba71_PWM_Digital__ReadASCIILUT(MX_UINT8 FCL_POS_STR, MX_UINT8 FCL_COUNT);

/*========================================================================*\
   Use :led
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/

/*========================================================================*\
   Use :fcdhelper
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/

/*========================================================================*\
   Use :cal_pwm
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/
#define MX_PWM_REF1 
#define MX_PWM_PRESCALE1 (1)
#define MX_PWM_PIN_1 (0)
#define MX_PWM_TYPE_1 (0)
#define MX_PWM_PORT_1 PORTB
#define MX_PWM_TRIS_1 TRISB
#define MX_PWM_CHANNEL_1 (1)


/*=----------------------------------------------------------------------=*\
   Use :cal_pwm
       :?????????????? ???????????
\*=----------------------------------------------------------------------=*/
#define MX_PWM
#define MX_PWM_TMR0_CNT 2
#define MX_PWM_TMR1_CNT 2
#define MX_PWM_TMR2_CNT 0
#define MX_PWM_TMR3_CNT 0
#define MX_PWM_TMR4_CNT 0
#define MX_PWM_TMR5_CNT 0
#define MX_PWM_CNT 4

void FC_CAL_PWM_SetDuty8Bit_1(MX_UINT8 FCL_DUTY);
void FC_CAL_PWM_Enable_1();

/*========================================================================*\
   Use :PWM1
       :?????????? ??????????
       :?????????? ??????? ???????
\*========================================================================*/
MX_GLOBAL MX_UINT8 FCV_0df41_PWM1__ENABLED = (0x0);

void FCD_0df41_PWM1__Enable();

/*========================================================================*\
   Use :???????? ???? ????????? ??????????
\*========================================================================*/
#include "C:\ProgramData\MatrixTSL\FlowcodeV8\CAL\includes.c"


/*========================================================================*\
   Use :InjectorBase1
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :TimeStamp1
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :fcdhelper
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :cal_i2c1
       :?????????? ????????
\*========================================================================*/
/*=----------------------------------------------------------------------=*\
   Use :Send text to the console
       :
       :????????? ??? ??????? Prv_TextConsole
       :  str[20] : MX_CHAR (by-ref)
       :  Colour : MX_UINT8
       :  AppendTimestamp : MX_UINT8
\*=----------------------------------------------------------------------=*/
void FCD_07da1_cal_i2c1__Prv_TextConsole(MX_CHAR *FCL_STR, MX_UINT16 FCLsz_STR, MX_UINT8 FCL_COLOUR, MX_UINT8 FCL_APPENDTIMESTAMP)
{
    //?????????? ????????? ??????????
#define FCLsz_TSTR 20
    MX_CHAR FCL_TSTR[FCLsz_TSTR];


    #if (0)

    //??? ????????????? ???-???????????
    // #else

    #endif

    //?????????? ????????? ??????????
#undef FCLsz_TSTR
}


/*========================================================================*\
   Use :ASCIIData
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :Base_GLCD
       :?????????? ????????
\*========================================================================*/
/*=----------------------------------------------------------------------=*\
   Use :Gets a byte of the embedded ASCII font data.
       :
       :????????? ??? ??????? ReadASCIILUT
       :  pos_str : ASCII position -32 so A = 'A' - 32 = 33
       :  count : Font column Ranging 0-4
       :
       :?????????? : MX_UINT8
\*=----------------------------------------------------------------------=*/
MX_UINT8 FCD_0ba72_Base_GLCD__ReadASCIILUT(MX_UINT8 FCL_POS_STR, MX_UINT8 FCL_COUNT)
{
    //?????????? ????????? ??????????
    MX_UINT16 FCL_POSITION;
    MX_UINT8 FCR_RETVAL;


    #if (1) // 1 == 1

        if (FCL_POS_STR > 94)
        {

            FCR_RETVAL = 0xaa;

        } else {

            FCL_POSITION = (FCL_POS_STR * 5) + FCL_COUNT;

            FCR_RETVAL = FCD_00fb2_ASCIIData__INTLIST(FCL_POSITION);

        }

    // #else

    //??? ????????????? ???-???????????
    #endif

    return (FCR_RETVAL);

}


/*========================================================================*\
   Use :gLCD_SSD1306_i2c1
       :?????????? ????????
\*========================================================================*/
/*=----------------------------------------------------------------------=*\
   Use :????????? ??? ??????? SendCommand
       :  Command : MX_UINT8
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(MX_UINT8 FCL_COMMAND)
{

    FC_CAL_I2C_Master_Start_1();

    FC_CAL_I2C_Master_TxByte_1(120);

    FC_CAL_I2C_Master_TxByte_1(0x00);

    FC_CAL_I2C_Master_TxByte_1(FCL_COMMAND);

    FC_CAL_I2C_Master_Stop_1();

}

/*=----------------------------------------------------------------------=*\
   Use :This macro prints a decimal number to the Graphical LCD.
       :
       :????????? ??? ??????? PrintNumber
       :  Number : Byte or Integer number to send to the display.
       :  X : X pixel coordinate to set the output string position.
       :  Y : Y pixel coordinate to set the output string position.
       :  Font : Range: 0 to 31 - 0=5x8, 1=10x8, 2=10x16, 3=5x16, 4-31=Extended Sizes
       :  Transparent : Specifies if the background of the text is drawn - 0 = Background colour is drawn, 1 = Background colour not drawn.
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__PrintNumber(MX_SINT16 FCL_NUMBER, MX_UINT16 FCL_X, MX_UINT16 FCL_Y, MX_UINT8 FCL_FONT, MX_UINT8 FCL_TRANSPARENT)
{
    //?????????? ????????? ??????????
#define FCLsz_TEMP 6
    MX_CHAR FCL_TEMP[FCLsz_TEMP];


    FCI_TOSTRING(FCL_NUMBER, FCL_TEMP,6);

    FCD_0cc51_gLCD_SSD1306_i2c1__Print(FCL_TEMP, FCLsz_TEMP, FCL_X, FCL_Y, FCL_FONT, FCL_TRANSPARENT);

    //?????????? ????????? ??????????
#undef FCLsz_TEMP
}

/*=----------------------------------------------------------------------=*\
   Use :Draws a line with the current foreground colour from pixel location X1, Y1 to pixel location X2, Y2.
       :
       :????????? ??? ??????? DrawLine
       :  X1 : MX_UINT16
       :  Y1 : MX_UINT16
       :  X2 : MX_UINT16
       :  Y2 : MX_UINT16
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1, MX_UINT16 FCL_X2, MX_UINT16 FCL_Y2)
{
    //?????????? ????????? ??????????
    MX_SINT16 FCL_C1;
    MX_SINT16 FCL_M1;
    MX_SINT16 FCL_D1 = (0);
    MX_SINT16 FCL_PIXELX;
    MX_SINT16 FCL_PIXELY;
    MX_SINT16 FCL_YINC = (1);
    MX_SINT16 FCL_XINC = (1);
    MX_SINT16 FCL_X;
    MX_SINT16 FCL_Y;


    FCL_PIXELX = FCL_X2 - FCL_X1;
    FCL_PIXELY = FCL_Y2 - FCL_Y1;

    FCL_X = FCL_X1;
    FCL_Y = FCL_Y1;

    if (FCL_PIXELX < 0)
    {

        FCL_XINC = -1;
        FCL_PIXELX = FCL_PIXELX * -1;

    // } else {

    }

    if (FCL_PIXELY < 0)
    {

        FCL_YINC = -1;
        FCL_PIXELY = FCL_PIXELY * -1;

    // } else {

    }

    if (FCL_PIXELY <= FCL_PIXELX)
    {

        FCL_C1 = 2 * FCL_PIXELX;
        FCL_M1 = 2 * FCL_PIXELY;

        while (FCL_X != FCL_X2)
        {

            FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X, FCL_Y);

            FCL_X = FCL_X + FCL_XINC;

            FCL_D1 = FCL_D1 + FCL_M1;

            if (FCL_D1 > FCL_PIXELX)
            {

                FCL_Y = FCL_Y + FCL_YINC;

                FCL_D1 = FCL_D1 - FCL_C1;

            // } else {

            }


        }

    } else {

        FCL_C1 = 2 * FCL_PIXELY;
        FCL_M1 = 2 * FCL_PIXELX;

        while (FCL_Y != FCL_Y2)
        {

            FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X, FCL_Y);

            FCL_Y = FCL_Y + FCL_YINC;

            FCL_D1 = FCL_D1 + FCL_M1;

            if (FCL_D1 > FCL_PIXELY)
            {

                FCL_X = FCL_X + FCL_XINC;

                FCL_D1 = FCL_D1 - FCL_C1;

            // } else {

            }


        }

    }

    FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X, FCL_Y);

}

/*=----------------------------------------------------------------------=*\
   Use :Draws an ellipse object on the display with the center of the ellipse at the location X,Y
       :
       :????????? ??? ??????? DrawEllipse
       :  X : X Coordinate for the center of the circle
       :  Y : Y coordinate for the center of the circle
       :  XRadius : Radius of the circle on the X axis specified in pixels
       :  YRadius : Radius of the circle on the Y axis specified in pixels
       :  Transparent : 0=Fill inside circle using background colour / 1=Draw outer circle only
       :  Solid : 0=Use Transparent Setting / 1=Fill with foreground colour
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__DrawEllipse(MX_UINT16 FCL_X, MX_UINT16 FCL_Y, MX_UINT16 FCL_XRADIUS, MX_UINT16 FCL_YRADIUS, MX_UINT8 FCL_TRANSPARENT, MX_UINT8 FCL_SOLID)
{
    //?????????? ????????? ??????????
    MX_SINT16 FCL_ERR;
    MX_SINT16 FCL_CURX;
    MX_SINT16 FCL_CURY;
    MX_UINT32 FCL_BGCOL;
    MX_UINT32 FCL_FGCOL;
    MX_UINT8 FCL_REP = (0x0);
    MX_SINT16 FCL_E2;
    MX_FLOAT FCL_K;


    if (FCL_SOLID == 1)
    {

FCC_DrawEllipse_A:
;

        FCL_CURX = 0;
        FCL_CURY = 0 - FCL_YRADIUS;

        FCL_ERR = 2 - (2 * FCL_XRADIUS);

        FCL_K = (flt_div(flt_fromi(FCL_YRADIUS), flt_fromi(FCL_XRADIUS)));

        while (1)
        {

            FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(flt_toi(flt_sub(flt_fromi(FCL_X), (flt_div(flt_fromi(FCL_CURX), FCL_K)))), FCL_Y + FCL_CURY, flt_toi(flt_add(flt_fromi(FCL_X), (flt_div(flt_fromi(FCL_CURX), FCL_K)))), FCL_Y + FCL_CURY);

            FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(flt_toi(flt_sub(flt_fromi(FCL_X), (flt_div(flt_fromi(FCL_CURX), FCL_K)))), FCL_Y - FCL_CURY, flt_toi(flt_add(flt_fromi(FCL_X), (flt_div(flt_fromi(FCL_CURX), FCL_K)))), FCL_Y - FCL_CURY);

            FCL_E2 = FCL_ERR;

            if (FCL_E2 <= FCL_CURX)
            {

                FCL_CURX = FCL_CURX + 1;
                FCL_ERR = FCL_ERR + ((FCL_CURX * 2) + 1);

                if ((0 - FCL_CURY == FCL_CURX) && (FCL_E2 <= FCL_CURY))
                {

                    FCL_E2 = 0;

                // } else {

                }

            // } else {

            }

            if (FCL_E2 > FCL_CURY)
            {

                FCL_CURY = FCL_CURY + 1;
                FCL_ERR = FCL_ERR + ((FCL_CURY * 2) + 1);

            // } else {

            }


            if ((FCL_CURY <= 0) == 0) break;
        }

    } else {

        if (FCL_TRANSPARENT == 1)
        {

FCC_DrawEllipse_B:
;

            FCL_CURX = 0;
            FCL_CURY = 0 - FCL_YRADIUS;

            FCL_ERR = 2 - (2 * FCL_XRADIUS);

            FCL_K = (flt_div(flt_fromi(FCL_YRADIUS), flt_fromi(FCL_XRADIUS)));

            while (1)
            {

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(flt_toi(flt_sub(flt_fromi(FCL_X), (flt_div(flt_fromi(FCL_CURX), FCL_K)))), FCL_Y + FCL_CURY);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(flt_toi(flt_add(flt_fromi(FCL_X), (flt_div(flt_fromi(FCL_CURX), FCL_K)))), FCL_Y + FCL_CURY);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(flt_toi(flt_add(flt_fromi(FCL_X), (flt_div(flt_fromi(FCL_CURX), FCL_K)))), FCL_Y - FCL_CURY);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(flt_toi(flt_sub(flt_fromi(FCL_X), (flt_div(flt_fromi(FCL_CURX), FCL_K)))), FCL_Y - FCL_CURY);

                FCL_E2 = FCL_ERR;

                if (FCL_E2 <= FCL_CURX)
                {

                    FCL_CURX = FCL_CURX + 1;
                    FCL_ERR = FCL_ERR + ((FCL_CURX * 2) + 1);

                    if ((0 - FCL_CURY == FCL_CURX) && (FCL_E2 <= FCL_CURY))
                    {

                        FCL_E2 = 0;

                    // } else {

                    }

                // } else {

                }

                if (FCL_E2 > FCL_CURY)
                {

                    FCL_CURY = FCL_CURY + 1;
                    FCL_ERR = FCL_ERR + ((FCL_CURY * 2) + 1);

                // } else {

                }


                if ((FCL_CURY <= 0) == 0) break;
            }

        } else {

            FCL_FGCOL = FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR;
            FCL_BGCOL = FCV_0cc51_gLCD_SSD1306_i2c1__BACKGROUND_COL_VAR;

            FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR = FCL_BGCOL;

            FCL_REP = 1;

            goto FCC_DrawEllipse_A;

        }

    }

    if (FCL_REP == 1)
    {

        FCL_REP = FCL_REP + 1;

        FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR = FCL_FGCOL;

        goto FCC_DrawEllipse_B;

    // } else {

    }

}

/*=----------------------------------------------------------------------=*\
   Use :Sets a pixel with the current foreground colour at pixel location X, Y.
       :
       :????????? ??? ??????? Plot
       :  X1 : MX_UINT16
       :  Y1 : MX_UINT16
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__Plot(MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1)
{
    //?????????? ????????? ??????????
    MX_UINT16 FCL_TEMP;
    MX_UINT8 FCL_DATA;
    MX_UINT8 FCL_MOD_Y;
    MX_UINT8 FCL_OLD_DATA;


    switch (FCV_0cc51_gLCD_SSD1306_i2c1__ORIENTATION)
    {
        case 1:
        {
            FCL_TEMP = 128 - (FCL_Y1 + 1);
            FCL_Y1 = FCL_X1;
            FCL_X1 = FCL_TEMP;

            break;
        }
        case 2:
        {
            FCL_X1 = 128 - (FCL_X1 + 1);
            FCL_Y1 = 32 - (FCL_Y1 + 1);

            break;
        }
        case 3:
        {
            FCL_TEMP = FCL_Y1;
            FCL_Y1 = 32 - (FCL_X1 + 1);
            FCL_X1 = FCL_TEMP;

            break;
        }
        // default:

    }

    FCL_MOD_Y = FCL_Y1 & 0x07;

    switch (FCL_Y1 >> 3)
    {
        case 1:
        {
            #if (1) // 32 > 8

                FCL_DATA = FCV_0cc51_gLCD_SSD1306_i2c1__DRAM1[FCL_X1];

            // #else

            //??? ????????????? ???-???????????
            #endif

            break;
        }
        case 2:
        {
            #if (1) // 32 > 16

                FCL_DATA = FCV_0cc51_gLCD_SSD1306_i2c1__DRAM2[FCL_X1];

            // #else

            //??? ????????????? ???-???????????
            #endif

            break;
        }
        case 3:
        {
            #if (1) // 32 > 24

                FCL_DATA = FCV_0cc51_gLCD_SSD1306_i2c1__DRAM3[FCL_X1];

            // #else

            //??? ????????????? ???-???????????
            #endif

            break;
        }
        case 4:
        {
            #if (0) // 32 > 32

            //??? ????????????? ???-???????????
            // #else

            #endif

            break;
        }
        case 5:
        {
            #if (0) // 32 > 40

            //??? ????????????? ???-???????????
            // #else

            #endif

            break;
        }
        case 6:
        {
            #if (0) // 32 > 48

            //??? ????????????? ???-???????????
            // #else

            #endif

            break;
        }
        case 7:
        {
            #if (0) // 32 > 56

            //??? ????????????? ???-???????????
            // #else

            #endif

            break;
        }
        default:
        {
            FCL_DATA = FCV_0cc51_gLCD_SSD1306_i2c1__DRAM0[FCL_X1];

        }
    }

    FCL_OLD_DATA = FCL_DATA;

    if (FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR)
    {

        FCL_DATA = FCL_DATA | (0x01 << FCL_MOD_Y);

    } else {

        FCL_DATA = FCL_DATA & (~(0x01 << FCL_MOD_Y));

    }

    if (FCL_OLD_DATA == FCL_DATA)
    {

    } else {

        FCD_0cc51_gLCD_SSD1306_i2c1__Goto_XY(FCL_X1, FCL_Y1);

        FCD_0cc51_gLCD_SSD1306_i2c1__SendData(FCL_DATA);

        switch (FCL_Y1 >> 3)
        {
            case 1:
            {
                #if (1) // 32 > 8

                    FCV_0cc51_gLCD_SSD1306_i2c1__DRAM1[FCL_X1] = FCL_DATA;

                // #else

                //??? ????????????? ???-???????????
                #endif

                break;
            }
            case 2:
            {
                #if (1) // 32 > 16

                    FCV_0cc51_gLCD_SSD1306_i2c1__DRAM2[FCL_X1] = FCL_DATA;

                // #else

                //??? ????????????? ???-???????????
                #endif

                break;
            }
            case 3:
            {
                #if (1) // 32 > 24

                    FCV_0cc51_gLCD_SSD1306_i2c1__DRAM3[FCL_X1] = FCL_DATA;

                // #else

                //??? ????????????? ???-???????????
                #endif

                break;
            }
            case 4:
            {
                #if (0) // 32 > 32

                //??? ????????????? ???-???????????
                // #else

                #endif

                break;
            }
            case 5:
            {
                #if (0) // 32 > 40

                //??? ????????????? ???-???????????
                // #else

                #endif

                break;
            }
            case 6:
            {
                #if (0) // 32 > 48

                //??? ????????????? ???-???????????
                // #else

                #endif

                break;
            }
            case 7:
            {
                #if (0) // 32 > 56

                //??? ????????????? ???-???????????
                // #else

                #endif

                break;
            }
            default:
            {
                FCV_0cc51_gLCD_SSD1306_i2c1__DRAM0[FCL_X1] = FCL_DATA;

            }
        }

    }

}

/*=----------------------------------------------------------------------=*\
   Use :????????? ??? ??????? Goto_XY
       :  X : MX_UINT8
       :  Y : MX_UINT8
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__Goto_XY(MX_UINT8 FCL_X, MX_UINT8 FCL_Y)
{
    //?????????? ????????? ??????????
    MX_UINT8 FCL_CHIP;
    MX_UINT8 FCL_CMD;


    FCV_0cc51_gLCD_SSD1306_i2c1__CURRENTX = FCL_X;
    FCV_0cc51_gLCD_SSD1306_i2c1__CURRENTY = FCL_Y;
    FCV_0cc51_gLCD_SSD1306_i2c1__PAGE = FCL_Y >> 3;

    #if (0) // 128 < 128

    //??? ????????????? ???-???????????
    // #else

    #endif

    FC_CAL_I2C_Master_Start_1();

    FC_CAL_I2C_Master_TxByte_1(120);

    FC_CAL_I2C_Master_TxByte_1(0x00);

    FC_CAL_I2C_Master_TxByte_1(0xb0 | FCV_0cc51_gLCD_SSD1306_i2c1__PAGE);

    FC_CAL_I2C_Master_TxByte_1(0x10 | (FCV_0cc51_gLCD_SSD1306_i2c1__CURRENTX >> 4));

    FC_CAL_I2C_Master_TxByte_1(FCV_0cc51_gLCD_SSD1306_i2c1__CURRENTX & 0x0F);

    FC_CAL_I2C_Master_Stop_1();

}

/*=----------------------------------------------------------------------=*\
   Use :Allows the display to be switched on and off
       :
       :????????? ??? ??????? ControlDisplay
       :  Control : 0=Off, 1=On
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__ControlDisplay(MX_UINT8 FCL_CONTROL)
{

    if (FCL_CONTROL > 0)
    {

        FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xAF);

    } else {

        FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xAE);

    }

}

/*=----------------------------------------------------------------------=*\
   Use :????????? ??? ??????? SendData
       :  Byte : MX_UINT8
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__SendData(MX_UINT8 FCL_BYTE)
{

    FC_CAL_I2C_Master_Start_1();

    FC_CAL_I2C_Master_TxByte_1(120);

    FC_CAL_I2C_Master_TxByte_1(0x40);

    FC_CAL_I2C_Master_TxByte_1(FCL_BYTE);

    FC_CAL_I2C_Master_Stop_1();

}

/*=----------------------------------------------------------------------=*\
   Use :Controls the way data is printed out on the display allowing multiple different viewing orientations. Default is 0.
       :
       :????????? ??? ??????? SetDisplayOrientation
       :  Orientation : 0=Default, 1=90??CW, 2=180??CW, 3=270??CW
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__SetDisplayOrientation(MX_UINT8 FCL_ORIENTATION)
{

    FCV_0cc51_gLCD_SSD1306_i2c1__ORIENTATION = FCL_ORIENTATION;

}

/*=----------------------------------------------------------------------=*\
   Use :Sets a pixel with the current background colour at pixel location X, Y.
       :
       :????????? ??? ??????? BPlot
       :  X1 : MX_UINT16
       :  Y1 : MX_UINT16
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__BPlot(MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1)
{
    //?????????? ????????? ??????????
    MX_UINT16 FCL_TEMP;
    MX_UINT8 FCL_MOD_Y;
    MX_UINT8 FCL_DATA;
    MX_UINT8 FCL_OLD_DATA;


    switch (FCV_0cc51_gLCD_SSD1306_i2c1__ORIENTATION)
    {
        case 1:
        {
            FCL_TEMP = 128 - (FCL_Y1 + 1);
            FCL_Y1 = FCL_X1;
            FCL_X1 = FCL_TEMP;

            break;
        }
        case 2:
        {
            FCL_X1 = 128 - (FCL_X1 + 1);
            FCL_Y1 = 32 - (FCL_Y1 + 1);

            break;
        }
        case 3:
        {
            FCL_TEMP = FCL_Y1;
            FCL_Y1 = 32 - (FCL_X1 + 1);
            FCL_X1 = FCL_TEMP;

            break;
        }
        // default:

    }

    FCL_MOD_Y = FCL_Y1 & 0x07;

    switch (FCL_Y1 >> 3)
    {
        case 1:
        {
            #if (1) // 32 > 8

                FCL_DATA = FCV_0cc51_gLCD_SSD1306_i2c1__DRAM1[FCL_X1];

            // #else

            //??? ????????????? ???-???????????
            #endif

            break;
        }
        case 2:
        {
            #if (1) // 32 > 16

                FCL_DATA = FCV_0cc51_gLCD_SSD1306_i2c1__DRAM2[FCL_X1];

            // #else

            //??? ????????????? ???-???????????
            #endif

            break;
        }
        case 3:
        {
            #if (1) // 32 > 24

                FCL_DATA = FCV_0cc51_gLCD_SSD1306_i2c1__DRAM3[FCL_X1];

            // #else

            //??? ????????????? ???-???????????
            #endif

            break;
        }
        case 4:
        {
            #if (0) // 32 > 32

            //??? ????????????? ???-???????????
            // #else

            #endif

            break;
        }
        case 5:
        {
            #if (0) // 32 > 40

            //??? ????????????? ???-???????????
            // #else

            #endif

            break;
        }
        case 6:
        {
            #if (0) // 32 > 48

            //??? ????????????? ???-???????????
            // #else

            #endif

            break;
        }
        case 7:
        {
            #if (0) // 32 > 56

            //??? ????????????? ???-???????????
            // #else

            #endif

            break;
        }
        default:
        {
            FCL_DATA = FCV_0cc51_gLCD_SSD1306_i2c1__DRAM0[FCL_X1];

        }
    }

    FCL_OLD_DATA = FCL_DATA;

    if (FCV_0cc51_gLCD_SSD1306_i2c1__BACKGROUND_COL_VAR)
    {

        FCL_DATA = FCL_DATA | (0x01 << FCL_MOD_Y);

    } else {

        FCL_DATA = FCL_DATA & (~(0x01 << FCL_MOD_Y));

    }

    if (FCL_OLD_DATA == FCL_DATA)
    {

    } else {

        FCD_0cc51_gLCD_SSD1306_i2c1__Goto_XY(FCL_X1, FCL_Y1);

        FCD_0cc51_gLCD_SSD1306_i2c1__SendData(FCL_DATA);

        switch (FCL_Y1 >> 3)
        {
            case 1:
            {
                #if (1) // 32 > 8

                    FCV_0cc51_gLCD_SSD1306_i2c1__DRAM1[FCL_X1] = FCL_DATA;

                // #else

                //??? ????????????? ???-???????????
                #endif

                break;
            }
            case 2:
            {
                #if (1) // 32 > 16

                    FCV_0cc51_gLCD_SSD1306_i2c1__DRAM2[FCL_X1] = FCL_DATA;

                // #else

                //??? ????????????? ???-???????????
                #endif

                break;
            }
            case 3:
            {
                #if (1) // 32 > 24

                    FCV_0cc51_gLCD_SSD1306_i2c1__DRAM3[FCL_X1] = FCL_DATA;

                // #else

                //??? ????????????? ???-???????????
                #endif

                break;
            }
            case 4:
            {
                #if (0) // 32 > 32

                //??? ????????????? ???-???????????
                // #else

                #endif

                break;
            }
            case 5:
            {
                #if (0) // 32 > 40

                //??? ????????????? ???-???????????
                // #else

                #endif

                break;
            }
            case 6:
            {
                #if (0) // 32 > 48

                //??? ????????????? ???-???????????
                // #else

                #endif

                break;
            }
            case 7:
            {
                #if (0) // 32 > 56

                //??? ????????????? ???-???????????
                // #else

                #endif

                break;
            }
            default:
            {
                FCV_0cc51_gLCD_SSD1306_i2c1__DRAM0[FCL_X1] = FCL_DATA;

            }
        }

    }

}

/*=----------------------------------------------------------------------=*\
   Use :This macro prints a string of characters to the Graphical LCD.
       :
       :????????? ??? ??????? Print
       :  Str[20] : String of characters to send to the display.
       :  X1 : X pixel coordinate to set the output string position.
       :  Y1 : Y pixel coordinate to set the output string position.
       :  Font : Range: 0 to 31 - 0=5x8, 1=10x8, 2=10x16, 3=5x16, 4-31=Extended Sizes
       :  Transparent : Specifies if the background of the text is drawn - 0 = Background colour is drawn, 1 = Background colour not drawn.
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__Print(MX_CHAR *FCL_STR, MX_UINT16 FCLsz_STR, MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1, MX_UINT8 FCL_FONT, MX_UINT8 FCL_TRANSPARENT)
{
    //?????????? ????????? ??????????
    MX_UINT8 FCL_XPIX;
    MX_UINT8 FCL_YPIX;
    MX_UINT8 FCL_POS_STR;
    MX_UINT8 FCL_LEN_STR;
    MX_UINT8 FCL_COUNT;
    MX_UINT8 FCL_XCOUNT;
    MX_UINT8 FCL_YCOUNT;
    MX_UINT8 FCL_HEIGHT;
    MX_UINT8 FCL_WIDTH;
    MX_UINT8 FCL_IDX;
    MX_UINT8 FCL_FONT_WIDTH = (0x1);
    MX_UINT8 FCL_FONT_HEIGHT = (0x1);
    MX_UINT8 FCL_POSITION;
#define FCLsz_TEMP 6
    MX_UINT8 FCL_TEMP[FCLsz_TEMP];


    switch (FCL_FONT)
    {
        case 1:
        {
            FCL_FONT_WIDTH = 2;

            break;
        }
        case 2:
        {
            FCL_FONT_WIDTH = 2;
            FCL_FONT_HEIGHT = 2;

            break;
        }
        case 3:
        {
            FCL_FONT_HEIGHT = 2;

            break;
        }
        case 4:
        {
            FCL_FONT_WIDTH = 2;
            FCL_FONT_HEIGHT = 3;

            break;
        }
        case 5:
        {
            FCL_FONT_WIDTH = 2;
            FCL_FONT_HEIGHT = 4;

            break;
        }
        case 6:
        {
            FCL_FONT_WIDTH = 2;
            FCL_FONT_HEIGHT = 5;

            break;
        }
        case 7:
        {
            FCL_FONT_WIDTH = 2;
            FCL_FONT_HEIGHT = 6;

            break;
        }
        case 8:
        {
            FCL_FONT_WIDTH = 3;
            FCL_FONT_HEIGHT = 1;

            break;
        }
        case 9:
        {
            FCL_FONT_WIDTH = 3;
            FCL_FONT_HEIGHT = 2;

            break;
        }
        case 10:
        {
            FCL_FONT_WIDTH = 3;
            FCL_FONT_HEIGHT = 3;

            break;
        }
        // default:

    }

    switch (FCL_FONT)
    {
        case 11:
        {
            FCL_FONT_WIDTH = 3;
            FCL_FONT_HEIGHT = 4;

            break;
        }
        case 12:
        {
            FCL_FONT_WIDTH = 3;
            FCL_FONT_HEIGHT = 5;

            break;
        }
        case 13:
        {
            FCL_FONT_WIDTH = 3;
            FCL_FONT_HEIGHT = 6;

            break;
        }
        case 14:
        {
            FCL_FONT_WIDTH = 4;
            FCL_FONT_HEIGHT = 1;

            break;
        }
        case 15:
        {
            FCL_FONT_WIDTH = 4;
            FCL_FONT_HEIGHT = 2;

            break;
        }
        case 16:
        {
            FCL_FONT_WIDTH = 4;
            FCL_FONT_HEIGHT = 3;

            break;
        }
        case 17:
        {
            FCL_FONT_WIDTH = 4;
            FCL_FONT_HEIGHT = 4;

            break;
        }
        case 18:
        {
            FCL_FONT_WIDTH = 4;
            FCL_FONT_HEIGHT = 5;

            break;
        }
        case 19:
        {
            FCL_FONT_WIDTH = 4;
            FCL_FONT_HEIGHT = 6;

            break;
        }
        case 20:
        {
            FCL_FONT_WIDTH = 5;
            FCL_FONT_HEIGHT = 1;

            break;
        }
        // default:

    }

    switch (FCL_FONT)
    {
        case 21:
        {
            FCL_FONT_WIDTH = 5;
            FCL_FONT_HEIGHT = 2;

            break;
        }
        case 22:
        {
            FCL_FONT_WIDTH = 5;
            FCL_FONT_HEIGHT = 3;

            break;
        }
        case 23:
        {
            FCL_FONT_WIDTH = 5;
            FCL_FONT_HEIGHT = 4;

            break;
        }
        case 24:
        {
            FCL_FONT_WIDTH = 5;
            FCL_FONT_HEIGHT = 5;

            break;
        }
        case 25:
        {
            FCL_FONT_WIDTH = 5;
            FCL_FONT_HEIGHT = 6;

            break;
        }
        case 26:
        {
            FCL_FONT_WIDTH = 6;
            FCL_FONT_HEIGHT = 1;

            break;
        }
        case 27:
        {
            FCL_FONT_WIDTH = 6;
            FCL_FONT_HEIGHT = 2;

            break;
        }
        case 28:
        {
            FCL_FONT_WIDTH = 6;
            FCL_FONT_HEIGHT = 3;

            break;
        }
        case 29:
        {
            FCL_FONT_WIDTH = 6;
            FCL_FONT_HEIGHT = 4;

            break;
        }
        case 30:
        {
            FCL_FONT_WIDTH = 6;
            FCL_FONT_HEIGHT = 5;

            break;
        }
        // default:

    }

    switch (FCL_FONT)
    {
        case 31:
        {
            FCL_FONT_WIDTH = 6;
            FCL_FONT_HEIGHT = 6;

            break;
        }
        // default:

    }

    FCL_XCOUNT = 0;
    FCL_IDX = 0;
    FCL_TEMP[5] = 0;

    FCL_LEN_STR = FCI_GETLENGTH(FCL_STR, FCLsz_STR);

    while (FCL_IDX < FCL_LEN_STR)
    {

        FCL_POS_STR = FCL_STR[FCL_IDX] - 32;

        FCL_COUNT = 0;

        while (FCL_COUNT < 5)
        {

            FCL_TEMP[FCL_COUNT] = FCD_0ba72_Base_GLCD__ReadASCIILUT(FCL_POS_STR, FCL_COUNT);

            FCL_COUNT = FCL_COUNT + 1;


        }

        FCL_XPIX = 0;
        FCL_TEMP[FCL_COUNT] = 0;

        while (FCL_XPIX < 6)
        {

            FCL_WIDTH = 0;

            while (FCL_WIDTH < FCL_FONT_WIDTH)
            {

                FCL_YCOUNT = 0;

                FCL_YPIX = 0;

                while (FCL_YPIX < 8)
                {

                    FCL_HEIGHT = 0;

                    while (FCL_HEIGHT < FCL_FONT_HEIGHT)
                    {

                        if (FCL_TEMP[FCL_XPIX] & (0x01 << FCL_YPIX))
                        {

                            FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X1 + FCL_XCOUNT, FCL_Y1 + FCL_YCOUNT);

                        } else {

                            if (FCL_TRANSPARENT == 0)
                            {

                                FCD_0cc51_gLCD_SSD1306_i2c1__BPlot(FCL_X1 + FCL_XCOUNT, FCL_Y1 + FCL_YCOUNT);

                            // } else {

                            }

                        }

                        FCL_HEIGHT = FCL_HEIGHT + 1;
                        FCL_YCOUNT = FCL_YCOUNT + 1;


                    }

                    FCL_YPIX = FCL_YPIX + 1;


                }

                FCL_WIDTH = FCL_WIDTH + 1;
                FCL_XCOUNT = FCL_XCOUNT + 1;


            }

            FCL_XPIX = FCL_XPIX + 1;


        }

        FCL_IDX = FCL_IDX + 1;


    }

    //?????????? ????????? ??????????
#undef FCLsz_TEMP
}

/*=----------------------------------------------------------------------=*\
   Use :Sets the display contrast from 0 to 255.
       :
       :????????? ??? ??????? ControlContrast
       :  Contrast : Range 0 - 255, Default 207
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__ControlContrast(MX_UINT8 FCL_CONTRAST)
{

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x81);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(FCL_CONTRAST);

}

/*=----------------------------------------------------------------------=*\
   Use :This macro clears the display of any previous output by overwriting the entire display with the background colour.
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__ClearDisplay()
{
    //?????????? ????????? ??????????
    MX_UINT8 FCL_PAGE = (0x0);
    MX_UINT8 FCL_COLUMN = (0x0);
    MX_UINT8 FCL_DATA;


    if (FCV_0cc51_gLCD_SSD1306_i2c1__BACKGROUND_COL_VAR)
    {

        FCL_DATA = 255;

    } else {

        FCL_DATA = 0;

    }

    while (FCL_PAGE < 8)
    {

        FCD_0cc51_gLCD_SSD1306_i2c1__Goto_XY(0, FCL_PAGE << 3);

        FCL_COLUMN = 0;

        FC_CAL_I2C_Master_Start_1();

        FC_CAL_I2C_Master_TxByte_1(120);

        FC_CAL_I2C_Master_TxByte_1(0x40);

        while (FCL_COLUMN < 128)
        {

            switch (FCL_PAGE)
            {
                case 1:
                {
                    #if (1) // 32 > 8

                        FCV_0cc51_gLCD_SSD1306_i2c1__DRAM1[FCL_COLUMN] = FCL_DATA;

                    // #else

                    //??? ????????????? ???-???????????
                    #endif

                    break;
                }
                case 2:
                {
                    #if (1) // 32 > 16

                        FCV_0cc51_gLCD_SSD1306_i2c1__DRAM2[FCL_COLUMN] = FCL_DATA;

                    // #else

                    //??? ????????????? ???-???????????
                    #endif

                    break;
                }
                case 3:
                {
                    #if (1) // 32 > 24

                        FCV_0cc51_gLCD_SSD1306_i2c1__DRAM3[FCL_COLUMN] = FCL_DATA;

                    // #else

                    //??? ????????????? ???-???????????
                    #endif

                    break;
                }
                case 4:
                {
                    #if (0) // 32 > 32

                    //??? ????????????? ???-???????????
                    // #else

                    #endif

                    break;
                }
                case 5:
                {
                    #if (0) // 32 > 40

                    //??? ????????????? ???-???????????
                    // #else

                    #endif

                    break;
                }
                case 6:
                {
                    #if (0) // 32 > 48

                    //??? ????????????? ???-???????????
                    // #else

                    #endif

                    break;
                }
                case 7:
                {
                    #if (0) // 32 > 56

                    //??? ????????????? ???-???????????
                    // #else

                    #endif

                    break;
                }
                default:
                {
                    FCV_0cc51_gLCD_SSD1306_i2c1__DRAM0[FCL_COLUMN] = FCL_DATA;

                }
            }

            FC_CAL_I2C_Master_TxByte_1(FCL_DATA);

            FCL_COLUMN = FCL_COLUMN + 1;


        }

        FC_CAL_I2C_Master_Stop_1();

        FCL_PAGE = FCL_PAGE + 1;


    }

}

/*=----------------------------------------------------------------------=*\
   Use :Specifies the colour of the background by creating a mixture of red, green and blue.
       :
       :????????? ??? ??????? SetBackgroundColour
       :  PixelColour : 0=White, 1=Black
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__SetBackgroundColour(MX_UINT8 FCL_PIXELCOLOUR)
{

    if (FCL_PIXELCOLOUR)
    {

        FCV_0cc51_gLCD_SSD1306_i2c1__BACKGROUND_COL_VAR = FCV_0cc51_gLCD_SSD1306_i2c1__WHITE;

    } else {

        FCV_0cc51_gLCD_SSD1306_i2c1__BACKGROUND_COL_VAR = FCV_0cc51_gLCD_SSD1306_i2c1__BLACK;

    }

}

/*=----------------------------------------------------------------------=*\
   Use :Draws a circle object on the display with the center of the circle at the location X,Y
       :
       :????????? ??? ??????? DrawCircle
       :  X : X Coordinate for the center of the circle
       :  Y : Y coordinate for the center of the circle
       :  Radius : Radius of the circle specified in pixels
       :  Transparent : 0=Fill inside circle using background colour / 1=Draw outer circle only
       :  Solid : 0=Use Transparent Setting / 1=Fill with foreground colour
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__DrawCircle(MX_UINT16 FCL_X, MX_UINT16 FCL_Y, MX_UINT16 FCL_RADIUS, MX_UINT8 FCL_TRANSPARENT, MX_UINT8 FCL_SOLID)
{
    //?????????? ????????? ??????????
    MX_SINT16 FCL_D;
    MX_SINT16 FCL_CURX;
    MX_SINT16 FCL_CURY;
    MX_UINT32 FCL_BGCOL;
    MX_UINT32 FCL_FGCOL;
    MX_UINT8 FCL_REP = (0x0);


    if (FCL_SOLID == 1)
    {

FCC_DrawCircle_A:
;

        FCL_D = 3 - (FCL_RADIUS << 1);

        FCL_CURX = 0;
        FCL_CURY = FCL_RADIUS;

        while (FCL_CURX <= FCL_CURY)
        {

            if (FCL_CURY > 0)
            {

                FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(FCL_X - FCL_CURY, FCL_Y + FCL_CURX, FCL_X + FCL_CURY, FCL_Y + FCL_CURX);

                FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(FCL_X - FCL_CURY, FCL_Y - FCL_CURX, FCL_X + FCL_CURY, FCL_Y - FCL_CURX);

            // } else {

            }

            if (FCL_CURX > 0)
            {

                FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(FCL_X - FCL_CURX, FCL_Y - FCL_CURY, FCL_X + FCL_CURX, FCL_Y - FCL_CURY);

                FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(FCL_X - FCL_CURX, FCL_Y + FCL_CURY, FCL_X + FCL_CURX, FCL_Y + FCL_CURY);

            // } else {

            }

            if (FCL_D < 0)
            {

                FCL_D = FCL_D + ((FCL_CURX << 2) + 6);

            } else {

                FCL_D = FCL_D + (((FCL_CURX - FCL_CURY) << 2) + 10);

                FCL_CURY = FCL_CURY - 1;

            }

            FCL_CURX = FCL_CURX + 1;


        }

    } else {

        if (FCL_TRANSPARENT == 1)
        {

FCC_DrawCircle_B:
;

            FCL_D = 3 - (FCL_RADIUS << 1);

            FCL_CURX = 0;
            FCL_CURY = FCL_RADIUS;

            while (FCL_CURX <= FCL_CURY)
            {

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X + FCL_CURX, FCL_Y - FCL_CURY);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X - FCL_CURX, FCL_Y - FCL_CURY);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X + FCL_CURY, FCL_Y - FCL_CURX);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X - FCL_CURY, FCL_Y - FCL_CURX);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X + FCL_CURX, FCL_Y + FCL_CURY);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X - FCL_CURX, FCL_Y + FCL_CURY);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X + FCL_CURY, FCL_Y + FCL_CURX);

                FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X - FCL_CURY, FCL_Y + FCL_CURX);

                if (FCL_D < 0)
                {

                    FCL_D = FCL_D + ((FCL_CURX << 2) + 6);

                } else {

                    FCL_D = FCL_D + (((FCL_CURX - FCL_CURY) << 2) + 10);

                    FCL_CURY = FCL_CURY - 1;

                }

                FCL_CURX = FCL_CURX + 1;


            }

        } else {

            FCL_FGCOL = FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR;
            FCL_BGCOL = FCV_0cc51_gLCD_SSD1306_i2c1__BACKGROUND_COL_VAR;

            FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR = FCL_BGCOL;

            FCL_REP = 1;

            goto FCC_DrawCircle_A;

        }

    }

    if (FCL_REP == 1)
    {

        FCL_REP = FCL_REP + 1;

        FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR = FCL_FGCOL;

        goto FCC_DrawCircle_B;

    // } else {

    }

}

/*=----------------------------------------------------------------------=*\
   Use :Specifies the colour of the foreground by creating a mixture of red, green and blue.
       :
       :????????? ??? ??????? SetForegroundColour
       :  PixelColour : 0=White, 1=Black
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__SetForegroundColour(MX_UINT8 FCL_PIXELCOLOUR)
{

    if (FCL_PIXELCOLOUR)
    {

        FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR = FCV_0cc51_gLCD_SSD1306_i2c1__WHITE;

    } else {

        FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR = FCV_0cc51_gLCD_SSD1306_i2c1__BLACK;

    }

}

/*=----------------------------------------------------------------------=*\
   Use :Draws a rectangle with the current foreground colour from pixel loaction X1, Y1 to pixel location X2, Y2
       :
       :????????? ??? ??????? DrawRectangle
       :  X1 : MX_UINT16
       :  Y1 : MX_UINT16
       :  X2 : MX_UINT16
       :  Y2 : MX_UINT16
       :  Transparent : Chooses the transparency of the box - 0 = Box contains background colour, 1 = Box contains previous pixel data.
       :  Solid : Chooses to fill the box with colour - 0 = Box contains transparency data, 1 = Box contains foreground colour.
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__DrawRectangle(MX_UINT16 FCL_X1, MX_UINT16 FCL_Y1, MX_UINT16 FCL_X2, MX_UINT16 FCL_Y2, MX_UINT8 FCL_TRANSPARENT, MX_UINT8 FCL_SOLID)
{
    //?????????? ????????? ??????????
    MX_UINT16 FCL_XMIN;
    MX_UINT16 FCL_XMAX;
    MX_UINT16 FCL_YMIN;
    MX_UINT16 FCL_YMAX;


    FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(FCL_X1, FCL_Y1, FCL_X2, FCL_Y1);

    FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(FCL_X2, FCL_Y1, FCL_X2, FCL_Y2);

    FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(FCL_X1, FCL_Y2, FCL_X2, FCL_Y2);

    FCD_0cc51_gLCD_SSD1306_i2c1__DrawLine(FCL_X1, FCL_Y1, FCL_X1, FCL_Y2);

    if (FCL_TRANSPARENT == 0)
    {

        if (FCL_X1 > FCL_X2)
        {

            FCL_XMAX = FCL_X1;
            FCL_XMIN = FCL_X2 + 1;

        } else {

            FCL_XMAX = FCL_X2;
            FCL_XMIN = FCL_X1 + 1;

        }

        if (FCL_Y1 > FCL_Y2)
        {

            FCL_YMAX = FCL_Y1;
            FCL_YMIN = FCL_Y2 + 1;

        } else {

            FCL_YMAX = FCL_Y2;
            FCL_YMIN = FCL_Y1 + 1;

        }

        FCL_Y1 = FCL_YMIN;

        while (FCL_Y1 < FCL_YMAX)
        {

            FCL_X1 = FCL_XMIN;

            while (FCL_X1 < FCL_XMAX)
            {

                if (FCL_SOLID)
                {

                    FCD_0cc51_gLCD_SSD1306_i2c1__Plot(FCL_X1, FCL_Y1);

                } else {

                    FCD_0cc51_gLCD_SSD1306_i2c1__BPlot(FCL_X1, FCL_Y1);

                }

                FCL_X1 = FCL_X1 + 1;


            }

            FCL_Y1 = FCL_Y1 + 1;


        }

    // } else {

    }

}

/*=----------------------------------------------------------------------=*\
   Use :The Init macro must be called once to initialise the Graphical LCD display before any other Graphical LCD component macros are called.
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__Initialise()
{
    //?????????? ????????? ??????????
    MX_UINT8 FCL_RED;
    MX_UINT8 FCL_GREEN;
    MX_UINT8 FCL_BLUE;


    FC_CAL_I2C_Master_Init_1();

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xAE);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x00);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x10);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x40);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x81);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xCF);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xA1);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xC8);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xA6);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xA8);

    #if (0) // 32 == 64

    //??? ????????????? ???-???????????
    #else

        #if (1) // 32 == 32

            FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x1F);

        #else

        //??? ????????????? ???-???????????
        #endif

    #endif

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xD3);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x00);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xD5);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x80);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xD9);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xF1);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xDA);

    #if (0) // 0 == 1

    //??? ????????????? ???-???????????
    #else

        FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x02);

    #endif

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xDB);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x40);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x20);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x02);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x8D);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0x14);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xA4);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xA6);

    FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xAF);

    #if (1) // 16777215 > 0

        FCV_0cc51_gLCD_SSD1306_i2c1__FOREGROUND_COL_VAR = FCV_0cc51_gLCD_SSD1306_i2c1__WHITE;

    #else

    //??? ????????????? ???-???????????
    #endif

    #if (0) // 0 > 0

    //??? ????????????? ???-???????????
    #else

        FCV_0cc51_gLCD_SSD1306_i2c1__BACKGROUND_COL_VAR = FCV_0cc51_gLCD_SSD1306_i2c1__BLACK;

    #endif

    FCD_0cc51_gLCD_SSD1306_i2c1__ClearDisplay();

    FCD_0cc51_gLCD_SSD1306_i2c1__Goto_XY(0, 0);

}

/*=----------------------------------------------------------------------=*\
   Use :
\*=----------------------------------------------------------------------=*/
void FCD_0cc51_gLCD_SSD1306_i2c1__InvertDisplay()
{

    if (FCV_0cc51_gLCD_SSD1306_i2c1__INVERTED == 0)
    {

        FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xA7);

        FCV_0cc51_gLCD_SSD1306_i2c1__INVERTED = 1;

    } else {

        FCD_0cc51_gLCD_SSD1306_i2c1__SendCommand(0xA6);

        FCV_0cc51_gLCD_SSD1306_i2c1__INVERTED = 0;

    }

}


/*========================================================================*\
   Use :bezel_radiused1
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :scale_linear
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :dash_scale_vert1
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :ASCIIData
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :PWM_Digital
       :?????????? ????????
\*========================================================================*/
/*=----------------------------------------------------------------------=*\
   Use :Gets a byte of the embedded ASCII font data.
       :
       :????????? ??? ??????? ReadASCIILUT
       :  pos_str : ASCII position -32 so A = 'A' - 32 = 33
       :  count : Font column Ranging 0-4
       :
       :?????????? : MX_UINT8
\*=----------------------------------------------------------------------=*/
MX_UINT8 FCD_0ba71_PWM_Digital__ReadASCIILUT(MX_UINT8 FCL_POS_STR, MX_UINT8 FCL_COUNT)
{
    //?????????? ????????? ??????????
    MX_UINT16 FCL_POSITION;
    MX_UINT8 FCR_RETVAL;


    #if (0) // 0 == 1

    //??? ????????????? ???-???????????
    // #else

    #endif

    return (FCR_RETVAL);

}


/*========================================================================*\
   Use :led
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :fcdhelper
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :cal_pwm
       :?????????? ????????
\*========================================================================*/

/*========================================================================*\
   Use :PWM1
       :?????????? ????????
\*========================================================================*/

/*=----------------------------------------------------------------------=*\
   Use :Enables a PWM channel as an output overriding the default output pin state.
\*=----------------------------------------------------------------------=*/
void FCD_0df41_PWM1__Enable()
{

    FCV_0df41_PWM1__ENABLED = 1;

    FC_CAL_PWM_ChangePeriod_1(255, 1);

    FC_CAL_PWM_Enable_1();

}

/*========================================================================*\
   Use :panel
       :?????????? ????????
\*========================================================================*/


/*========================================================================*\
   Use :???????
\*========================================================================*/
int main()
{
    MCUSR=0x00;
    wdt_disable();
    FCD_0df41_PWM1__Enable();
    FCD_0cc51_gLCD_SSD1306_i2c1__Initialise();
    while (1)
    {
        FCV_POTENT = GET_PORT_MASK(B,0x08);
        FCV_CURRENT_T = GET_PORT_MASK(B,0x10);
        FCV_DELTA = FCV_POTENT - FCV_CURRENT_T;
        if (FCV_DELTA > 0)
        {
            if (FCV_DELTA >= 75)
            {
                FCV_PWM_LVL = 255;
            }
            if ((FCV_DELTA >= 25) && (FCV_DELTA < 75))
            {
                FCV_PWM_LVL = 150;
            }
            if ((FCV_DELTA >= 5) && (FCV_DELTA < 25))
            {
                FCV_PWM_LVL = 40;
            }
        } else {
            FCV_PWM_LVL = 0;
        }
        FC_CAL_PWM_SetDuty8Bit_1(FCV_PWM_LVL);
        FCD_0cc51_gLCD_SSD1306_i2c1__ClearDisplay();
        FCD_0cc51_gLCD_SSD1306_i2c1__Print("Current:", 9, 0, 1, 0, 0);
        FCD_0cc51_gLCD_SSD1306_i2c1__PrintNumber(FCV_CURRENT_T, 50, 1, 0, 0);
        FCD_0cc51_gLCD_SSD1306_i2c1__Print("Target:", 8, 0, 11, 0, 0);
        FCD_0cc51_gLCD_SSD1306_i2c1__PrintNumber(FCV_POTENT, 50, 11, 0, 0);
        FCD_0cc51_gLCD_SSD1306_i2c1__Print("PWM %:", 7, 0, 21, 0, 0);
        FCD_0cc51_gLCD_SSD1306_i2c1__PrintNumber(FCV_CURRENT_T, 50, 21, 0, 0);
        FCI_DELAYBYTE_S(2);
    }
    mainendloop: goto mainendloop;
}