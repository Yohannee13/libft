/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 16:48:23 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:10:02 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_copy;
	unsigned char		c_copy;

	s_copy = (const unsigned char *)s;
	c_copy = (unsigned char)c;
	while (n-- > 0)
	{
		if (*s_copy == c_copy)
			return ((void *)s_copy);
		s_copy++;
	}
	return (NULL);
}
