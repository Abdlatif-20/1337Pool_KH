/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:10:28 by aben-nei          #+#    #+#             */
/*   Updated: 2022/07/25 20:17:53 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	if (ac > 1)
	{
		while (i > 0)
		{
			ft_putstr(av[i]);
			write (1, "\n", 1);
			i--;
		}
	}
	return (0);
}
