#include "main.h"

/**
 **_strstr - function prototype
 * locates a substring in a string
 * @haystack: the string to search in
 * @needle: the string to search for
 * Return; a pointr to the beginning of the located substring
 * or null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		int x;

		for (x = i; haystack[x] > '\0' && needle[x - i] > '\0'; x++)
		{
			if (haystack[x] != needle[x - i])
				break;
		}
		if (needle[x - i] == '\0')
			return (haystack + i);
	}

	return (0);
}

