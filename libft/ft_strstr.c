/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 18:49:17 by dkazanov          #+#    #+#             */
/*   Updated: 2016/12/18 18:49:18 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	char *s1;
	char *s2;

	if (*str2 == '\0')
		return ((char *)str1);
	while (*str1 != '\0')
	{
		s1 = (char *)str1;
		s2 = (char *)str2;
		while (*s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return ((char *)str1);
		str1++;
	}
	return (NULL);
}
