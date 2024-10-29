/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:48:08 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 16:01:56 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static	size_t	ft_cha_in_word(char const *s, char c )
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			j++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			return (j);
		i++;
	}
	return (j);
}

static	int	ft_aloc(char const *s, char c, char *str, char **ptr)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (j == 0 && s[i] != c)
		{
			str = malloc(sizeof (char) * (ft_cha_in_word(&s[i], c) + 1));
			if (!str)
				return (0);
		}
		if (s[i] != c)
			str[j++] = s[i];
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			str[j] = '\0';
			*ptr++ = str;
			j = 0;
		}
		i++;
	}
	*ptr = 0;
	return (1);
}

static	void	ft_free(char *str, char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
	ptr = 0;
	free(str);
	str = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;

	if (!s)
		return (0);
	ptr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ptr)
		return (0);
	str = 0;
	if (!ft_aloc(s, c, str, ptr))
	{
		ft_free(str, ptr);
		return (0);
	}
	return (ptr);
}
