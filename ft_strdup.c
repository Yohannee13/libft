/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:52:55 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:19:40 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str_dup;
	size_t	s_size;

	s_size = ft_strlen(s) + 1;
	str_dup = (char *)malloc(sizeof(char) * s_size);
	if (!str_dup)
		return (NULL);
	ft_strlcpy(str_dup, s, s_size);
	return (str_dup);
}
