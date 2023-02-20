/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:25:10 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 14:58:06 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	char	*s;
	char	*d;
	size_t	destlen;
	size_t	rem;

	d = dst;
	s = (char *)src;
	rem = size;
	while (rem-- && *d)
		d++;
	destlen = d - dst;
	rem = size - destlen;
	if (rem == 0)
		return (ft_strlen(src) + destlen);
	while (*s != '\0')
	{
		if (rem > 1)
		{
			*d++ = *s;
			rem--;
		}
		s++;
	}
	*d = '\0';
	return (destlen + (s - src));
}
