#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of `n` if it exists, otherwise -1.
 */
int _sqrt_recursion(int n);


/**
 * sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number to find the square root of.
 * @i: The current number to test if it's the square root.
 *
 * Return: The square root of `n` or -1 if `n` does not have a natural square root.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of `n` if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
