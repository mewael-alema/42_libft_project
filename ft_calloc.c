/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 18:21:15 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 17:20:21 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len;

	len = nmemb * size;
	if ((len > 2147483647) || (nmemb > 2147483647) || (size > 2147483647))
		return (NULL);
	ptr = malloc (len);
	if (!ptr)
		return (NULL);
	else
	{
		ft_memset(ptr, 0, (nmemb * size));
		return (ptr);
	}
}
