/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:15:30 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/27 14:31:56 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	x;
	int	sign;
	int	i;

	x = 0;
	sign = 1;
	i = 0;
	if (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
			i++;
		if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			sign = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			x = x * 10 + (str[i] - '0');
			i++;
		}
	}
	return (sign * x);
}
