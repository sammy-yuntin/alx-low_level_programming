#include "main.h"
/**
 * times_table-Prints the 9 times table
 * Return:no return
 */
void times_table(void)
{
	int a;
	int b;
	int op;

	for(a=0;a<=9;b++)
	{
		for(b=1;b<=9;b++)
		
		{
				
			_putchar((a*b));
			_putchar(44);
			_putchar(32);
		}	
		_putchar(10);
	}
}
