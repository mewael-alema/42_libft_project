/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:04:04 by malema            #+#    #+#             */
/*   Updated: 2023/01/06 15:24:52 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	char	len;

	len = ft_strlen(s);
	new = malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_memcpy(new, s, len + 1);
	return (new);
}
