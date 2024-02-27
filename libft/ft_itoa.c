/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42bankok.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:45:29 by thakitwo          #+#    #+#             */
/*   Updated: 2024/02/27 17:41:58 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnum(long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		num;
	long	a;
	char	*s;

	num = countnum(n);
	s = malloc(sizeof(char) * (num + 1));
	if (!s)
		return (NULL);
	s[num--] = '\0';
	a = n;
	if (a < 0)
	{
		a *= -1;
		s[0] = '-';
	}
	if (a == 0)
		s[0] = '0';
	while (a > 0)
	{
		s[num] = (a % 10) + '0';
		a = a / 10;
		num--;
	}
	return (s);
}
