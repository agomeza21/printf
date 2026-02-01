/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:11:30 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/30 19:19:28 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_low(unsigned int num)
{
	char	digit;
	int		count;

	count = 0;
	if (num >= 16)
		count = count + ft_hex_low(num / 16);
	digit = num % 16;
	if (digit < 10)
		digit = digit + '0';
	else if (digit >= 10)
		digit = (digit - 10) + 'a';
	ft_putchar(digit);
	count++;
	return (count);
}
