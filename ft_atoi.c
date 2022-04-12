/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachaaib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:21:26 by zachaaib          #+#    #+#             */
/*   Updated: 2021/11/16 14:58:12 by zachaaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	reslt;

	i = 0;
	sign = -1;
	reslt = 0;
	while (is_space(*str))
		str++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		reslt *= 10;
		reslt -= str[i] - '0';
		i++;
	}
	return (reslt * sign);
}
