/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 21:27:07 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:16:54 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n_long;

	if (fd < 0)
		return ;
	n_long = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n_long *= -1;
	}
	if (n_long >= 10)
		ft_putnbr_fd(n_long / 10, fd);
	ft_putchar_fd((n_long % 10) + '0', fd);
}
