/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:38:55 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/04 14:43:52 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

int	ft_countdigits(long n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;
	long	nb;

	nb = n;
	len = ft_countdigits(nb);
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	str = malloc(sizeof(*str) * (len + neg + 1));
	if (!str)
		return (0);
	str[len + neg] = 0;
	if (neg)
		str[0] = '-';
	while (len--)
	{
		str[len + neg] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
