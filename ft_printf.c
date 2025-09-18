/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:30:18 by ilnassi           #+#    #+#             */
/*   Updated: 2025/01/16 15:04:54 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (format == 'x')
		return (ft_print_hexa(va_arg(args, unsigned int), 0));
	if (format == 'X')
		return (ft_print_hexa(va_arg(args, unsigned int), 1));
	if (format == '%')
		return (ft_putpercent());
	else
		return (0);
}

int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start (args, form);
	while (*form)
	{
		if (*form == '%')
		{
			form++;
			count += ft_formats(args, *form);
		}
		else
		{
			count += ft_putchar(*form);
		}
		form++;
	}
	va_end(args);
	return (count);
}
/*
int	main()
{
	int	x;
	int	len;

	x = 42;
	len = ft_printf("%p", &x);
	printf("\n%d\n", len);
}
*/
