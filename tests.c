/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumartin <aumartin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:41:58 by aumartin          #+#    #+#             */
/*   Updated: 2024/05/31 14:21:56 by aumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int	ft;
	int	real;

	printf("char :\n");
	ft = ft_printf("test avec une chaine vide\n");
	real = printf("test avec une chaine vide\n");
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf("%%:\n");
	ft = ft_printf("test pourcent\n");
	real = printf("test pourcent\n");
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	return (0);
}
