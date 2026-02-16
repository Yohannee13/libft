/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:42:20 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:22:02 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ptr_big;
	const char	*ptr_little;
	size_t		remaining_len;

	if (*little == '\0')
		return ((char *)big);
	while (len > 0 && *big != '\0')
	{
		ptr_big = big;
		ptr_little = little;
		remaining_len = len;
		while (*ptr_little != '\0'
			&& *ptr_little == *ptr_big && remaining_len > 0)
		{
			ptr_little++;
			ptr_big++;
			remaining_len--;
		}
		if (*ptr_little == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
