#include "main.h"

/**
 * _isupper - Function prototype
 * Description: Checks if a charater is uppercase
 * @c: The character to be checked
 * Return:
 * 1 if the character is uppercase otherwise 0
 */
int _isupper(int c)
{
	int is_upper = c >= 65 && c <= 90 ? 1 : 0;

	return (is_upper);
}
