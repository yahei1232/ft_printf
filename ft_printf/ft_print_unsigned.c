/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yal-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:43:23 by yal-kham          #+#    #+#             */
/*   Updated: 2024/10/19 13:43:24 by yal-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printout(unsigned int nb)
{
	if (nb > 9)
		printout(nb / 10);
	ft_print_char((nb % 10) + '0');
}

int	ft_print_unsigned(unsigned int nb)
{
	unsigned int	i;

	i = 1;
	printout(nb);
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
