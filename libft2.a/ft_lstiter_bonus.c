/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:11 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 16:51:08 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(node *head, void (*f)(void *))
{
	node	*temp;

	if (!head)
		return ;
	temp = head;
	while (temp)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}
