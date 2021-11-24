/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_hexa_uper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:48:38 by alouzizi          #+#    #+#             */
/*   Updated: 2021/11/24 18:01:46 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa_uper(unsigned long hexa, int *len)
{	
	char	*base;

	base = "0123456789ABCDEF";
	if (hexa <= 15)
	{
		ft_putchar(base[hexa]);
		(*len)++;
	}
	if (hexa > 15)
	{
		print_hexa_uper(hexa / 16, len);
		print_hexa_uper(hexa % 16, len);
	}
}
