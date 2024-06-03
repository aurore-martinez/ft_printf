/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumartin <aumartin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:13:06 by aumartin          #+#    #+#             */
/*   Updated: 2024/06/03 10:47:50 by aumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

/* Functions printf */
int		ft_printf(const char *s, ...);
int		print_select(const char *s, va_list argp, int *count);

/* Functions puttxt */
void	ft_putchar(va_list argp, int *count);
void	ft_putstr(va_list argp, int *count);

/* Functions putnbr */
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(long nb, int *count);
void	ft_int_to_nbr(va_list argp, int *count);
void	ft_uint_to_nbr(va_list argp, int *count);

/* Functions puthex */
void	ft_ptr_to_hex(va_list argp, int *count);
void	ft_long_to_hex(va_list argp, int *count, char conv);
void	ft_puthex(unsigned long n, char *base, int *count);

#endif
