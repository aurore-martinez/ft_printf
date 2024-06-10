/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumartin <aumartin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:19:52 by aumartin          #+#    #+#             */
/*   Updated: 2024/06/03 14:29:29 by aumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(long nb, char *base, int *count)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return ; /* Si la base est invalide, on quitte la fonction */
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		*count += 1;
		nb *= -1;
	}
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base, count);
	}
	ft_putchar_fd(base[nb % base_len], 1);
	*count += 1;
}

void	ft_int_to_nbr(va_list argp, int *count)
{
	long	d;

	d = va_arg(argp, int);
	ft_putnbr_base(d, "0123456789", count);
}

void	ft_ptr_to_hex(va_list argp, int *count)
{
	unsigned long	ptr;

	ptr = (unsigned long)va_arg(argp, void *);
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		*count += 5;
	}
	else
	{
		write(1, "0x", 2);
		*count += 2;
		ft_putnbr_base(ptr, "0123456789abcdef", count);
	}
}

void	ft_long_to_hex(va_list argp, int *count, char conv)
{
	unsigned long	n;
	char			*base;

	n = va_arg(argp, unsigned long);
	if (conv == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	ft_putnbr_base(n, base, count);
}
