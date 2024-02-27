/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:09:30 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/20 19:24:24 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*newdest;
	unsigned char	*newsrc;

	if (dest == src)
		return (dest);
	newdest = (unsigned char *)dest;
	newsrc = (unsigned char *)src;
	if (dest < src)
	{
		while (n--)
			*newdest++ = *newsrc++;
	}
	else
	{
		newdest = newdest + (n - 1);
		newsrc = newsrc + (n - 1);
		while (n--)
			*newdest-- = *newsrc--;
	}
	return (dest);
}
