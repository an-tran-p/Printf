/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:40:56 by atran             #+#    #+#             */
/*   Updated: 2024/11/13 22:01:18 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"

int	main(void)
{
	//test %d, %i, %s, %c & %%
	int	a = printf("Hello %s we are %%Hiver %d %c\n", "Its purpose is to set the stage and define which elements will be stable and which will vary. This is when your va_list variable will have all the elements in the table.", -756788666, '!');
	int	b = ft_printf("Hello %s we are %%Hiver %d %c\n", "Its purpose is to set the stage and define which elements will be stable and which will vary. This is when your va_list variable will have all the elements in the table.", -756788666, '!');
	printf("%d %d\n", a, b);

	int	c = printf("Let's buy %d %s today because we have %d people coming %c\n", 7, "chicken legs", 7, '!');
	int	d = ft_printf("Let's buy %d %s today because we have %d people coming %c\n", 7, "chicken legs", 7, '!');
	printf("%d %d\n", c, d);

	//test %u
	int	e = printf("%u, %u, %u\n", -23455667, 0, 425374947);
	int	f = ft_printf("%u, %u, %u\n",  -23455667, 0, 425374947);
	printf("%d %d\n", e, f);

	//test %x & %X
	int g = printf("%x, %x, %X, %X, %X\n", 10, -10, -3456789, 34567, 0);
	int h = ft_printf("%x, %x, %X, %X, %X\n", 10, -10, -3456789, 34567, 0);
	printf("%d %d\n", g, h);

	//test %p
	char ch;
	int i= printf("%p\n", &ch);
	int k= ft_printf("%p\n", &ch);
	printf("%d %d\n", i, k);

	char *test_str;
	int l= printf("%p\n", &test_str);
	int m= ft_printf("%p\n", &test_str);
	printf("%d %d\n", l, m);
}
