#include "main.h"

/**
 * print_most_numbers - function prototype
 * Description: prints the numbers, from 0 to 9 except for 2
 * followed by a new line
 * Return: void
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}

	_putchar('\n');
}
