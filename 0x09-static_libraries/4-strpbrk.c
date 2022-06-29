#include "main.h"

/**
 * *_strpbrk - function prototype
 * Description ; locates the first occurence in the string s of any of
 * th bytes in the string accept
 * @s: pointer to the string to search
 * @accept: pointer to the byte in s that matches one of the bytes in accept
 * orr null if no such byte is fpond
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int i;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (0);
}
