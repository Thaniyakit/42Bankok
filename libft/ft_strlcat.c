/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:29:55 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/20 19:25:34 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize < destlen + 1)
		return (dstsize + srclen);
	if (dstsize > destlen + 1)
	{
		while (src[i] != '\0' && destlen + 1 + i < dstsize)
		{
			dst[destlen + i] = src[i];
			i++;
		}
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}
