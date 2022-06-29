#include <stdio.h>

/**
 * main - function prototype
 * Description: prints the number of arguments passed to it
 * @argc: the number of arguments suppliedto the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0
 */
int main(int arg, char _attribute_((_unused_)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
