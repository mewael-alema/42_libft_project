/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 21:23:54 by malema            #+#    #+#             */
/*   Updated: 2023/01/09 15:49:27 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		newnode = ft_lstnew(f(lst-> content));
		if (!newnode)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, newnode);
		lst = lst->next;
	}
	return (new);
}
