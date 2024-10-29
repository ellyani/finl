/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:05:50 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 17:10:26 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(node **head, node *new_node)
{
	if (new_node == NULL)
		return ;
	if (*head != NULL)
	{
		ft_lstlast (*head)->next = new_node;
	}
	else
	{
		*head = new_node;
	}
}
