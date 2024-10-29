/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:21 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 16:56:01 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

node	*ft_lstmap(node *head, void *(*f)(void *), void (*del)(void *))
{
	node	*new;
	node	*old;

	if (!head || !f)
		return (NULL);
	new = NULL;
	while (head)
	{
		old = ft_lstnew (f(head->content));
		if (!old)
		{
			ft_lstclear(&old, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, old);
		head = head->next;
	}
	return (new);
}
