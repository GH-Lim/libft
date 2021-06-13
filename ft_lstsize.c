/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:55:46 by gulim             #+#    #+#             */
/*   Updated: 2021/06/13 14:54:59 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		cnt;

	if (lst == NULL)
		return (0);
	cur = lst;
	cnt = 0;
	while (cur)
	{
		cur = cur->next;
		cnt++;
	}
	return (cnt);
}
