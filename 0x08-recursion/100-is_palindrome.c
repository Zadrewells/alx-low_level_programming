#include "main.h"
#include <string.h>

/**
 * _is_palindrome - function prototype
 * Description: computes if a string is a palindrome
 * @s: pointer to the string to check
 * @x: the length of the string
 * Return: - 1 is a prime number - 0 is not a prime
 */
int _is_palindrome(char *s, int x)
{
	if (x < 1)
		return (1);

	return (*s == *(s + x) ? _is_palindrome(s + 1, x - 2) : 0);
}

/**
 * is_palindrome - function prototype
 * Description: checks if string is a palinddrome
 * @s: pointer to the string to check
 * Return: 1 is a prime number - 0 is not a prime
 */
int is_palindrome(char *s)
{
	int x = strlen(s) - 1;

	return (_is_palindrome(s, x));
}
