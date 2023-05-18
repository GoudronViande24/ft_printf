/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:42:48 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/03 16:56:02 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, int len)
{
	char	*new_dest;
	char	*new_src;

	if (dest == src || len == 0)
		return (dest);
	if (src < dest)
	{
		new_dest = dest + len - 1;
		new_src = src + len - 1;
		while (len--)
			*new_dest-- = *new_src--;
	}
	else if (src >= dest)
	{
		new_dest = dest;
		new_src = src;
		while (len--)
			*new_dest++ = *new_src++;
	}
	return (dest);
}
