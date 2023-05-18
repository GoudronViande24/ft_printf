/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:35:29 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/03 16:55:59 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, int n)
{
	char	*new_dest;
	char	*new_scr;
	int		i;

	if (!dest && !src)
		return (0);
	new_dest = dest;
	new_scr = src;
	i = 0;
	while (i++ < n)
		*new_dest++ = *new_scr++;
	return (dest);
}
