/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsingedputnmbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:37:46 by alouzizi          #+#    #+#             */
/*   Updated: 2021/11/24 12:37:24 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int n, int *len)
{
	unsigned long	nb;

	nb = n;
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		(*len)++;
	}
	else
	{
		ft_putnbru(nb / 10, len);
		ft_putnbru(nb % 10, len);
	}
}
