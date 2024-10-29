/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:34 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 17:07:00 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(node *head)
{
	int	len;

	len = 0;
	if (!head)
		return (0);
	node	*temp;
	*temp = head;
	while (temp->next != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
