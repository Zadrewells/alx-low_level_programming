#include <stdio.h>

/**
 *  main - Entry point
 *  description: Prints the letters of the alphabet lowercase except q and e
 *  Return: Always 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
			putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
