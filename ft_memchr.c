/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:29:34 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 17:23:44 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
