/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:29:03 by syoun             #+#    #+#             */
/*   Updated: 2024/04/23 12:50:30 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	if (nb < 0 && nb > -2147483648)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10 && nb <= 2147483647)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_print_nbr(int n)
{
	ft_putnbr(n);
	return (ft_len(n));
}
