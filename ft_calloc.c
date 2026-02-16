/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:11:40 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:05:55 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes_to_allocate;
	void	*allocated_memory;

	if (nmemb == 0 || size == 0)
	{
		allocated_memory = ft_strdup("");
		return (allocated_memory);
	}
	if (nmemb != 0 && size > ((size_t) -1 / nmemb))
		return (NULL);
	bytes_to_allocate = nmemb * size;
	allocated_memory = malloc(bytes_to_allocate);
	if (!allocated_memory)
		return (NULL);
	ft_memset(allocated_memory, 0, bytes_to_allocate);
	return (allocated_memory);
}
