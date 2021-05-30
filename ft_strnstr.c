/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:34:17 by gulim             #+#    #+#             */
/*   Updated: 2021/05/25 16:57:25 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs;
	char	*nd;
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		hs = (char *)haystack + i;
		nd = (char *)needle;
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j] && i + j < len)
			j++;
		if (*needle[j] == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
