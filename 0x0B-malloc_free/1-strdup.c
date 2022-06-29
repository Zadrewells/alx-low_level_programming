#include "main.h"
#include <stdlib.h>
/**
 * _strup - Function prototype
 * Description: Returns a pointer to a newly-allocated space in memory
 * @str: The string to be copied
 *
 * Return: if str == NULL 0r insufficient memory is available - NULL
 * Otherwise - a pointer to the duplicated string
 */

char *_strup(char *str)
{
	char *str_out;
	int i;
	int x;

	if (str == 0)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	str_out = (char *)malloc(sizeof(char) * (i + 1));

	if (str_out == 0)
		return (0);

	for (x = 0; x <= i; x++)
		str_out[x] = str[x]

	return (str_out);
}
