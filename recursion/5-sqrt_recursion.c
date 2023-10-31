int _sqrt_recursion(int n)
{
	int root, flag;

	if (root && flag)
	{
		root = 0;
		flag = 0;
	}
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
