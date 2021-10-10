/***********************************/
/*Title       : DIO peripheral file*/
/*Auther      :Ghada Hussien       */
/*Release     :1.0                 */
/*Lasr Updata :Aug 15, 2021        */
/***********************************/
#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include  "STD_TYPES.h"

#define DIO_U8_PIN_0    0
#define DIO_U8_PIN_1    1
#define DIO_U8_PIN_2    2
#define DIO_U8_PIN_3    3
#define DIO_U8_PIN_4    4
#define DIO_U8_PIN_5    5
#define DIO_U8_PIN_6    6
#define DIO_U8_PIN_7    7
#define DIO_U8_PIN_8    8
#define DIO_U8_PIN_9    9
#define DIO_U8_PIN_10   10
#define DIO_U8_PIN_11   11
#define DIO_U8_PIN_12   12
#define DIO_U8_PIN_13   13
#define DIO_U8_PIN_14   14
#define DIO_U8_PIN_15   15
#define DIO_U8_PIN_16   16
#define DIO_U8_PIN_17   17
#define DIO_U8_PIN_18   18
#define DIO_U8_PIN_19   19
#define DIO_U8_PIN_20   20
#define DIO_U8_PIN_21   21
#define DIO_U8_PIN_22   22
#define DIO_U8_PIN_23   23
#define DIO_U8_PIN_24   24
#define DIO_U8_PIN_25   25
#define DIO_U8_PIN_26   26
#define DIO_U8_PIN_27   27
#define DIO_U8_PIN_28   28
#define DIO_U8_PIN_29   29
#define DIO_U8_PIN_30   30
#define DIO_U8_PIN_31   31



#define DIO_U8_HIGH         1
#define DIO_U8_LOW          0

#define DIO_U8_OUYPUT       1
#define DIO_U8_INPUT        0

#define DIO_U8_PORTA         0
#define DIO_U8_PORTB         1
#define DIO_U8_PORTC         2
#define DIO_U8_PORTD         3


void VidDioInit();
void DIO_VidSetPinDirection(u8 copy_u8Pin,u8 copy_u8Value);
void DIO_VidSetPinValue(u8 copy_u8Pin,u8 copy_u8Value);
u8 DIO_u8GetPinValue(u8 copy_u8Pin);

void DIO_VidSetPortDirection(u8 copy_u8Port,u8 copy_u8Value);
void DIO_VidSetPortValue(u8 copy_u8Port,u8 copy_u8Value);
u8    DIO_u8GetPortValue(u8 copy_u8Port);

void DIO_VidActivePullupPin(u8 copy_u8Pin);
void DIO_VidActivePullupPort(u8 copy_u8Port);
void DIO_ViddeactivePullupPin(u8 copy_u8Pin);






#endif
