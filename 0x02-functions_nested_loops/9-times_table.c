#include "main.h"
/**
 * times_table-Prints the 9 times table
 * Return:no return
 */
void times_table(void)
{
	int a,b,op;

	for(a=0;a<=9;b++)
	{
		for(b=1;b<=9;b++)
		{
			op = a*b;
			_putchar((op)(44)(32));
		}	
		_putchar(10);
	}
}
