#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the integer value it receives
 *
 * Return: 1 if true. 0 if false
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
