#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		x++;
	}

	putchar('\n');
	return (0);
}
