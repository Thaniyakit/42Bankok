/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:24:28 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/20 21:25:18 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(char c, char *set)
{
	while (set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (inset(s1[start], set))
		if (++start == ft_strlen(s1))
			break ;
	if (start == ft_strlen(s1))
	{
		str = ft_strdup("");
		if (!str)
			return (NULL);
		return (str);
	}
	while (inset(s1[end - 1], set))
		if (--end < 0)
			break ;
	str = ft_substr(s1, start, end - start);
	return (str);
}
