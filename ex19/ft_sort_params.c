#include <unistd.h>

int	ft_strcmp (char *s1, char *s2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char ** argv)
{
	int i;
	int a;
	int cmp;
	int i_cmp;

	i_cmp = 2;
	a = 1;
	i = 1;
	cmp = 1;
	while (a < argc)
	{
		while (cmp < argc)
		{
			if(ft_strcmp(argv[i], argv[i_cmp]) == 0)
				i++;
			cmp++;
		}
		a++;
	}
	return (0);
}
