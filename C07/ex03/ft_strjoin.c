/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 23:35:53 by aben-nei          #+#    #+#             */
/*   Updated: 2022/08/05 00:44:57 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
char *ft_strjoin(int size, char **strs, char *sep)
{
	char *s;
	int	i;
	int	j;
	int	c;

	s = (char *)malloc(sizeof (char *));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
/*
#include<stdio.h>
int main()
{
	char *tab[4];
	tab[0] = "ab ";
	tab[1] = " cd ";
	tab[2] = " ef ";
	tab[3] = " gh";
	printf ("%s\n", ft_strjoin(4, tab, "Heeey"));
}*/
