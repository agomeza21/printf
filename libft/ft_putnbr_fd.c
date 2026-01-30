/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 13:50:37 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/23 15:27:47 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long)n;
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = num * (-1);
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	ft_putchar_fd((num % 10) + '0', fd);
}
/*
int	main(void)
{
	int	n;
	int	fd;

	n = -123;
	fd = 1;
	ft_putnbr_fd(n, fd);
}*/