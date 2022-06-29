#include "main.h"
#include <stdio.h>
/**
 * create_array - Function prototype
 * Description - Creates an array of char, initialize it with a char
 * @size: size of the array
 * @c: char to br=e be initialized with
 * Return: Pointer to array or Null
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}

