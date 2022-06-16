#include "main.h"

/**
 * _strcmp - function prototype
 * Description: compare the differenc between the strings
 * @s1: first string to be compare
 * @s2: second string to compare
 * Return: the difference between the two strings 0
 * if a match and a another number if not
 */
int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2[i])
	{
		return (0);
	}

	else
	{
	return (*s1 - *s2);
	}
}
