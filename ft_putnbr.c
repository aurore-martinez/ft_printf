/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumartin <aumartin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:53:23 by aumartin          #+#    #+#             */
/*   Updated: 2024/05/31 14:03:42 by aumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_txt(char c)
{
	write(1, &c, sizeof(char));
}

void	ft_putnbr(long nb, int *count)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, count);
	}
	ft_putchar_txt(nb % 10 + '0');
	*count += 1;
}

void	ft_int_to_nbr(va_list argp, int *count)
{
	long	d;

	d = va_arg(argp, int);
	if (d < 0)
	{
		write(1, "-", 1);
		d *= -1;
		*count += 1;
	}
	ft_putnbr(d, count);
}

void	ft_uint_to_nbr(va_list argp, int *count)
{
	long	d;

	d = va_arg(argp, unsigned int);
	ft_putnbr(d, count);
}
