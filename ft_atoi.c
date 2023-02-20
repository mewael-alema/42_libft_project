/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malema <malema@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:11:02 by malema            #+#    #+#             */
/*   Updated: 2023/01/08 17:23:14 by malema           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if ((c > 8 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1 * sign;
		i++;
	}
	while (ft_isdigit(nptr[i]) == 1)
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}	
	if (res > INT_MAX && sign == 1)
		return (-1);
	else if (res - 1 > INT_MAX && sign == -1)
		return (0);
	return ((int)sign * res);
}
