/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:17 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 16:52:36 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

node	*ft_lstlast(node *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		head = head->next;
	}
	return (head);
}
