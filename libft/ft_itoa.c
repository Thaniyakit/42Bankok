/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:45:29 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/26 17:45:29 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnum(long n)
{
	size_t	i;

	i = 1;
	if (a < 0)
	{
		a *= -1;
	}
	while (n >= 10)
	{
		n = n % 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	num;
	long	a;
	char	*s;

	num = countnum(n);
	a = n;
	if (a < 0)
	{
		a *= -1;
		num++;
	}
	s = malloc(sizeof(char *) * (num + 1));
	if (!s)
		return (NULL);
	s[num] = '\0';
	while (a >= 10)
	{
		s[num - 1] = (a % 10) + '0';
		a = a / 10;
		num--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
