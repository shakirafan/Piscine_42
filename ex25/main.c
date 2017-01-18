#include <stdlib.h>

void	ft_putnbr(long int n);

int		main(int argc, char ** argv)
{
	int		*tab;
	int		lenght;

	lenght = 1337;
	tab = (int*)malloc(sizeof(*tab) + lenght);
	ft_foreach(tab, lenght, &ft_putnbr);
}
