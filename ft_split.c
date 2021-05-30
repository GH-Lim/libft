/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:49:55 by gulim             #+#    #+#             */
/*   Updated: 2021/05/25 15:17:17 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		*ft_splitlen(char const *s, char c, int size)
{
	int		*result;
	int		n;
	int		i;
	int		cnt;

	if ((result = (int *)malloc(sizeof(int) * size)) == NULL)
		return (NULL);
	n = 0;
	i = 0;
	while (n < size)
	{
		cnt = 0;
		while (s[i])
		{
			if (s[i++] == c)
				break;
			cnt++;
		}
		result[n] = cnt;
		n++;
	}
	return (result);
}

static int		ft_strcnt(char const *s, char c)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 1;
	while (s[i])
		if (s[i++] == c)
			cnt++;
	return (cnt);
}

static void		ft_free_invalid(char **sa)
{
	size_t	i;

	i = 0;
	while (sa[i])
		free(sa[i++]);
	free(sa);
}

static void		ft_fill_str(char const *s, char c, char **ret, size_t len)
{
	size_t	str_idx;
	size_t	arr_idx;
	size_t	i;

	arr_idx = 0;
	str_idx = 0;
	while (arr_idx < len)
	{
		i = 0;
		while (s[str_idx] && s[str_idx] != c)
			ret[arr_idx][i++] = s[str_idx++];
		str_idx++;
		ret[arr_idx][i] = 0;
		arr_idx++;
	}
	ret[arr_idx] = NULL;
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		cnt;
	int		*lens;

	cnt = ft_strcnt(s, c);
	if ((result = (char **)malloc(sizeof(char *) * (cnt + 1))) == NULL)
		return (NULL);
	if ((lens = (int *)malloc(sizeof(int) * cnt)) == NULL)
		return (NULL);
	lens = ft_splitlen(s, c, cnt);
	i = 0;
	while (i < cnt)
	{
		if ((result[i] = (char *)malloc(sizeof(char) * (lens[i] + 1))) == NULL)
		{
			ft_free_invalid(result);
			free(lens);
			return (NULL);
		}
		i++;
	}
	ft_fill_str(s, c, result, cnt);
	free(lens);
	return (result);
}
