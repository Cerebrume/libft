/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 18:23:24 by dkazanov          #+#    #+#             */
/*   Updated: 2016/12/18 18:23:25 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*strdest;
	unsigned char	*strsrc;

	strsrc = (unsigned char *)src;
	strdest = (unsigned char *)dest;
	while (n > 0)
	{
		*strdest = *strsrc;
		strsrc++;
		strdest++;
		n--;
	}
	return (dest);
}
