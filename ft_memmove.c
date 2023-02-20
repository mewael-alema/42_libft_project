/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:20:52 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 17:21:07 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *) dest;
	str2 = (unsigned char *) src;
	i = 0;
	if (!str2 && !str)
		return (NULL);
	if (str > str2)
	{
		while (n-- > 0)
			str[n] = str2[n];
	}
	else
	{
		while (i < n)
		{
			str[i] = str2[i];
			i++;
		}
	}
	return (dest);
}
