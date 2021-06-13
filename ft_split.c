/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 15:45:35 by gulim             #+#    #+#             */
/*   Updated: 2021/06/11 17:30:51 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_size(char const *s, char c)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == 0)
			return (ret);
		while (s[i] && s[i] != c)
			i++;
		ret++;
	}
	return (ret);
}

static char	*ft_inner_str(char const *s, int start, int end)
{
	char	*p;
	int		i;

	if ((p = (char *)malloc(sizeof(char) * (end - start + 1))) == NULL)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = 0;
	return (p);
}

static char	**ft_free_all(char **ar)
{
	int i;

	i = 0;
	while (ar[i])
		free(ar[i++]);
	free(ar);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**result;
	int		res_size;
	int		i;
	int		l;
	int		start;

	res_size = ft_check_size(s, c);
	if ((result = (char **)malloc(sizeof(char *) * (res_size + 1))) == NULL)
		return (NULL);
	i = 0;
	l = 0;
	while (i < res_size)
	{
		while (s[l] == c)
			l++;
		start = l;
		while (s[l] && s[l] != c)
			l++;
		if ((result[i] = ft_inner_str(s, start, l)) == NULL)
			return (ft_free_all(result));
		i++;
	}
	result[i] = NULL;
	return (result);
}
