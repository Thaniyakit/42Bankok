/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:02:28 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/27 14:51:36 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*tempsrc;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	temp = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	while (i < n)
	{
		temp[i] = tempsrc[i];
		i++;
	}
	return (temp);
}
