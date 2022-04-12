/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachaaib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:44:04 by zachaaib          #+#    #+#             */
/*   Updated: 2021/11/13 17:07:24 by zachaaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	t1;
	size_t	t2;
	size_t	index_dst;

	i = 0;
	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	if (size <= t1)
		return (t2 + size);
	index_dst = t1;
	while (src[i] != '\0' && index_dst < (size - 1))
	{
		dst[index_dst] = src[i];
		i++;
		index_dst++;
	}
	dst[index_dst] = '\0';
	return (t1 + t2);
}
