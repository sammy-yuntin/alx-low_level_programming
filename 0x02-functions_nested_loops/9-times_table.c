#include "main.h"
/**
 * times_table-Prints the 9 times table
 * Return:no return
 */
void times_table(void)
{
	int a;
	int b;
	int z;
	for(a=0;a<=9;a++)
	{
		for(b=1;b<=9;b++)
		
		{
			z=a*b;
			_putchar(z);
			_putchar(44);
			_putchar(32);
		}	
		_putchar(10);
	}
}
