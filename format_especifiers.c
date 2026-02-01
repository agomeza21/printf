/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_especifiers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:20:39 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/30 19:00:59 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_especifiers(const char *str, va_list *args)
{
	char	*especifiers;
	int		i;
	int		count;

	i = 0;
	count = 0;
	especifiers = "cspdiuxX";
	while (especifiers[i] != '\0')
	{
		if (*str == especifiers[i])
		{
			count = text_conversion(especifiers + i, args);
			break ;
		}
		if (*str == '%')
		{
			ft_putchar('%');
			count++;
			break ;
		}
		i++;
	}
	return (count);
}

int	text_conversion(char *especifiers, va_list *args)
{
	int	count;

	count = 0;
	if (*especifiers == 'c')
	{
		ft_putchar((char)va_arg(*args, int));
		count++;
	}
	if (*especifiers == 's')
		count = ft_putstr(va_arg(*args, char *));
	if (*especifiers == 'd' || *especifiers == 'i')
		count = ft_putnbr(va_arg(*args, int));
	if (*especifiers == 'u')
		count = ft_unsigned(va_arg(*args, unsigned int));
	if (*especifiers == 'p')
		count = ft_pointer(va_arg(*args, void *));
	if (*especifiers == 'x')
		count = ft_hex_low(va_arg(*args, unsigned int));
	if (*especifiers == 'X')
		count = ft_hex_up(va_arg(*args, unsigned int));
	return (count);
}
