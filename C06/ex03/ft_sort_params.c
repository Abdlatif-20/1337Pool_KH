/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:19:04 by aben-nei          #+#    #+#             */
/*   Updated: 2022/07/25 20:51:47 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char *av[])
{
	int		i;
	char	*s;

	i = 1;
	if (ac > 1)
	{
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				s = av[i];
				av[i] = av[i + 1];
				av[i + 1] = s;
				i = 0;
			}
			i++;
		}
	}
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
	}
}
