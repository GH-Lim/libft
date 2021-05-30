/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:51:32 by gulim             #+#    #+#             */
/*   Updated: 2021/05/25 16:24:26 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	l;
	char	val;

	i = 0;
	l = ft_strlen(s);
	val = c;
	if (val == 0)
		return ((char *)s + l);
	while (s[i])
	{
		if (s[i] == val)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
