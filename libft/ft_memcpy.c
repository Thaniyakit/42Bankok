/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:02:28 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/20 19:23:57 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*temp;
	unsigned char	*tempsrc;
	size_t			i;
	unsigned char	find;

	i = 0;
	temp = dest;
	tempsrc = (unsigned char *) src;
	find = c;
	while (i < n)
	{
		temp[i] = tempsrc[i];
		if (tempsrc[i] == find)
			return (dest + (i + 1));
		i++;
	}
	return (0);
}
