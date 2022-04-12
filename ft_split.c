/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachaaib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:38:33 by zachaaib          #+#    #+#             */
/*   Updated: 2021/11/15 14:29:47 by zachaaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		count++;
	}
	return (count);
}

static char	*malloc_word(char const *s, char c)
{
	char	*word;
	int		count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	word = (char *)malloc(sizeof(char) * (count + 1));
	if (word == 0)
		return (0);
	ft_strlcpy(word, s, count + 1);
	return (word);
}

static char	**free_list(char **result, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free (result[i]);
	free (result);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	if (s == NULL)
		return (NULL);
	while (*s && *s == c)
		s++;
	arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (arr == 0)
		return (0);
	i = 0;
	while (*s)
	{
		arr[i] = malloc_word(s, c);
		if (arr[i] == 0)
			return (free_list(arr, i));
		i++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	arr[i] = 0;
	return (arr);
}
