/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachaaib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:58:58 by zachaaib          #+#    #+#             */
/*   Updated: 2021/11/15 14:28:11 by zachaaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	v_absolute(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	show_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n != 0)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*rslt;
	int		len;

	len = show_len(n);
	rslt = malloc(sizeof(char) * (len + 1));
	if (rslt == NULL)
		return (NULL);
	rslt[len] = '\0';
	if (n < 0)
		rslt[0] = '-';
	else if (n == 0)
		rslt[0] = '0';
	while (n != 0)
	{
		len -= 1;
		rslt[len] = v_absolute(n % 10) + '0';
		n /= 10;
	}
	return (rslt);
}
