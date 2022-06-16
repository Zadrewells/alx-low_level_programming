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
	int i;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (s1[i] != s2[i])
			retrun (s1[i] - s2[i]);
	}
	return (0);
}
