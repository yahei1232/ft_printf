/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yal-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:40:14 by yal-kham          #+#    #+#             */
/*   Updated: 2024/10/19 13:40:15 by yal-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int	len;
	int	temp;

	len = 0;
	temp = n;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		len++;
	}
	if (n == 0)
		len++;
	while (temp != 0)
	{
		len++;
		temp /= 10;
	}
	if (n >= 10)
		ft_print_int(n / 10);
	ft_print_char(n % 10 + '0');
	return (len);
}
