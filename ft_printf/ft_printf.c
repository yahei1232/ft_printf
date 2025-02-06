/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yal-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:05:45 by yal-kham          #+#    #+#             */
/*   Updated: 2024/10/19 13:05:46 by yal-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_type(const char input, va_list args)
{
	int	i;

	i = 0;
	if (input == 'c')
		i += ft_print_char(va_arg(args, int));
	else if (input == 's')
		i += ft_print_string(va_arg(args, char *));
	else if (input == 'd' || input == 'i')
		i += ft_print_int(va_arg(args, int));
	else if (input == 'u')
		i += ft_print_unsigned(va_arg(args, unsigned int));
	else if (input == 'x' || input == 'X')
		i += ft_print_hexi(va_arg(args, unsigned int), input);
	else if (input == 'p')
		i += ft_print_pointer(va_arg(args, size_t));
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", input[i]))
				len += ft_check_type(input[i], args);
			else if (input[i] == '%')
				len += ft_print_char('%');
		}
		else
			len += ft_print_char(input[i]);
		input++;
	}
	va_end(args);
	return (len);
}
/*
int main()
{	
	char *b= "asd";
	ft_printf(" %p %p ", &b, b);
	printf(" %p %p ", &b, b);
}*/
