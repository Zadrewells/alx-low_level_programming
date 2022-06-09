#include "main.h"

/**
 * print_diagonal - function prototype
 * Description: print a diagonal line of n length, if n is greater than 0
 * @n: the number of times the character
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	for (i = 0; i < n; i++)
	{
	for (spaces = 0; spaces < i; spaces++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
