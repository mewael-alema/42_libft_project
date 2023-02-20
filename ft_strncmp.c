/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:38:52 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 17:23:05 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	if (n == 0)
		return (0);
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (*str1 != '\0' && *str2 != '\0' && i < n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		else
			i++;
			str1++;
			str2++;
	}
	if (i == n)
		return (0);
	return (*str1 - *str2);
}
