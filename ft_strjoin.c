/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:16:53 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/15 11:30:24 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_string;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	joined_string = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!joined_string)
		return (NULL);
	joined_string[0] = '\0';
	ft_strlcat(joined_string, s1, total_len + 1);
	ft_strlcat(joined_string, s2, total_len + 1);
	return (joined_string);
}
