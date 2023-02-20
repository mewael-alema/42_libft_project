/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:05:30 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 17:22:47 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	m;

	if (!*little)
		return ((char *) big);
	m = 0;
	i = 0;
	if (len == 0)
		return (NULL);
	while (1)
	{
		if (little[m] == '\0')
			return ((char *) big + (i - m));
		if (big[i] == little[m])
			m++;
		else
		{
			i = i - m;
			m = 0;
		}
		if (big[i] == '\0' || i >= len)
			return (NULL);
		i++;
	}
	return (NULL);
}
