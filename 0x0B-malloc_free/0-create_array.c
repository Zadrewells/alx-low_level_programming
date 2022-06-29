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
		return (Null);
	str = malloc(sizeof(char) * size);
	if (str == Null)
		return (Null);

	i = 0;
	while (i < size)
	{
		str[i] = c;
	}
	return (str);
}

