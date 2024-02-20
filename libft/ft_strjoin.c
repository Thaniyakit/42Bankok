/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:54:13 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/20 21:19:52 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*st1;
	int		len1;
	int		len2;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	st1 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!st1)
		return (NULL);
	ft_strlcpy(st1, s1, len1 + 1);
	ft_strlcpy(st1 + len1, s2, len2 + 1);
	return (st1);
}
