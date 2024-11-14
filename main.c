/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:40:56 by atran             #+#    #+#             */
/*   Updated: 2024/11/14 12:00:47 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	a;
	int	b;
	//test %d, %i, %s, %c & %%
	a = printf("Hello %s we are %%Hiver %d %c\n", "Its purpose is to set the stage and define which elements will be stable and which will vary. This is when your va_list variable will have all the elements in the table.", -756788666, '!');
	b = ft_printf("Hello %s we are %%Hiver %d %c\n", "Its purpose is to set the stage and define which elements will be stable and which will vary. This is when your va_list variable will have all the elements in the table.", -756788666, '!');
	printf("%d %d\n", a, b);

	a = printf("Let's buy %d %s today because we have %d people coming %c\n", 7, "chicken legs", 7, '!');
	b = ft_printf("Let's buy %d %s today because we have %d people coming %c\n", 7, "chicken legs", 7, '!');
	printf("%d %d\n", a, b);

	//test specifier as the last character of the str
	a = printf("%c", '0');
	printf("\n");
	b = ft_printf("%c", '0');
	printf("\n");
	printf("%d %d\n", a, b);

	a = printf(" %c", '0' - 256);
	printf("\n");
	b = ft_printf(" %c", '0' - 256);
	printf("\n");
	printf("%d %d\n", a, b);

	//test %u
	a = printf("%u, %u, %u\n", -23455667, 0, 425374947);
	b = ft_printf("%u, %u, %u\n",  -23455667, 0, 425374947);
	printf("%d %d\n", a, b);

	//test %x & %X
	a = printf("%x, %x, %X, %X, %X\n", 10, -10, -3456789, 34567, 0);
	b = ft_printf("%x, %x, %X, %X, %X\n", 10, -10, -3456789, 34567, 0);
	printf("%d %d\n", a, b);

	//test %p
	char ch;
	a = printf("%p\n", &ch);
	b = ft_printf("%p\n", &ch);
	printf("%d %d\n", a, b);

	char *test_str;
	a = printf("%p\n", &test_str);
	b = ft_printf("%p\n", &test_str);
	printf("%d %d\n", a, b);

	//test empty pointer passed in as parameter
	a = printf("Hello %p\n", (void *)0);
	b = ft_printf("Hello %p\n", (void *)0);
	printf("%d %d\n", a, b);

	//test empty str passed in as parameter
	a = printf(" NULL %s NULL \n", (char *)NULL);
	b = ft_printf(" NULL %s NULL \n", (char *)NULL);
	printf("%d %d\n", a, b);
}
