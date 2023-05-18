/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:52:26 by thfourni          #+#    #+#             */
/*   Updated: 2023/04/18 02:23:59 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	len = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i + len])
		len++;
	while (len && ft_strchr(set, s1[i + len - 1]))
		len--;
	str = malloc(sizeof(*s1) * (len + 1));
	if (!str)
		return (0);
	while (j < len)
	{
		str[j] = s1[i + j];
		j++;
	}
	str[j] = 0;
	return (str);
}
