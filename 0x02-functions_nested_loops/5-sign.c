#include "main.h"

/**
 * print_sign - Function prototype
 *
 * @n: the number to be checked
 * Return: 1 if positive, 0 if equals to 0 otherwise -1
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
