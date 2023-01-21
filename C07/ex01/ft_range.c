/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:05:38 by aben-nei          #+#    #+#             */
/*   Updated: 2022/08/01 02:15:49 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	size = 0;
	if (min >= max)
		return (NULL);
	if (min < max)
		size = max - min + 1;
	tab = (int *)malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size - 1)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
/*
#include<stdio.h>
int main()
{
int	*tab;
int i;

i = 0;
tab = ft_range(5, 4);
while (i < 4)
{
printf("tab[%d] = %d\n", i, tab[i]);
i++;
}
if (*tab == NULL)
printf("this is null");
}*/
