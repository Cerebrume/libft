/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 18:49:54 by dkazanov          #+#    #+#             */
/*   Updated: 2016/12/18 18:49:55 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (s)
	{
		new = ft_strnew(len);
		if (!new)
			return (NULL);
		while (len > 0)
		{
			new[i] = s[start + i];
			i++;
			len--;
		}
		return (new);
	}
	return (NULL);
}
