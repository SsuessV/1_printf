/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:17:15 by syoun             #+#    #+#             */
/*   Updated: 2023/11/20 15:44:07 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_hexa(unsigned int n)
{
    int remainder;
    int index;
    char converted;

    index = 0;

    if (n == 0)
        write (1, '0', 1);
    while (n / 16 != 0)
    {
        remainder = n % 16
        converted[index] =  
        index++;    
    }  

}