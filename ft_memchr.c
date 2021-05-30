/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:19:29 by gulim             #+#    #+#             */
/*   Updated: 2021/05/06 14:41:28 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	val;

	i = 0;
	val = c;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == val)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
