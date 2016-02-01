/*
 * DIO_private.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

/*Comment!: Initialize PORTA Directions  */
#define DIO_u8PORTADir		conc(DIO_u8PIN0_INITDIR,DIO_u8PIN1_INITDIR,DIO_u8PIN2_INITDIR,\
		DIO_u8PIN3_INITDIR,DIO_u8PIN4_INITDIR,DIO_u8PIN5_INITDIR,DIO_u8PIN6_INITDIR,DIO_u8PIN7_INITDIR)
/*Comment!: Initialize PORTB Directions values */
#define DIO_u8PORTBDir		conc(DIO_u8PIN8_INITDIR,DIO_u8PIN9_INITDIR,DIO_u8PIN10_INITDIR,\
		DIO_u8PIN11_INITDIR,DIO_u8PIN12_INITDIR,DIO_u8PIN13_INITDIR,DIO_u8PIN14_INITDIR,DIO_u8PIN15_INITDIR)
/*Comment!: Initialize PORTC Directions values */
#define DIO_u8PORTCDir		conc(DIO_u8PIN16_INITDIR,DIO_u8PIN17_INITDIR,DIO_u8PIN18_INITDIR,\
		DIO_u8PIN19_INITDIR,DIO_u8PIN20_INITDIR,DIO_u8PIN21_INITDIR,DIO_u8PIN22_INITDIR,DIO_u8PIN23_INITDIR)
/*Comment!: Initialize PORTD Directions values */
#define DIO_u8PORTDDir		conc(DIO_u8PIN24_INITDIR,DIO_u8PIN25_INITDIR,DIO_u8PIN26_INITDIR,\
		DIO_u8PIN27_INITDIR,DIO_u8PIN28_INITDIR,DIO_u8PIN29_INITDIR,DIO_u8PIN30_INITDIR,DIO_u8PIN31_INITDIR)


/*Comment!: Initialize PORTA Values */
#define DIO_u8PORTAVal		conc(DIO_u8PIN0_INITVAL,DIO_u8PIN1_INITVAL,DIO_u8PIN2_INITVAL,\
		DIO_u8PIN3_INITVAL,DIO_u8PIN4_INITVAL,DIO_u8PIN5_INITVAL,DIO_u8PIN6_INITVAL,DIO_u8PIN7_INITVAL)
/*Comment!: Initialize PORTB Values */
#define DIO_u8PORTBVal		conc(DIO_u8PIN8_INITVAL,DIO_u8PIN9_INITVAL	,DIO_u8PIN10_INITVAL,\
		DIO_u8PIN11_INITVAL,DIO_u8PIN12_INITVAL,DIO_u8PIN13_INITVAL,DIO_u8PIN14_INITVAL,DIO_u8PIN15_INITVAL)
/*Comment!: Initialize PORTC Values */
#define DIO_u8PORTCVal		conc(DIO_u8PIN16_INITVAL,DIO_u8PIN17_INITVAL	,DIO_u8PIN18_INITVAL,\
		DIO_u8PIN19_INITVAL,DIO_u8PIN20_INITVAL,DIO_u8PIN21_INITVAL,DIO_u8PIN22_INITVAL,DIO_u8PIN23_INITVAL)
/*Comment!: Initialize PORTD Values */
#define DIO_u8PORTDVal		conc(DIO_u8PIN24_INITVAL,DIO_u8PIN25_INITVAL,DIO_u8PIN26_INITVAL,\
		DIO_u8PIN27_INITVAL,DIO_u8PIN28_INITVAL,DIO_u8PIN29_INITVAL,DIO_u8PIN30_INITVAL,DIO_u8PIN31_INITVAL)

/*Comment!: Initialize Function Return */
#define u8OK			0
#define u8ERROR			1

/*Comment!: Mapping The PORTA Registers Addresses	*/
#define PORTA 		*((volatile u8*)(0X3B))
#define DDRA 		*((volatile u8*)(0X3A))
#define PINA 		*((volatile u8*)(0X39))

/*Comment!: Mapping The PORTB Registers Addresses	*/
#define PORTB 		*((volatile u8*)(0X38))
#define DDRB 		*((volatile u8*)(0X37))
#define PINB 		*((volatile u8*)(0X36))

/*Comment!: Mapping The PORTC Registers Addresses	*/
#define PORTC 		*((volatile u8*)(0X35))
#define DDRC 		*((volatile u8*)(0X34))
#define PINC 		*((volatile u8*)(0X33))

/*Comment!: Mapping The PORTD Registers Addresses	*/
#define PORTD 		*((volatile u8*)(0X32))
#define DDRD 		*((volatile u8*)(0X31))
#define PIND 		*((volatile u8*)(0X30))


#endif /* DIO_PRIVATE_H_ */
