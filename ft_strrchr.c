/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:00:57 by gulim             #+#    #+#             */
/*   Updated: 2021/05/25 16:32:12 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	val;

	val = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == val)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
