#include <unistd.h>
#include <stdio.h>

void ft_referecing(int *ptr)
{
	*ptr = 50;
}

int main()
{
	int	a;
	int	*p;

	a = 42;
	p = &a;
	ft_referecing(p);
	write(1, &a, 1);
	printf("printf : %d", a);
	return(0);
}