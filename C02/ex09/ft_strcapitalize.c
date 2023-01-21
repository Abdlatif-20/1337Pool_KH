/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:48:33 by aben-nei          #+#    #+#             */
/*   Updated: 2022/07/25 14:47:50 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowercase(char *str, int p)
{
	if (str[p] >= 'A' && str[p] <= 'Z')
		str[p] += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			ft_strlowercase(str, i);
			if ((str[i - 1] < 'a' || str[i - 1] > 'z')
				&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < '0' || str[i - 1] > '9'))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
