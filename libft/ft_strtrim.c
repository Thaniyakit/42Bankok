/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:24:28 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/27 17:26:00 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (inset(s1[start], set) && s1[start])
		start++;
	if (!s1[start])
	{
		str = ft_strdup("");
		if (!str)
			return (NULL);
		return (str);
	}
	while (inset(s1[end], set) && end > 0)
		end--;
	end++;
	str = ft_substr(s1, start, end - start);
	return (str);
}
