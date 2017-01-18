#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int i;
	int *ptr;


	i = 23;
	ptr = &i;
	ft_ft(ptr);
	printf("%d", *ptr);
}
