/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 16:05:52 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:22:05 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_to_last;

	ptr_to_last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			ptr_to_last = (char *)s;
		s++;
	}
	if (c == '\0')
		ptr_to_last = (char *)s;
	return (ptr_to_last);
}
