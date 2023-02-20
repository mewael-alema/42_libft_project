/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:29:01 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 17:22:14 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	ret = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = &((char *)s)[i];
		i++;
	}
	if (c == '\0')
		ret = &((char *)s)[i];
	return (ret);
}
