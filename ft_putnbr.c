/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:35:09 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/30 19:40:20 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int fd)
{
	long	num;
	int		count;

	num = (long)n;
	count = 0;
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		count++;
		return (count);
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		count++;
		num = num * (-1);
	}
	if (num >= 10)
	{
		count = count + ft_putnbr(num / 10, fd);
	}
	ft_putchar_fd((num % 10) + '0', fd);
	count++;
	return (count);
}
