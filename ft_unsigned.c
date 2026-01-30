/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:37:11 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/30 19:41:07 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n, int fd)
{
	unsigned long	num;
	int				count;

	num = (unsigned long)n;
	count = 0;
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		count++;
		return (count);
	}
	if (num >= 10)
	{
		count = count + ft_unsigned(num / 10, fd);
	}
	ft_putchar_fd((num % 10) + '0', fd);
	count++;
	return (count);
}
