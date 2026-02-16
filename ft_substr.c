/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:26:50 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:23:16 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		new_string = ft_strdup("");
		return (new_string);
	}
	if (len > s_len - start)
		len = s_len - start;
	new_string = malloc(sizeof(char) * (len + 1));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s + start, len + 1);
	return (new_string);
}
