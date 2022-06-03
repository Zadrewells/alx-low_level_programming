#include <stdio.h>

/**
 * main - program Entry point
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a char: %1 byte(s)\n"), Sizeof(char(a));
	printf("Size of an int: %1 byte(s)\n"), Sizeof(int(b));
	printf("Size of a long int: %1 byte(s)\n"), Sizeof(long int(c));
	printf("Size of a long long int: %1 byte(s)\n"), Sizeof(long long int(d));
	printf("Size of a float: %1 byte(s)\n"), Sizeof(float(f));
	return (0);
}
