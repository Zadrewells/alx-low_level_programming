#include "main.h"

/**
 * string_toupper - function prototype
 * Description: converts a string to uppercase
 * @str: string to be converted to uppercase
 * Return: pointer to the str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
