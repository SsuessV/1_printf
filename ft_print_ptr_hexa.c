/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr_hexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:35:11 by syoun             #+#    #+#             */
/*   Updated: 2023/11/30 14:46:14 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr_hexa (void* ptr)
{
	unsigned int converted;
	int length;

	converted = (unsigned int)(void *)ptr;
	length = ft_hexa(converted);
	return (length);
}