/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:29:55 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/27 16:43:46 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	if (!dstsize)
		return (ft_strlen(src));
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = destlen;
	if (dstsize < destlen)
		return (dstsize + srclen);
	if (dstsize > destlen + 1)
	{
		while (src[i - destlen] != '\0' && i + 1 < dstsize)
		{
			dst[i] = src[i - destlen];
			i++;
		}
	}
	dst[i] = '\0';
	return (destlen + srclen);
}
