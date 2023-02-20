/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:44:25 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 21:20:09 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*begin;

	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		begin = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = begin;
	}
}
