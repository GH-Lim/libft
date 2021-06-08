/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:13:08 by gulim             #+#    #+#             */
/*   Updated: 2021/06/08 16:20:19 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istrimmed(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*result;

	i = ft_strlen(s1);
	start = 0;
	while (start < i && ft_istrimmed(s1[start], set))
		start++;
	end = i - 1;
	while (end >= start && ft_istrimmed(s1[end], set))
		end--;
	if ((result = (char *)malloc(end - start + 1)) == NULL)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = 0;
	return (result);
}
