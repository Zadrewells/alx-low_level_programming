#include "main.h"

/**
 * _sqrt_recursion - function prototype
 * Description: gets the natural square root of a number
 * @n: the number to find the square root of
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function prototype
 * Description: computes the natural square root of a number
 * @n: the number to find the square root of
 * @i: the number to check if its a square root of n
 * Return: the square root of a number
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

			if ((i * i) > n)
				return (-1);

	return (i * i == n ? i : _sqrt(n, i + 1));
}

