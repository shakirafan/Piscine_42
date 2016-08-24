#include <stdlib.h>
#include "ft_stock_par.h"



int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
	int i;
	
	i = 0;
	struct s_stock_par a;
	t_stock_par *tab;
	tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(*av);
		tab[i].str =  ;
		tab[i].copy = ;
		tab[i].tab = ft_split_whitespaces(*av);
		i++;
	}
	return(tab);
}
int		main(int argc, char **argv)
{
	ft_param_to_tab(argc, argv);
}
