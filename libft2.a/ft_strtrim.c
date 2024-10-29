/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:08:43 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 20:20:57 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char	*s1, char	*set)
{
	size_t	start;
	size_t	end;
	char	*trimed;

	start = 0;
	end = ft_strlen(s1);
	while (is_in_set(s1[start], set) && start < end)
	{
		start++;
	}
	while (is_in_set(s1[end - 1], set) && end > start)
	{
		end--;
	}
	trimmed = (char *)malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy (trimmed, s1 + start, end - start + 1);
	return (trimmed);
}
