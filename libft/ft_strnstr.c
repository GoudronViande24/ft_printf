/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:46:45 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/03 17:59:38 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	if (!*s2)
		return (s1);
	i = 0;
	while (s1[i] && i < len)
	{
		j = 0;
		while (s2[j] == s1[i + j] && i + j < len)
		{
			if (!s2[j + 1])
				return (s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
