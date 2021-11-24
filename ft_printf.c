/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:02:38 by alouzizi          #+#    #+#             */
/*   Updated: 2021/11/24 18:03:59 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *forr, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	i = 0;
	va_start(ptr, forr);
	len = 0;
	while (forr[i])
	{
		if (forr[i] == '%')
			print(forr[++i], ptr, &len);
		else
		{
			ft_putchar(forr[i]);
				len++;
		}
		i++;
	}
	va_end(ptr);
	return (len);
}

void	print(char c, va_list ptr, int *len)
{
	if (c == '%')
		(*len) += ft_putchar('%');
	else if (c == 'c')
		(*len) += ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		(*len) += print_string(va_arg(ptr, char *));
	else if (c == 'd' || c == 'i')
	{
		(*len) += printdecimal(va_arg(ptr, int));
	}
	else if (c == 'x')
		print_hexa_lower(va_arg(ptr, unsigned int), len);
	else if (c == 'X')
		print_hexa_uper(va_arg(ptr, unsigned int), len);
	else if (c == 'p')
	{
		ft_putstr("0x");
		(*len) += 2;
		print_hexa_lower(va_arg(ptr, unsigned long), len);
	}
	else if (c == 'u')
		ft_putnbru(va_arg(ptr, unsigned int), len);
}
