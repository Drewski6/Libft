int	add(int n)
{
	n = n + 1;
	return (n);
}

int main (void)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < 10000)
	{
		add(n);
		i++;
	}
	return (0);
}
