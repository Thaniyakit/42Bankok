/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:45:47 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/27 18:06:02 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_word(const char *s, char c)
{
	size_t	i;
	size_t	num;

	i = 0;
	num = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			num++;
			while (s[i] && s[i] != c)
				i++;
			if (!s[i])
				return (num);
		}
		else
			i++;
	}
	return (num);
}

static int	newword(char **str, int end, char c, const char *s)
{
	size_t	start;

	start = end;
	while (s[end] != c && s[end])
	{
		end++;
	}
	*str = ft_substr(s, start, end - start);
	return (end);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	end;
	size_t	num;

	end = 0;
	num = 0;
	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (1 + count_word(s, c)));
	if (!str)
		return (NULL);
	while (s[end])
	{
		if (s[end] != c)
		{
			end = newword(&str[num], end, c, s);
			num++;
		}
		else
			end++;
	}
	str[num] = NULL;
	return (str);
}
