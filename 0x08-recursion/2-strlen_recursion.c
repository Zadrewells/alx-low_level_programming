#include "main.h"

/**
 * _strlen_recursion - function prototype
 * Description: gets the length of a string
 * @s: pointer to the string to get the length of a string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(++s));
}
