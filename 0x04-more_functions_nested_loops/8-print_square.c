#include "main.h"

/**
 * print_square - function prototype
 * Description: prints a sqaure of the specified size
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
	for (x = 0; x < n; y++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
