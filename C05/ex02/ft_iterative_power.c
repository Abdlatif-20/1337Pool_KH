/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 04:47:45 by aben-nei          #+#    #+#             */
/*   Updated: 2022/07/30 18:53:00 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power == 0 || nb == 0)
		return (1);
	i = 1;
	res = 1;
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
