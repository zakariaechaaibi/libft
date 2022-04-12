/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachaaib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:03:15 by zachaaib          #+#    #+#             */
/*   Updated: 2021/11/14 11:04:29 by zachaaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		minlen;

	if (s == NULL)
		return (NULL);
	minlen = ft_strlen(s) - start;
	if (minlen < 0)
		return (ft_strdup(""));
	else if (minlen < (int) len)
		len = minlen;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
