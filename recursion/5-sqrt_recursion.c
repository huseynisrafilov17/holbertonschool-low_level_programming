int root = 0;

int _sqrt_recursion(int n)
{
	if (root * root < n)
	{
		root++;
		_sqrt_recursion(n);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	return (root);
}
