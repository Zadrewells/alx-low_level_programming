#include "main.h"

/**
 * _memcpy - function prototype
 * Description: copies n byte from memory area src to memory area dest
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source array
 * @n: number of bytes to copy 
 * Return: the pointer to the destination string 
 */
char *_memcpy(char 8dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
