/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:56:26 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:10:10 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_cpy;
	unsigned char		*dest_cpy;

	src_cpy = (const unsigned char *)src;
	dest_cpy = (unsigned char *)dest;
	while (n-- > 0)
		*dest_cpy++ = *src_cpy++;
	return (dest);
}
