/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:08:57 by agomez-a          #+#    #+#             */
/*   Updated: 2026/02/02 10:11:20 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

void	ft_putchar(char c);
int		text_conversion(char *especifiers, va_list *args);
int		format_especifiers(const char *str, va_list *args);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_unsigned(unsigned int n);
int		ft_hex_low(unsigned int num);
int		ft_hex_up(unsigned int num);
int		ft_pointer(void *ptr);

#endif