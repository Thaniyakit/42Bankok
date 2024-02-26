/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:45:47 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/26 17:45:47 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_word(char *s, char c)
{
	size_t	i;
	size_t	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			num++;
			while (str[i] && str[i] != c)
				i++;
			if (!str[i])
				return (num);
		}
	}
	return (num);
}

static int	newword(char *s, size_t start, size_t end, char c)
{
	while (s[end] != c && s[end])
		end++;
	s = ft_substr(s, start, end - start);
	return (end);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	start;
	size_t	end;
	size_t	num;

	start = 0;
	end = 0;
	num = 0;
	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (1 + count_word(s, c)));
	if (!str)
		return (NULL);
	while (s[end])
	{
		if (str[end] != c)
		{
			start = end;
			end = newword(str + num, start, end, c);
			num++;
		}
		end++;
	}
	str[num] = NULL;
	return (str);
}
