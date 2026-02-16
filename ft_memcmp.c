/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 17:33:06 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:10:04 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_copy;
	const unsigned char	*s2_copy;

	if (n == 0)
		return (0);
	s1_copy = (const unsigned char *)s1;
	s2_copy = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*s1_copy != *s2_copy)
			return (*s1_copy - *s2_copy);
		s1_copy++;
		s2_copy++;
	}
	return (0);
}
