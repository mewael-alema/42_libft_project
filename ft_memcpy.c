/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:12:05 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 17:20:31 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
		n--;
	}
	return (dest);
}
