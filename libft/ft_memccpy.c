/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 18:19:29 by dkazanov          #+#    #+#             */
/*   Updated: 2016/12/18 18:19:29 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*strdest;
	unsigned char	*strsrc;
	unsigned char	chr;
	size_t			i;

	i = 0;
	chr = c;
	strsrc = (unsigned char *)src;
	strdest = (unsigned char *)dest;
	if (n)
	{
		while (i < n)
		{
			strdest[i] = strsrc[i];
			if (strsrc[i] == chr)
				return (&strdest[i + 1]);
			i++;
		}
	}
	return (NULL);
}
