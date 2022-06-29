#include <stdio.h>

/**
 * main - function prototype
 * Description: prints the program name, followed by a new line
 * @agrc: argc parameter
 * @argv: an array of a command listed
 *
 * Return: 0 for success
 */

int main(int _attribute_((_unused_)) argc, char const *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
