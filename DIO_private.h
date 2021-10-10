#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#define DDRA    *((volatile u8*)0x3A)
#define DDRB    *((volatile u8*)0x37)
#define DDRC    *((volatile u8*)0x34)
#define DDRD    *((volatile u8*)0x31)

#define PORTA    *((volatile u8*)0x3b)
#define PORTB    *((volatile u8*)0x38)
#define PORTC    *((volatile u8*)0x35)
#define PORTD    *((volatile u8*)0x32)

#define PINA    *((volatile u8*)0x39)
#define PINB    *((volatile u8*)0x36)
#define PINC    *((volatile u8*)0x33)
#define PIND    *((volatile u8*)0x30)

#define DIO_U8_PORTA_START  0
#define DIO_U8_PORTA_END    7

#define DIO_U8_PORTB_START  8
#define DIO_U8_PORTB_END    15

#define DIO_U8_PORTC_START  16
#define DIO_U8_PORTC_END    23

#define DIO_U8_PORTD_START  24
#define DIO_U8_PORTD_END    31

#define	DIO_u8_PORTA_DIR		CONC_BIT(DIO_u8_DIR_PIN_7,DIO_u8_DIR_PIN_6,DIO_u8_DIR_PIN_5,DIO_u8_DIR_PIN_4,DIO_u8_DIR_PIN_3,DIO_u8_DIR_PIN_2,DIO_u8_DIR_PIN_1,DIO_u8_DIR_PIN_0)
#define DIO_u8_PORTB_DIR		CONC_BIT(DIO_u8_DIR_PIN_15,DIO_u8_DIR_PIN_14,DIO_u8_DIR_PIN_13,DIO_u8_DIR_PIN_12,DIO_u8_DIR_PIN_11,DIO_u8_DIR_PIN_10,DIO_u8_DIR_PIN_9,DIO_u8_DIR_PIN_8)
#define DIO_u8_PORTC_DIR		CONC_BIT(DIO_u8_DIR_PIN_23,DIO_u8_DIR_PIN_22,DIO_u8_DIR_PIN_21,DIO_u8_DIR_PIN_20,DIO_u8_DIR_PIN_19,DIO_u8_DIR_PIN_18,DIO_u8_DIR_PIN_17,DIO_u8_DIR_PIN_16)
#define DIO_u8_PORTD_DIR		CONC_BIT(DIO_u8_DIR_PIN_31,DIO_u8_DIR_PIN_30,DIO_u8_DIR_PIN_29,DIO_u8_DIR_PIN_28,DIO_u8_DIR_PIN_27,DIO_u8_DIR_PIN_26,DIO_u8_DIR_PIN_25,DIO_u8_DIR_PIN_24)




#endif
