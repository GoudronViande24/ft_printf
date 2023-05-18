/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:40:57 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/18 17:45:24 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

// ft_printf.c
int	ft_printf(const char *format, ...);

// ft_get_args.c
int	ft_get_args(const char *format, va_list args);
int	ft_do_arg(char c, va_list args);

// ft_put.c
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putnbr_base(unsigned long long nbr, char *base);
int	ft_puthex_long(unsigned long long nbr);

#endif