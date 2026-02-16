/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:44:01 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:10:07 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (const unsigned char *)src;
	if (dest_cpy > src_cpy)
	{
		while (n-- > 0)
			*(dest_cpy + n) = *(src_cpy + n);
	}
	else if (dest_cpy < src_cpy)
	{
		while (n-- > 0)
			*dest_cpy++ = *src_cpy++;
	}
	return (dest);
}
