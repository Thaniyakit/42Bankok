/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:43:46 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/27 14:06:35 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	find;
	int				i;

	find = (unsigned char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == find)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (0);
}
