/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:29:02 by ilnassi           #+#    #+#             */
/*   Updated: 2025/01/16 14:02:10 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	char	digit;
	int		char_count;

	char_count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		char_count++;
		nb = -nb;
	}
	if (nb >= 10)
		char_count += ft_putnbr(nb / 10);
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
	char_count++;
	return (char_count);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	char	digit;
	int		char_count;

	char_count = 0;
	if (nb >= 10)
		char_count += ft_putnbr_unsigned(nb / 10);
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
	char_count++;
	return (char_count);
}

int	ft_print_hexa(unsigned long long nb, int uppercase)
{
	char	*hex;
	int		char_count;

	char_count = 0;
	if (uppercase)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (nb >= 16)
		char_count += ft_print_hexa(nb / 16, uppercase);
	write(1, &hex[nb % 16], 1);
	char_count++;
	return (char_count);
}
