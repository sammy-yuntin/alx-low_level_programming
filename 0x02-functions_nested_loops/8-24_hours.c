#include "main.h"

/**
 * jack baeur-prints the minutes of a day
 * return: no return
 */
void jack_bauer(void)
{
	int a,b,c,d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0';b <= '3'; b++)
		{
			for (c = '0';c <= '5';c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
				if(a <= '2' && b <= '3' && c <= '5' && d <='9')
					break;
						_putchar(a);
						_putchar(b);
						_putchar(58);
						_putchar(c);
						_putchar(d);
						_putchar('\n');
				}
			}
		}	
	}
}
