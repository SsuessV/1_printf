/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:57:53 by syoun             #+#    #+#             */
/*   Updated: 2024/04/24 10:02:23 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_print_hexa(unsigned int n);
int		ft_print_hexaupp(unsigned int n);
int		ft_print_ptr_hexa(unsigned long long ptr);
int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_strlen(char *str);
int		ft_putstr(char *str);
int		ft_print_unsigned(unsigned int n);
int		ft_print_nbr(int n);
char	*ft_strchr(const char *s, int c);

#endif
