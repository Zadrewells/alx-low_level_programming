#include "main.h"

/**
 * print_triangle(int size)
 * Description: print a triangle of size `size` using `#` characters
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0, x, n = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; 1 < size; i++)
		{
			for (x = 0; x < size; x++)
				_putchar(x < n ? ' ' : '#');

			n--;
			_putchar('\n');
		}
	}
}
