/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:55:46 by sakkaya           #+#    #+#             */
/*   Updated: 2022/04/13 13:32:51 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdio.h"
# include "unistd.h"
# include "stdarg.h"
# include "stdlib.h"

char	*ft_itoa(int n);
int		ft_len(int n);
int		ft_putchar(char c);
int		ft_formats(va_list args, const char format);
int		ft_printhex(unsigned int n, char format);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int		ft_printpointer(unsigned long long n);
int		ft_len_hex(unsigned int n);
int		ft_point_hex_len(unsigned long long n);
void	ft_put_point(unsigned long long n);
int		ft_len_unsigned(unsigned int n);
int		ft_print_unsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_printf(const char *str, ...);

#endif