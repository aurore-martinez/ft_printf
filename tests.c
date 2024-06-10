/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumartin <aumartin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:41:58 by aumartin          #+#    #+#             */
/*   Updated: 2024/06/04 15:11:58 by aumartin         ###   ########.fr       */
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

	ft = ft_printf("str: %s et un truc\n", "iuefhjkdb wuefh\t \t rfger\n");
	real = printf("str: %s et un truc\n", "iuefhjkdb wuefh\t \t rfger\n");
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("int: %i et un truc\n", 5);
	real = printf("int: %i et un truc\n", 5);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf("int i :\n");
	int b = INT_MIN;
	ft = ft_printf("int_min: %i et un truc\n", b);
	real = printf("int_min: %i et un truc\n", b);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	b = INT_MAX;
	ft = ft_printf("int_max: %i et un truc\n", b);
	real = printf("int_max: %i et un truc\n", b);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	b = 0;
	ft = ft_printf("0: %i et un truc\n", b);
	real = printf("0: %i et un truc\n", b);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf("int d :\n");
	int c = INT_MIN;
	ft = ft_printf("int_min: %d et un truc\n", c);
	real = printf("int_min: %d et un truc\n", c);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	c = INT_MAX;
	ft = ft_printf("int_max: %d et un truc\n", c);
	real = printf("int_max: %d et un truc\n", c);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf("int d :\n");
	unsigned int d = 0;
	ft = ft_printf("0: %d et un truc\n", d);
	real = printf("0: %d et un truc\n", d);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	d = UINT_MAX;
	ft = ft_printf("UINT_MAX: %u et un truc\n", d);
	real = printf("UINT_MAX: %u et un truc\n", d);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf("pointeur :\n");
	int a = 0;
	int *p = &a;
	ft = ft_printf("ptr: %p et un truc\n", p);
	real = printf("ptr: %p et un truc\n", p);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	a = 0;
	p = NULL;
	ft = ft_printf("ptr: %p et un truc\n", p);
	real = printf("ptr: %p et un truc\n", p);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	a = INT_MAX;
	p = &a;
	ft = ft_printf("ptr: %p\n", p);
	real = printf("ptr: %p\n", p);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	unsigned long e = ULONG_MAX;
	unsigned long *ptr = &e;
	ft = ft_printf("ptr: %p\n", ptr);
	real = printf("ptr: %p\n", ptr);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("ptr: %p et un truc\n", (void *)0);
	real = printf("ptr: %p et un truc\n", (void *)0);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf("hexa x :");
	ft = ft_printf("INT_MIN en hexa: %x et un truc\n", INT_MIN);
	real = printf("INT_MIN en hexa: %x et un truc\n", INT_MIN);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("INT_MAX en hexa: %x et un truc\n", INT_MAX);
	real = printf("INT_MAX en hexa: %x et un truc\n", INT_MAX);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("0 en hexa: %x et un truc\n", 0);
	real = printf("0 en hexa: %x et un truc\n", 0);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("42 en hexa: %x et un truc\n", -42);
	real = printf("42 en hexa: %x et un truc\n", -42);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	printf("HEXA X :");
	ft = ft_printf("INT_MIN en heXa: %X et un truc\n", INT_MIN);
	real = printf("INT_MIN en heXa: %X et un truc\n", INT_MIN);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("INT_MAX en heXa: void%X et un truc\n", INT_MAX);
	real = printf("INT_MAX en heXa: %X et un truc\n", INT_MAX);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("0 en heXa: %X et un truc\n", 0);
	real = printf("0 en heXa: %X et un truc\n", 0);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("-42 en hexa: %X et un truc\n", -42);
	real = printf("-42 en hexa: %X et un truc\n", -42);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("-42 en hexa: %u et un truc\n", -42);
	real = printf("-42 en hexa: %u et un truc\n", -42);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	char *test = "test";
	ft = ft_printf("%s et un truc\n", test);
	real = printf("%s et un truc\n", test);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	ft = ft_printf("%d, %d, %c et un truc\n", -1, 9, 49);
	real = printf("%d, %d, %c et un truc\n", -1, 9, 49);
	printf("len_ft_printf = %d et len_printf = %d\n\n", ft, real);

	return (0);
}
