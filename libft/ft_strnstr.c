/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:52:50 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/27 17:13:52 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;
	size_t	blen;
	size_t	size;

	if (len == 0 && !big)
		return (0);
	if (*little == '\0')
		return ((char *)big);
	llen = ft_strlen(little);
	blen = ft_strlen(big);
	if (blen < llen || len < llen)
		return (0);
	if (blen > len)
		size = len;
	else
		size = blen;
	while (size-- >= llen)
	{
		if (ft_memcmp(big, little, llen) == 0)
		{
			return ((char *)big);
		}
		big++;
	}
	return (0);
}
