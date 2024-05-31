/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumartin <aumartin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:41:58 by aumartin          #+#    #+#             */
/*   Updated: 2024/05/31 16:04:18 by aumartin         ###   ########.fr       */
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

	printf("%%%%:\n");
	ft = ft_printf("test pourcent pourcent\n");
	real = printf("test pourcent pourcent\n");
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf("char :\n");
	ft = ft_printf("char: %c et on continue\n", 0);
	real = printf("char: %c et on continue\n", 0);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("char: %c et on continue\n", 65);
	real = printf("char: %c et on continue\n", 65);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("%c\n", 65);
	real = printf("%c\n", 65);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf("str :\n");
	char *s = NULL;
	ft = ft_printf("str: %s et un truc\n", s);
	real = printf("str: %s et un truc\n", s);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf

	return (0);
}
