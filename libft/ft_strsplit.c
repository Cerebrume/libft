/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 18:48:04 by dkazanov          #+#    #+#             */
/*   Updated: 2016/12/18 18:48:04 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static	long	word_len(char const *s, char c)
{
	long i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	long	ft_countwords(char *str, char sep)
{
	long result;
	long i;

	i = 0;
	result = 0;
	while (str[i] && str[i] == sep)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != sep)
			i++;
		result++;
		while (str[i] && str[i] == sep)
			i++;
	}
	return (result);
}

char			**ft_strsplit(char const *s, char c)
{
	long	wcount;
	char	**split;
	long	i;

	if (!s)
		return (NULL);
	wcount = ft_countwords((char *)s, c);
	split = (char **)ft_memalloc((wcount + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < wcount)
	{
		s = next_word(s, c);
		split[i] = ft_strsub(s, 0, word_len(s, c));
		if (split[i] == NULL)
		{
			return (NULL);
		}
		i++;
		s += word_len(s, c);
	}
	split[wcount] = NULL;
	return (split);
}
