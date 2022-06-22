#include "main.h"

/**
 * set_string - function prototype
 * sets the value of the pointer to a pointer to a char
 * to the value of the pointer to a char
 * @s: this is a pointer to a pointer to a char
 * @to: the string to copy to the pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
