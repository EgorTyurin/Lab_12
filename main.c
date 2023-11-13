////////////////////////////////////////
// main.c
#include <stdio.h>
#include "calculate.h"
int
main (void)
{
	float Numeral;
	char Operation[4];
	float Result;
	printf("Введите число: ");
	scanf("%f",&Numeral);
	printf("Выберите операцию (+,-,*,/,pow,sqrt,sin,cos,tan): ");
	scanf("%s",Operation);
	Result = Calculate(Numeral, Operation);
	printf("%6.2f\n",Result);
	return 0;
}
