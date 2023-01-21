/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:45:39 by aben-nei          #+#    #+#             */
/*   Updated: 2022/08/01 02:13:59 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		j;
	int		i;

	i = ft_strlen(src) - 1;
	copy = (char *)malloc(sizeof(char) * i + 1);
	if (!copy)
		return (NULL);
	j = -1;
	while (src[++j])
		copy[j] = src[j];
	copy[j] = '\0';
	return (copy);
}
/*
#include<stdio.h>

int main(void)
{
char *copy;
char src[] = "Hello World";
copy = ft_strdup(src);
printf("src = %s\ncopy = %s", src, copy);
}*/
