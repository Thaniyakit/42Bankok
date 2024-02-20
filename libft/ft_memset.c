/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:32:29 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/20 17:00:18 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*newdest;
	unsigned char	src;
	size_t			i;

	newdest = dest;
	src = c;
	i = 0;
	while (i++ < n)
		*newdest++ = src;
	return (dest);
}

