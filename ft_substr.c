/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:00:37 by malema            #+#    #+#             */
/*   Updated: 2023/01/05 15:36:14 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;
	size_t	size;

	if (!s)
		return (NULL);
	if (ft_strlen (s) > len)
		size = len;
	else
		size = ft_strlen(s + start);
	new = (char *) malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (size > 0 && start < ft_strlen(s))
	{
		new[i++] = s[start++];
		size--;
	}
	new[i] = '\0';
	return (new);
}
