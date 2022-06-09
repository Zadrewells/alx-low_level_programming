#include "main.h"

/**
 * print_diagonal - function prototype
 * Description: print a diagonal line of n length, if n is greater than 0
 * @n: the number of times the character
 * Return: void
 */
void print_diagonal(int n)
{
	int i = o, x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (; i < n; i++)
		{
			for (x = 0; x < i; x++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');

		}
	}
}
