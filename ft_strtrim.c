/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:37:27 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:22:08 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed;
	const char	*start;
	const char	*end;
	size_t		size;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (ft_strchr(set, *start) != NULL && *start != '\0')
		start++;
	end = s1 + ft_strlen(s1);
	while (end > start && ft_strchr(set, *(end - 1)) != NULL)
		end--;
	size = end - start + 1;
	trimmed = (char *)malloc(sizeof(char) * size);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, start, size);
	return (trimmed);
}
