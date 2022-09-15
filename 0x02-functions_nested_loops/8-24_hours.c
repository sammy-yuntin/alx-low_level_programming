#include "main.h"

/**
 * jack baeur-prints the minutes of a day
 * return: no return
 */
void jack_bauer(void)
{
	int a,b,c,d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48;b <= 51; b++)
		{
			for (c = 48;c <= 53;c++)
			{
				for (d = 48; d <= 57; d++)
				{
				if(a <= 50 && b <= 51 && c <= 53 && d <=57)
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
