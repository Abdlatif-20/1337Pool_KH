/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:16:48 by aben-nei          #+#    #+#             */
/*   Updated: 2022/08/03 22:25:45 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int *ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min;
	if (!(tab = (int *)malloc(sizeof(int) * size)))
		return (0);
	while (i < size)
		tab[i++] = min++;
	tab[i] = 0;
	return (tab);
}


int ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	range[0] = ft_range(min, max);
	i = 0;
	if (min >= max)
		return (0);
	else if (range[0] == NULL)
		return (-1);
	while (range[0][i])
		i++;
	return (i);

}
/*
#include<stdio.h>
int main()
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_range(1, 4);
	while (i < 4)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	int	c;
	int	**range;

	c = ft_ultimate_range(range, 0, 0);
	printf("%d\n", c);
}*/
