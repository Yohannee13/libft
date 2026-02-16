/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:44:02 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/16 20:45:23 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*nptr != '\0' && ft_isspace(*nptr) == 1)
		nptr++;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == 45)
			sign *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr) == 1)
	{
		result = result * 10 + (*nptr - '0');
		if (result > 2147483647 && sign == 1)
			return (1);
		if (result > 2147483648 && sign == -1)
			return (0);
		nptr++;
	}
	return (result * sign);
}
