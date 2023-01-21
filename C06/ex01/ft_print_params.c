/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:53:18 by aben-nei          #+#    #+#             */
/*   Updated: 2022/07/25 20:08:38 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (ac > ++i)
		{
			ft_putstr(av[i]);
			write (1, "\n", 1);
		}
	}
}
