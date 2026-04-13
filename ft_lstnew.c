/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 22:22:49 by yoandria          #+#    #+#             */
/*   Updated: 2026/04/13 13:57:52 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr_new_node;

	ptr_new_node = (t_list *)malloc(sizeof(t_list));
	if (!ptr_new_node)
		return (NULL);
	ptr_new_node->content = content;
	ptr_new_node->next = NULL;
	return (ptr_new_node);
}
