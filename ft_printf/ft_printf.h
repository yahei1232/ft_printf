/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yal-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:19:46 by yal-kham          #+#    #+#             */
/*   Updated: 2024/10/19 13:19:47 by yal-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *input, ...);
int		ft_print_string(char *s);
int		ft_print_char(char c);
int		ft_print_int(int n);
int		ft_print_unsigned(unsigned int nb);
int		ft_print_hexi(size_t value, const char inp);
int		ft_print_pointer(size_t value);
char	*ft_strchr(const char *str, int n);
int		ft_strlen(const char *s);

#endif
