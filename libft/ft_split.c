/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:26:38 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/17 18:20:29 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static unsigned int	ft_countwords(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

int	ft_flush(char **tab, int i)
{
	while (i--)
		free(tab[i]);
	free(tab);
	return (0);
}

static void	ft_fill(char *dest, const char *src, char c)
{
	while (*src && *src != c)
		*dest++ = *src++;
	*dest = 0;
}

static int	ft_split_fill(char **tab, const char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			k = 0;
			while (s[k] && s[k] != c)
				k++;
			tab[i] = malloc(sizeof(char) * (k + 1));
			if (!tab[i])
				return (ft_flush(tab, i));
			ft_fill(tab[i++], s, c);
			s += k;
		}
		else
			s++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	tab = malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	tab[count] = NULL;
	if (!ft_split_fill(tab, s, c))
		return (NULL);
	return (tab);
}
