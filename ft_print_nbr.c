/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:45:36 by atran             #+#    #+#             */
/*   Updated: 2024/11/13 21:48:23 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_unsigned_nbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count = count + ft_unsigned_nbr(n / 10);
	ft_putchar((n % 10) + '0');
	count++;
	return (count);
}

int	ft_unsigned_hex(unsigned long int n, char c)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = count + ft_unsigned_hex(n / 16, c);
	if (n % 16 <= 9)
		ft_putchar((n % 16) + '0');
	if (n % 16 > 9 && (c == 'x' || c == 'p'))
		ft_putchar((n % 16) - 10 + 'a');
	if (n % 16 > 9 && c == 'X')
		ft_putchar((n % 16) - 10 + 'A');
	count++;
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		count = ft_putstr("-2147483648");
	else if (n == 0)
		count = ft_putchar('0');
	else
	{
		if (n < 0)
		{
			count = ft_putchar('-');
			n = -n;
		}
		if (n >= 10)
			count = count + ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
		count++;
	}
	return (count);
}
