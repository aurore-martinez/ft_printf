/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttxt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumartin <aumartin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:04:11 by aumartin          #+#    #+#             */
/*   Updated: 2024/05/31 15:44:49 by aumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(va_list argp, int *count)
{
	int	c;

	c = va_arg(argp, int);
	*count += write(1, &c, sizeof(char));
}

void	ft_putstr(va_list argp, int *count)
{
	char	*s;

	s = (char *)va_arg(argp, int *);
	if (!s)
	{
		write(1, "(null)", 6);
		*count += 6;
	}
	else
	{
		while (*s)
		{
			write(1, s, sizeof(char));
			*count += 1;
			s++;
		}
	}
}
