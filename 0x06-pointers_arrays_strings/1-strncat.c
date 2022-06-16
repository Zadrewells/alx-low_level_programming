#include "main.h"

/**
 * _strncat - function protoype
 * Description: concate two strings
 * @dest: pointer to the destination array
 * @src: pointer to the null-terminated stringbto be appended to dest
 * @n: number of bytes to be appended
 * Return: the pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;

	for (x = 0; dest[x]; x++)
	{
	}

	for (i = 0; i < n && dest[i]; i++)
	{
		dest[i + x] = src[i];
	}
	dest[i + x] = '\0';

	return (dest);
}
