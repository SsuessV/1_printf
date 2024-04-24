/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr_hexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:35:11 by syoun             #+#    #+#             */
/*   Updated: 2024/04/23 12:50:05 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptr_hexa(unsigned long long n)
{
	int		remainder;
	int		index;
	char	converted[50];
	char	*hexa;

	hexa = "0123456789abcdef";
	index = 0;
	if (n == 0)
		write (1, "0", 1);
	while (n > 0)
	{
		remainder = n % 16;
		converted[index] = hexa[remainder];
		index++;
		n /= 16;
	}
	while (index > 0)
		write(1, &converted[--index], 1);
}

int	ft_count_len(unsigned long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_print_ptr_hexa(unsigned long long ptr)
{
	int	counter;

	counter = 0;
	if (ptr != 0)
	{
		counter += write (1, "0x", 2);
		ft_ptr_hexa (ptr);
		counter += ft_count_len(ptr);
	}
	else
		counter += write (1, "(nil)", 5);
	return (counter);
}
