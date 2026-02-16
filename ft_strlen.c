/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:07:55 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:20:38 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*end_ptr;

	end_ptr = s;
	while (*end_ptr != '\0')
	{
		end_ptr++;
	}
	return (end_ptr - s);
}
