/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:11:25 by atran             #+#    #+#             */
/*   Updated: 2024/11/13 22:01:15 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_specifier(va_list args, char c, int count)
{
	if (c == 'c')
		count += ft_putchar((char)va_arg(args, int));
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(args, int));
	if (c == '%')
		count += ft_putchar('%');
	if (c == 'u')
		count += ft_unsigned_nbr(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		count += ft_unsigned_hex(va_arg(args, unsigned int), c);
	if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_unsigned_hex(va_arg(args, unsigned long int), c);
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			count = ft_specifier(args, *str, count);
			str++;
		}
		count += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
