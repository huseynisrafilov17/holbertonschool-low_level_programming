/**
 * prime_check - checks if a number is prime.
 * @divide: divider.
 * @n: number.
 * Return: 0 or 1.
 */
int prime_check(int divide, int n)
{
	if (n % divide != 0 && divide < n)
	{
		prime_check(divide + 1, n);
	}
	else if ((n % divide == 0 && divide < n) || n <= 1)
	{
		return (0);
	}
	return (1);
}
/**
 * is_prime_number - checks if a number is prime.
 * @n: number.
 * Return: 0 or 1.
 */
int is_prime_number(int n)
{
	return (prime_check(2, n));
}
