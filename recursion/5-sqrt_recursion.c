/**
 * _sqrt - finds root.
 * @root: root of n.
 * @n: number.
 * Return: root.
 */
int _sqrt(int root, int n)
{
	if (root * root < n)
		return (_sqrt(root + 1, n));
	else if (root * root > n)
		return (-1);
	return (root);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 * Return: passes control to other function.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(0, n));
}
