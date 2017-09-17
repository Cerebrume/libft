/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 18:38:27 by dkazanov          #+#    #+#             */
/*   Updated: 2016/12/18 18:38:28 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	size_t	l;
	char	*str2;

	l = ft_strlen(str1) + 1;
	str2 = (char *)malloc(sizeof(char) * l);
	if (str2 == NULL)
		return (NULL);
	ft_strcpy(str2, str1);
	return (str2);
}
