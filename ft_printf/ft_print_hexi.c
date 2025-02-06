/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yal-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:45:32 by yal-kham          #+#    #+#             */
/*   Updated: 2024/10/19 13:45:33 by yal-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexi(size_t value, const char inp)
{
	char	*base;
	int		c;

	c = 0;
	if (inp == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (value >= 16)
		c += ft_print_hexi (value / 16, inp);
	c += ft_print_char(base[value % 16]);
	return (c);
}
