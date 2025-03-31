#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime recursively.
 * @n: The number to check.
 * @i: The divisor to test.
 *
 * Return: 1 if `n` is prime, 0 if `n` is not prime.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1) /* 1 and numbers less than 1 are not prime */
		return (0);
	if (i * i > n) /* No divisor found, it's prime */
		return (1);
	if (n % i == 0) /* Found a divisor, not prime */
		return (0);
	return (is_prime_helper(n, i + 1)); /* Check the next potential divisor */
}

/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if `n` is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2)); /* Start checking from divisor 2 */
}
