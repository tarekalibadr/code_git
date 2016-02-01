/*
 * DIO_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */
#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"



/*Comment!: Initialization Function */
extern void DIO_voidInit(void){

	/*Comment!:  Initialize PORTs Directions */
	DDRA = DIO_u8PORTADir;
	DDRB = DIO_u8PORTBDir;
	DDRC = DIO_u8PORTCDir;
	DDRD = DIO_u8PORTDDir;

	/*Comment!:  Initialize PORTs Values */
	PORTA |= (DIO_u8PORTADir)&(DIO_u8PORTAVal);
	PORTB |= (DIO_u8PORTBDir)&(DIO_u8PORTAVal);
	PORTC |= (DIO_u8PORTCDir)&(DIO_u8PORTAVal);
	PORTD |= (DIO_u8PORTDDir)&(DIO_u8PORTAVal);
}

/*Comment!: Read Pin Value */
extern u8 DIO_u8ReadPinVal(u8 Copy_u8PinIdx,u8* Copy_u8PtrToVal){

	u8 local_u8ReturnVar = u8OK;
	u8 local_u8DivResult = 0;
	u8 local_u8ModResult = 0;

	local_u8DivResult = Copy_u8PinIdx / 8;
	local_u8ModResult = Copy_u8PinIdx % 8;

		switch (local_u8DivResult){
		case (DIO_u8PortA):
				*Copy_u8PtrToVal = ((PINA&(1 << local_u8ModResult)) >> local_u8ModResult);
				break;
		case (DIO_u8PortB):
				*Copy_u8PtrToVal = ((PINB&(1 << local_u8ModResult)) >> local_u8ModResult);
						break;
		case (DIO_u8PortC):
				*Copy_u8PtrToVal = ((PINC&(1 << local_u8ModResult)) >> local_u8ModResult);
						break;
		case (DIO_u8PortD):
				*Copy_u8PtrToVal = ((PIND&(1 << local_u8ModResult)) >> local_u8ModResult);
						break;
		default :
				local_u8ReturnVar = u8ERROR;
						break;
		}
	return	local_u8ReturnVar;
}


/*Comment!: Write Pin Value */
extern u8 DIO_u8WritePinVal(u8 Copy_u8PinIdx, u8 Copy_u8PinVal){

	u8 local_u8ReturnVar = u8OK;
	u8 local_u8DivResult = 0;
	u8 local_u8ModResult = 0;

	local_u8DivResult = Copy_u8PinIdx / 8;
	local_u8ModResult = Copy_u8PinIdx % 8;

	switch (local_u8DivResult){
	case (DIO_u8PortA):
			PORTA = ((PORTA&(~(1 << local_u8ModResult)))|(Copy_u8PinVal << local_u8ModResult));
				break;
	case (DIO_u8PortB):
			PORTB |= ((PORTB&(~(1 << local_u8ModResult)))|(Copy_u8PinVal << local_u8ModResult));
				break;
	case (DIO_u8PortC):
			PORTC |= ((PORTC&(~(1 << local_u8ModResult)))|(Copy_u8PinVal << local_u8ModResult));
				break;
	case (DIO_u8PortD):
			PORTD |= ((PORTD&(~(1 << local_u8ModResult)))|(Copy_u8PinVal << local_u8ModResult));
				break;
	default :
			local_u8ReturnVar = u8ERROR;
				break;
		}

	return	local_u8ReturnVar;
}

/*Comment!: Read Port Value */
extern u8 DIO_u8ReadPortVal(u8 Copy_u8PortIdx,u8* Copy_u8PtrToVal){

	u8 local_u8ReturnVar = u8OK;


	switch (Copy_u8PortIdx){
	case (DIO_u8PortA):
				*Copy_u8PtrToVal = PINA;
					break;
	case (DIO_u8PortB):
				*Copy_u8PtrToVal = PINB;
					break;
	case (DIO_u8PortC):
				*Copy_u8PtrToVal = PINC;
					break;
	case (DIO_u8PortD):
				*Copy_u8PtrToVal = PIND;
					break;
	default :
				local_u8ReturnVar = u8ERROR;
					break;
		}


	return	local_u8ReturnVar;
}

/*Comment!: Write Port Value */
extern u8 DIO_u8WritePortVal(u8 Copy_u8PortIdx,u8 Copy_u8PortVal){

	u8 local_u8ReturnVar = u8OK;

	switch (Copy_u8PortIdx){
	case (DIO_u8PortA):
			PORTA = Copy_u8PortVal;

					break;
	case (DIO_u8PortB):
			PORTB = Copy_u8PortVal;;
					break;
	case (DIO_u8PortC):
			PORTC = Copy_u8PortVal;
					break;
	case (DIO_u8PortD):
			PORTA = Copy_u8PortVal;
					break;
	default :
			local_u8ReturnVar = u8ERROR;
					break;
		}

	return	local_u8ReturnVar;
}

/*Comment!: Write Pin Direction */
extern u8 DIO_u8WritePinDir(u8 Copy_u8PinIdx,u8 Copy_u8PinToDir){

	u8 local_u8ReturnVar = u8OK;
	u8 local_u8DivResult = 0;
	u8 local_u8ModResult = 0;

	local_u8DivResult = Copy_u8PinIdx / 8;
	local_u8ModResult = Copy_u8PinIdx % 8;

	switch (local_u8DivResult){
	case (DIO_u8PortA):
			DDRA =((DDRA&(~(1 << local_u8ModResult)))|(Copy_u8PinToDir << local_u8ModResult));
				break;
	case (DIO_u8PortB):
			DDRA =((DDRB&(~(1 << local_u8ModResult)))|(Copy_u8PinToDir << local_u8ModResult));
				break;
	case (DIO_u8PortC):
			DDRA =((DDRC&(~(1 << local_u8ModResult)))|(Copy_u8PinToDir << local_u8ModResult));
				break;
	case (DIO_u8PortD):
			DDRA =((DDRD&(~(1 << local_u8ModResult)))|(Copy_u8PinToDir << local_u8ModResult));
				break;
	default :
			local_u8ReturnVar = u8ERROR;
				break;
		}

	return	local_u8ReturnVar;

}

/*Comment!: Write Port Direction */
extern u8 DIO_u8WritePortDir(u8 Copy_u8PortIdx,u8 Copy_u8PortToDir){

	u8 local_u8ReturnVar = u8OK;

	switch (Copy_u8PortIdx){
	case (DIO_u8PortA):
			DDRA = Copy_u8PortToDir;

					break;
	case (DIO_u8PortB):
			DDRB = Copy_u8PortToDir;;
					break;
	case (DIO_u8PortC):
			DDRC = Copy_u8PortToDir;
					break;
	case (DIO_u8PortD):
			DDRA = Copy_u8PortToDir;
					break;
	default :
			local_u8ReturnVar = u8ERROR;
					break;
		}

	return	local_u8ReturnVar;

}

/*Comment!: Read Pin Direction */
extern u8 DIO_u8readPinDir(u8 Copy_u8PinIdx,u8* Copy_u8PtrToDir){

	u8 local_u8ReturnVar = u8OK;
	u8 local_u8DivResult = 0;
	u8 local_u8ModResult = 0;

	local_u8DivResult = Copy_u8PinIdx / 8;
	local_u8ModResult = Copy_u8PinIdx % 8;

		switch (local_u8DivResult){
		case (DIO_u8PortA):
				*Copy_u8PtrToDir = ((DDRA&(1 << local_u8ModResult)) >> local_u8ModResult);
				break;
		case (DIO_u8PortB):
				*Copy_u8PtrToDir = ((DDRB&(1 << local_u8ModResult)) >> local_u8ModResult);
						break;
		case (DIO_u8PortC):
				*Copy_u8PtrToDir = ((DDRC&(1 << local_u8ModResult)) >> local_u8ModResult);
						break;
		case (DIO_u8PortD):
				*Copy_u8PtrToDir = ((DDRD&(1 << local_u8ModResult)) >> local_u8ModResult);
						break;
		default :
				local_u8ReturnVar = u8ERROR;
						break;
		}
	return	local_u8ReturnVar;
}

/*Comment!: Read Port Direction */
extern u8 DIO_u8readPortDir(u8 Copy_u8PortIdx,u8* Copy_u8PtrToDir){

	u8 local_u8ReturnVar = u8OK;


		switch (Copy_u8PortIdx){
		case (DIO_u8PortA):
					*Copy_u8PtrToDir = DDRA;
						break;
		case (DIO_u8PortB):
					*Copy_u8PtrToDir = DDRB;
						break;
		case (DIO_u8PortC):
					*Copy_u8PtrToDir = DDRC;
						break;
		case (DIO_u8PortD):
					*Copy_u8PtrToDir = DDRD;
						break;
		default :
					local_u8ReturnVar = u8ERROR;
						break;
			}


		return	local_u8ReturnVar;
}
