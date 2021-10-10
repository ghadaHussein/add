#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT) (REG|= (1<<BIT))
#define CLR_BIT(REG,BIT) (REG&=~(1<<BIT))
#define TOG_BIT(REG,BIT) (REG^= (1<<BIT))
#define GET_BIT(REG,BIT) ((REG>>BIT) &1 )



#define CONC_BIT(A7,A6,A5,A4,A3,A2,A1,A0) CONC_HELP(A7,A6,A5,A4,A3,A2,A1,A0)
#define CONC_HELP(A7,A6,A5,A4,A3,A2,A1,A0) 0b##A7##A6##A5##A4##A3##A2##A1##A0


#endif
