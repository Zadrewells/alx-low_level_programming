#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function prototype
 * Description: Returns a pointer to a newly-allocated space in memory
 * @str: The string to be copied
 *
 * Return: if str == NULL 0r insufficient memory is available - NULL
 * Otherwise - a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == 0)
	return (0);

	while (str[i])
	i++;

	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
