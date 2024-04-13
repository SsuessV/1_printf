/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:29:03 by syoun             #+#    #+#             */
/*   Updated: 2024/04/13 09:33:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr (nb * (-1));
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		a = nb + '0';
		write(1, &a, 1);
	}
}
int	ft_count_len (int n)
{
	int count;

	count = 0;
	if (n == -2147483648)
		count += 11;
	else if (n < 0)
	{
		count++;
		count += ft_count_len(n * (-1));
	}
	else if (n >= 10)
	{
		count++;
		count += ft_count_len(n / 10);
	}
	else
		count++;
	return (count);
}
int	ft_print_nbr (int n)
{
	ft_putnbr(n);
	return (ft_count_len(n));
}