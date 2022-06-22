#include "main.h"

/**
 * _sqrt_recursive - function prototype
 * Description: gets the natural square root of a number
 * @n: the number to find the square root of
 * Return: the square root of the number
 */
int _sqrt_recursive(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function prototype
 * Description: computes the natural square root of a number
 * @n: the number to find the square root of
 * @x: the number to check if its a square root of n
 * Return: the square root of a number
 */
int _sqrt(int n, int x)
{
	if (n < 0)
		return (-1);
		{
			if ((x * x) > n)
				return (-1);
		}
	return (x * x == n ? x : _sqrt(n, x + 1))
}

