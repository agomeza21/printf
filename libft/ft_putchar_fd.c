/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:45:26 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/23 13:01:42 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd == -1)
		return ;
	write (fd, &c, 1);
}
/*
int	main(void)
{
	char	c;
	int		fd;

	c = 'A';
	fd = 2;
	ft_putchar_fd(c, fd);
}*/