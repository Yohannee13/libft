/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:51:26 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:30:19 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static short	get_digits_count(long n)
{
	short	digits_count;

	digits_count = 0;
	while (n / 10 > 0)
	{
		n /= 10;
		digits_count++;
	}
	digits_count++;
	return (digits_count);
}

static int	write_number(char **dest, long n, short sign, short digits_count)
{
	*dest = (char *)malloc(sizeof(char) * (digits_count + 1));
	if (!*dest)
		return (0);
	(*dest)[digits_count--] = '\0';
	while (digits_count > 0)
	{
		(*dest)[digits_count--] = (char)(n % 10) + '0';
		n /= 10;
	}
	if (sign < 0)
		(*dest)[digits_count] = '-';
	else
		(*dest)[digits_count] = (char)(n % 10) + '0';
	return (1);
}

char	*ft_itoa(int n)
{
	short	digits_count;
	short	sign;
	long	n_long;
	char	*n_to_string;

	digits_count = 0;
	n_long = n;
	sign = 1;
	if (n_long < 0)
	{
		n_long *= -1;
		sign = -1;
		digits_count++;
	}
	digits_count += get_digits_count(n_long);
	if (!write_number(&n_to_string, n_long, sign, digits_count))
		return (NULL);
	return (n_to_string);
}
