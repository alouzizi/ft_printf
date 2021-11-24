/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:46:35 by alouzizi          #+#    #+#             */
/*   Updated: 2021/11/24 18:01:40 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa_lower(unsigned long hexa, int *len)
{	
	char	*base;

	base = "0123456789abcdef";
	if (hexa <= 15)
	{
		ft_putchar(base[hexa]);
		(*len)++;
	}
	if (hexa > 15)
	{
		print_hexa_lower(hexa / 16, len);
		print_hexa_lower(hexa % 16, len);
	}
}
