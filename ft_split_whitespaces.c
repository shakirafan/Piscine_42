/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:01:14 by aalbeza           #+#    #+#             */
/*   Updated: 2016/08/22 20:49:31 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return(1);
	else
		return(0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_wordnb(char *str)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	if(!space(str[i]) && str[i] != '\0')
		nb++;
	while (str[i] != '\0')
	{	
		while (space(str[i]))
			i++;
		if (space(str[i - 1]) && str[i] != '\0')
			nb++;
		i++;	
	}
	return (nb);

}

char	*ft_split_whitespaces(char *str)
{
	char **string;
	int i;
	int *tab;
	int y;
	int a;

	a = 0;
	y = 0;
	i = 0;
	string = (char **)malloc(sizeof(*string) * (ft_wordnb(str) + 1));
	while (i < ft_wordnb(str))
	{
		string[i] = (char *)malloc(sizeof(*string) * (ft_strlen(str)));
		i++;
	}
	string[i] = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ')
		{
			string[y][a] = str[i];
			a++;
			i++;
		}
		string[y][a] = '\0';
		a = 0;
		y++;
		i++;
	}
	i = 0;
	return(string[i + 2]);
}



int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		return (0);
	printf("%s", ft_split_whitespaces(argv[i]));
}
