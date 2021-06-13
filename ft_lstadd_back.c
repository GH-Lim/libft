/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 14:04:41 by gulim             #+#    #+#             */
/*   Updated: 2021/06/13 14:23:25 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	if (lst == NULL || new == NULL)
		return ;
	cur = ft_lstlast(*lst);
	if (cur == NULL)
		*lst = new;
	else
		cur->next = new;
}
