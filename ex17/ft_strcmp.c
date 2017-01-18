#include <stdio.h> 
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	main(void)
{
	printf("0 : %d \n" ,ft_strcmp("test", "test"));
	printf("-1 : %d \n" ,ft_strcmp("ab", "abc"));
	printf("1 : %d \n" ,ft_strcmp("b", "a"));
	printf("1 : %d \n" ,ft_strcmp("z", "A"));
	printf("-1 : %d \n" ,ft_strcmp("W", "A"));
	printf("%d \n" ,strcmp("test", "test"));
	printf("%d \n" ,strcmp("ab", "abc"));
	printf("%d \n" ,strcmp("b", "a"));

}
