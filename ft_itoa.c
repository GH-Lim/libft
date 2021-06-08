/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:22:17 by gulim             #+#    #+#             */
/*   Updated: 2021/06/08 17:08:22 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

char		*ft_itoa(int n)
{
	char	*p;
	int		len;

	len = ft_intlen(n);
	if ((p = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	p[len] = 0;
	len--;
	if (n == 0)
		p[0] = '0';
	else if (n < 0)
		p[0] = '-';
	while (n)
	{
		p[len--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (p);
}
