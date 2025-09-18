/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_world.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:28:00 by ilnassi           #+#    #+#             */
/*   Updated: 2025/01/16 14:02:36 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putpercent(void)
{
	char	c;

	c = '%';
	ft_putchar(c);
	return (1);
}

int	ft_print_ptr(void *ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
	{
		i += ft_putstr("(nil)");
		return (i);
	}
	i = ft_putstr("0x");
	i += ft_print_hexa((unsigned long long)ptr, 0);
	return (i);
}
