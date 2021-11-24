/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:05:49 by alouzizi          #+#    #+#             */
/*   Updated: 2021/11/24 18:00:51 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
#include <stdarg.h>
void	print_hexa_uper(unsigned long hexa, int *len);
void	print_hexa_lower(unsigned long hexa, int *len);
int		ft_putchar(char c);
int		ft_putnbr(int n);
void	ft_putstr(char *s);
int		print_string(char *s);
int		printdecimal(int nb);
int		ft_printf(const char *forr, ...);
void	print(char c, va_list ptr, int *len);
void	ft_putnbru(unsigned int n, int *len);
#endif