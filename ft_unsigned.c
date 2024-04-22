/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:55:45 by marvin            #+#    #+#             */
/*   Updated: 2024/04/13 19:55:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int n)
{
	char	nb;

	if (n < 10)
	{
		nb = n + '0';
		write(1, &nb, 1);
	}
	else
	{
		ft_unsigned(n / 10);
		ft_unsigned(n % 10);
	}
}

int	ft_length(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_print_unsigned(unsigned int n)
{
	ft_unsigned (n);
	return (ft_length(n));
}
