#include "main.h"

/**
 * _strchr - function prototype
 * Description: locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to be located
 * Return: the pointer to the destination string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}
