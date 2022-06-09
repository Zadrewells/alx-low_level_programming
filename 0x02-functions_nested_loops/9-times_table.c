#include "main.h"

/**
 * times_table - Function prototype
 * Description: Prints the times table from 0 to 9
 * Return: void
 */
void times_table(void)
{
	int r;

	for (r = 0; r <= 9; r++)
	{
		int c;

		for (c = 0; c <= 9; r++)
		{
			int p = r * c;
			int t = p / 10;
			int o = p % 10;

			if (c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar('\n');
	}
}
