/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 18:12:25 by dkazanov          #+#    #+#             */
/*   Updated: 2016/12/18 18:12:26 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int chr)
{
	return (chr >= 0 && chr <= 127);
}
