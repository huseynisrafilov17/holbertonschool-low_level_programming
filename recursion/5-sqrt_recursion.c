int _sqrt (int root, int n)
{
	if (root * root < n)
        {
                return (_sqrt(root + 1, n));
        }
	else if (root * root > n)
        {
                return (-1);
        }
	return (root);
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(0, n));
}
