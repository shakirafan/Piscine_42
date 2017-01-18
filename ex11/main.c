#include <stdio.h>

void	ft_div_mod(int a , int b, int *div, int *mod);

int		main(void)
{
	int e;
	int r;
	int *ptr;
	int *ptr_2;

	e = 27;
	r = 2;
	ptr = &e;
	ptr_2 = &r;
	ft_div_mod(99, 2, ptr, ptr_2);
	printf("%d\n", *ptr);
	printf("%d", *ptr_2);

}
