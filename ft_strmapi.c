/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 19:40:03 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:21:30 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	size_t			s_len;
	unsigned int	i;

	if (!s || !f)
	{
		new_string = ft_strdup("");
		return (new_string);
	}
	s_len = ft_strlen(s);
	new_string = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new_string[i] = (*f)(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
