/******************************************/
/*Title       : DIO peripheralprogram file*/
/*Auther      :Ghada Hussien              */
/*Release     :1.0                        */
/*Lasr Updata :Aug 15, 2021               */
/******************************************/

#include  "STD_TYPES.h"
#include  "BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_private.h"

void VidDioInit()
{
	DDRA = DIO_u8_PORTA_DIR;
	DDRB = DIO_u8_PORTB_DIR;
	DDRC = DIO_u8_PORTC_DIR;
	DDRD = DIO_u8_PORTD_DIR;
}

void DIO_VidSetPinValue(u8 copy_u8Pin,u8 copy_u8Value)
{
	if((copy_u8Pin>=DIO_U8_PORTA_START)&&(copy_u8Pin<=DIO_U8_PORTA_END))
	{
		if(copy_u8Value==DIO_U8_OUYPUT)
		{
			SET_BIT(PORTA,copy_u8Pin);
		}
		else if(copy_u8Value==DIO_U8_INPUT)
		{
			CLR_BIT(PORTA,copy_u8Pin);
		}
	}
	else if((copy_u8Pin>=DIO_U8_PORTB_START)&&(copy_u8Pin<=DIO_U8_PORTB_END))
	{
		copy_u8Pin=copy_u8Pin-8;
		if(copy_u8Value==DIO_U8_OUYPUT)
		{
			SET_BIT(PORTB,copy_u8Pin);
		}
		else if(copy_u8Value==DIO_U8_INPUT)
		{
			CLR_BIT(PORTB,copy_u8Pin);
		}
		
	}
	else if((copy_u8Pin>=DIO_U8_PORTC_START)&&(copy_u8Pin<=DIO_U8_PORTC_END))
	{
		copy_u8Pin=copy_u8Pin-16;
		if(copy_u8Value==DIO_U8_OUYPUT)
		{
			SET_BIT(PORTC,copy_u8Pin);
		}
		else if(copy_u8Value==DIO_U8_INPUT)
		{
			CLR_BIT(PORTC,copy_u8Pin);
		}
	}
	else if((copy_u8Pin>=DIO_U8_PORTD_START)&&(copy_u8Pin<=DIO_U8_PORTD_END))
	{
		copy_u8Pin=copy_u8Pin-24;
		if(copy_u8Value==DIO_U8_OUYPUT)
		{
			SET_BIT(PORTD,copy_u8Pin);
		}
		else if(copy_u8Value==DIO_U8_INPUT)
		{
			CLR_BIT(PORTD,copy_u8Pin);
		}
		
	}
	
}
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
u8 DIO_u8GetPinValue(u8 copy_u8Pin)
{
	u8 copy_u8LocalResult=0;
	if((copy_u8Pin>=DIO_U8_PORTA_START )&&(copy_u8Pin<=DIO_U8_PORTA_END ))
	{
		copy_u8LocalResult=GET_BIT(PINA,copy_u8Pin);
	}
	else if((copy_u8Pin>=DIO_U8_PORTB_START )&&(copy_u8Pin<=DIO_U8_PORTB_END ))
	{  copy_u8Pin=copy_u8Pin-8;
		copy_u8LocalResult=GET_BIT(PINB,copy_u8Pin);
	}
	else if((copy_u8Pin>=DIO_U8_PORTC_START )&&(copy_u8Pin<=DIO_U8_PORTC_END ))
	{  copy_u8Pin=copy_u8Pin-16;
		copy_u8LocalResult=GET_BIT(PINC,copy_u8Pin);
	}
	else if((copy_u8Pin>=DIO_U8_PORTD_START )&&(copy_u8Pin<=DIO_U8_PORTD_END ))
	{   copy_u8Pin=copy_u8Pin-24;
		copy_u8LocalResult=GET_BIT(PIND,copy_u8Pin);
	}
	return copy_u8LocalResult;
}
////////////////////////////////////////////////////////////////////////////////
void DIO_VidSetPinDirection(u8 copy_u8Pin,u8 copy_u8Value)
{
	if((copy_u8Pin>=DIO_U8_PORTA_START )&&(copy_u8Pin<=DIO_U8_PORTA_END ))
	{
		if(copy_u8Value==DIO_U8_HIGH)
		{
			SET_BIT(DDRA,copy_u8Pin);
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			CLR_BIT(DDRA,copy_u8Pin);
		}
	}
		
	else if((copy_u8Pin>=DIO_U8_PORTB_START )&&(copy_u8Pin<=DIO_U8_PORTB_END ))
	{
		copy_u8Pin=copy_u8Pin-8;
		if(copy_u8Value==DIO_U8_HIGH)
		{
			SET_BIT(DDRB,copy_u8Pin);
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			CLR_BIT(DDRB,copy_u8Pin);
		}
	}
	if((copy_u8Pin>=DIO_U8_PORTC_START )&&(copy_u8Pin<=DIO_U8_PORTC_END ))
	{
		copy_u8Pin=copy_u8Pin-16;
		if(copy_u8Value==DIO_U8_HIGH)
		{
			SET_BIT(DDRC,copy_u8Pin);
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			CLR_BIT(DDRC,copy_u8Pin);
		}
	}
	else if((copy_u8Pin>=DIO_U8_PORTD_START )&&(copy_u8Pin<=DIO_U8_PORTD_END ))
	{

		copy_u8Pin=copy_u8Pin-24;
		if(copy_u8Value==DIO_U8_HIGH)
		{
			SET_BIT(DDRD,copy_u8Pin);
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			CLR_BIT(DDRD,copy_u8Pin);
		}
	}
	
	
}
////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
/*before activate any port must be set its direction as an input*/
void DIO_VidActivePullupPin(u8 copy_u8Pin)
{
	if((copy_u8Pin>=DIO_U8_PORTA_START )&&(copy_u8Pin<=DIO_U8_PORTA_END ))
	{
		
			SET_BIT(PORTA,copy_u8Pin);
	} 
	else if((copy_u8Pin>=DIO_U8_PORTB_START )&&(copy_u8Pin<=DIO_U8_PORTB_END ))
	{
		   copy_u8Pin=copy_u8Pin-8;
			SET_BIT(PORTB,copy_u8Pin);
	} 
	else if((copy_u8Pin>=DIO_U8_PORTC_START )&&(copy_u8Pin<=DIO_U8_PORTC_END ))
	{
		   copy_u8Pin=copy_u8Pin-16;
			SET_BIT(PORTC,copy_u8Pin);
	} 
	else if((copy_u8Pin>=DIO_U8_PORTD_START )&&(copy_u8Pin<=DIO_U8_PORTD_END ))
	{
		    copy_u8Pin=copy_u8Pin-24;
			SET_BIT(PORTD,copy_u8Pin);
	} 
	
}
/////////////////////////////////////////////////////////////
/*to  deactivate any portx ,we have 2 ways the first :Clear its pin in portx register
the second way :set the direction of the pin as  an output */
void DIO_ViddeactivePullupPin(u8 copy_u8Pin)
{
	if((copy_u8Pin>=DIO_U8_PORTA_START )&&(copy_u8Pin<=DIO_U8_PORTA_END ))
	{
		
			CLR_BIT(PORTA,copy_u8Pin);
	} 
	else if((copy_u8Pin>=DIO_U8_PORTB_START )&&(copy_u8Pin<=DIO_U8_PORTB_END ))
	{
		  copy_u8Pin=copy_u8Pin-8;
			CLR_BIT(PORTB,copy_u8Pin);
	} 
	else if((copy_u8Pin>=DIO_U8_PORTC_START )&&(copy_u8Pin<=DIO_U8_PORTC_END ))
	{
		 copy_u8Pin=copy_u8Pin-16;
			CLR_BIT(PORTC,copy_u8Pin);
	} 
	else if((copy_u8Pin>=DIO_U8_PORTD_START )&&(copy_u8Pin<=DIO_U8_PORTD_END ))
	{
		copy_u8Pin=copy_u8Pin-24;
			CLR_BIT(PORTD,copy_u8Pin);
	} 
	
}
//////////////////////////////////////////////////////////////////////////////////////
void DIO_VidSetPortDirection(u8 copy_u8Port,u8 copy_u8Value)
{
	if(copy_u8Port==DIO_U8_PORTA )
	{
		if(copy_u8Value==DIO_U8_HIGH)
		{
			DDRA==0xff;
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			DDRA=0x00;
		}
	}
		
	else if(copy_u8Port==DIO_U8_PORTB)
	{
		if(copy_u8Value==DIO_U8_HIGH)
		{
			DDRB=0xff;
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			DDRB=0x00;
		}
	}
	if(copy_u8Port==DIO_U8_PORTC)
	{
		if(copy_u8Value==DIO_U8_HIGH)
		{
			DDRC=0xff;
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			DDRC=0x00;
		}
	}
	else if(copy_u8Port==DIO_U8_PORTD)
	{
		if(copy_u8Value==DIO_U8_HIGH)
		{
			DDRD=0xff;
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
            DDRD=0x00;
		}
	}
	
}
/////////////////////////////////////////////////////////////////////////////////
void DIO_VidSetPortValue(u8 copy_u8Port,u8 copy_u8Value)
{
	if(copy_u8Port==DIO_U8_PORTA)
	{
		if(copy_u8Value>DIO_U8_LOW)
		{
			PORTA=copy_u8Value;
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			PORTA=0x00;
		}
	}
	else if(copy_u8Port==DIO_U8_PORTB)
	{
		if(copy_u8Value>DIO_U8_LOW)
		{
			PORTB=copy_u8Value;
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			PORTB=0x00;
		}
		
	}
	else if(copy_u8Port==DIO_U8_PORTC)
	{
		if(copy_u8Value>DIO_U8_LOW)
		{
			PORTC=copy_u8Value;
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			PORTC=0x00;
		}
	}
	else if(copy_u8Port==DIO_U8_PORTD)
	{
		if(copy_u8Value>DIO_U8_LOW)
		{
			PORTD=copy_u8Value;
		}
		else if(copy_u8Value==DIO_U8_LOW)
		{
			PORTD=0x00;
		}
		
	}
	
}
//////////////////////////////////////////////////////////////////////////////////
u8  DIO_u8GetPortValue(u8 copy_u8Port)
{
	u8 copy_u8LocalResult=0;
	if(copy_u8Port==DIO_U8_PORTA)
	{
		copy_u8LocalResult=PINA;
	}
	else if(copy_u8Port==DIO_U8_PORTB)
	{
		copy_u8LocalResult=PINB;
	}
	else if(copy_u8Port==DIO_U8_PORTC)
	{
		copy_u8LocalResult=PINC;
	}
	else if(copy_u8Port==DIO_U8_PORTD)
	{
		copy_u8LocalResult=PIND;
	}
	return copy_u8LocalResult;
}
//////////////////////////////////////////////////////////////////////////////////
void DIO_VidActivePullupPort(u8 copy_u8Port)
{
	  if(copy_u8Port==DIO_U8_PORTA)
		{
			PORTA=0xff;
		}
		else if(copy_u8Port==DIO_U8_PORTB)
		{
			PORTB=0xff;
		}
		else if(copy_u8Port==DIO_U8_PORTC)
		{
			PORTC=0xff;
		}
		else if(copy_u8Port==DIO_U8_PORTD)
		{
			PORTD=0xff;
		}
}
