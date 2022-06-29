#include "main.h"

/**
 * _strncpy - function prototype
 * Description: copies the first n characters of the string pointed to by src
 * including the terminating null byte
 * to the buffer pointed to by dest
 * @dest: pointer to the destination string
 * @src: pointer to the string to be copied
 * @n: number of bytes to copy
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
