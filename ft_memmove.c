/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:44:45 by gulim             #+#    #+#             */
/*   Updated: 2021/06/11 18:43:56 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (dst <= src)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d = d + len - 1;
		s = s + len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
