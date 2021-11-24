/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdecimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:12:00 by alouzizi          #+#    #+#             */
/*   Updated: 2021/11/23 20:55:49 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printdecimal(int nb)
{
	char	*nbr;
	int		len;

	nbr = ft_itoa(nb);
	ft_putstr(nbr);
	len = ft_strlen(nbr);
	free (nbr);
	return (len);
}
