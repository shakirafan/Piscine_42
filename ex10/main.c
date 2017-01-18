#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int i;
	int e;
	int *ptr;
	int *ptr_2;

	i = 33;
	e = 66;
	ptr		= &i;
	ptr_2	= &e;
	ft_swap(ptr, ptr_2);
	printf("%d", *ptr);
	printf("%d", *ptr_2);
}
