/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:07:55 by syoun             #+#    #+#             */
/*   Updated: 2024/04/23 12:50:12 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fspecifier(const char *format, void *args)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_putchar((long int) args);
	else if (*format == 's')
		i += ft_putstr((char *) args);
	else if (*format == 'p')
		i += ft_print_ptr_hexa((unsigned long long) args);
	else if (*format == 'd' || *format == 'i')
		i += ft_print_nbr((long int) args);
	else if (*format == 'u')
		i += ft_print_unsigned((unsigned long int) args);
	else if (*format == 'x')
		i += ft_print_hexa((unsigned long int) args);
	else if (*format == 'X')
		i += ft_print_hexaupp((unsigned long int) args);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	if (!format)
		return (-1);
	va_start (args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				i += ft_fspecifier (format, va_arg (args, void *));
			else if (*format == '%')
				i += ft_putchar(*format);
			else
				return (-1);
		}
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}
