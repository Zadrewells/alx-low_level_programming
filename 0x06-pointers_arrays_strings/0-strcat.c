#include "main.h"

/**
 * _strcar - function prototype
 * Description: concatenates two strings
 * @dest: should be large enough to contain the concatenated resulting string
 * @src: pointer to the null-terminted string to be appended to dest
 * Return: The pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i = -1;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	do {
		i++;
		dest[x] = src[x];
		x++;
i	} while (src[i] != '\0');

	return (dest);
}

