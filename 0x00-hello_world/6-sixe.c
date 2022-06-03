#include <stdio.h>

/**
 * main - program Entry point
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %1 byte(s)\n"), Sizeof(char));
	printf("Size of an int: %1 byte(s)\n"), Sizeof(int));
	printf("Size of an long int: %1 byte(s)\n"), Sizeof(long int));
	printf("Size of an long long int: %1 byte(s)\n"), Sizeof(long long int));
	printf("Size of an float: %1 byte(s)\n"), Sizeof(float));
	return (0);
}
