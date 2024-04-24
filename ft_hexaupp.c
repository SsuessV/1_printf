/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:17:15 by syoun             #+#    #+#             */
/*   Updated: 2024/04/24 11:13:26 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexaupp(unsigned int n)
{
	int		remainder;
	int		index;
	char	converted[50];
	char	*hexa;

	hexa = "0123456789ABCDEF";
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

int	ft_hexaupp_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_print_hexaupp(unsigned int n)
{
	if (n == 0)
		return (ft_putchar('0'));
	ft_hexaupp(n);
	return (ft_hexaupp_len(n));
}
/* int	main (void)
{
	unsigned int deci = 1000;
	printf("outcome ft_hexa:");
	ft_hexa(deci);
	printf("\n");

	char	hexsprintf[50];
	sprintf(hexsprintf, "%x", deci);
	printf("outcome sprintf %s\n", hexsprintf);
} */