/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:08:57 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/30 19:45:55 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

int	ft_putchar_fd(char c, int fd);
int	text_conversion(char *especifiers, va_list *args);
int	format_especifiers(const char *str, va_list *args);
int	ft_putstr(char *str, int fd);
int	ft_putnbr(int n, int fd);
int	ft_unsigned(unsigned int n, int fd);
int	ft_hex_low(unsigned int num);
int	ft_hex_up(unsigned int num);
int	ft_pointer(void *ptr);

#endif