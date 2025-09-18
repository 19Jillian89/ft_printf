/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:27:19 by ilnassi           #+#    #+#             */
/*   Updated: 2025/01/15 17:07:08 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putpercent(void);
int		ft_putnbr_unsigned(unsigned int nb);
int		ft_print_hexa(unsigned long long nb, int uppercase);
int		ft_formats(va_list args, const char format);
int		ft_print_ptr(void *ptr);

#endif
