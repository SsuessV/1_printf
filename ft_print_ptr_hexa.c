/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr_hexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:35:11 by syoun             #+#    #+#             */
/*   Updated: 2024/04/10 19:59:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_hexa(unsigned long long n)
{
    int remainder;
    int index;
    char converted[100];
    const char *hexa;

    index = 0;
    hexa = "0123456789abcdef";
    if (n == 0)
        write (1, "0", 1);
        return (1);
    while (n != 0)
    {
        remainder = n % 16;
        converted[index] = hexa[remainder];
        index++;
        n = n / 16;
    }
    while (index > 0)
        write (1, &converted[--index], 1);
}
int ft_count_hexa(unsigned long long n)
{
    int count = 0;

    if (n == 0)
        return (1);
    while (n != 0)
    {
        n = n / 16;
        count++;
    }
    return (count);
}

int	ft_print_ptr_hexa (unsigned long long ptr)
{
	int counter = 0;

	if (ptr != 0)
	{
		counter += write (1, "0x", 2);
		ft_hexa (ptr);
        counter += ft_count_hexa(ptr);
	}
    return (counter);
}