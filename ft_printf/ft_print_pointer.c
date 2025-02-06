/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yal-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:52:41 by yal-kham          #+#    #+#             */
/*   Updated: 2024/10/19 13:52:44 by yal-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(size_t value)
{
	int		i;

	i = 0;
	if (!value)
		i += ft_print_string("(nil)");
	else
	{
		i += ft_print_char('0');
		i += ft_print_char('x');
		i += ft_print_hexi(value, 'x');
	}
	return (i);
}
