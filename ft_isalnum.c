/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:02:56 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:06:05 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	isalpha;
	int	isdigit;

	isalpha = ft_isalpha(c);
	isdigit = ft_isdigit(c);
	return (isalpha || isdigit);
}
