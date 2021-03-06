/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulim <gulim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:17:33 by gulim             #+#    #+#             */
/*   Updated: 2021/06/13 13:47:25 by gulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	if ((result = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}
