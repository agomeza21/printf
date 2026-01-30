/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:34:51 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/30 19:39:59 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int fd)
{
	int	count;
	int	i;

	count = 0;
	if (!str || fd == -1)
	{
		ft_putstr("(null)", 1);
		count = count + 6;
		return (count);
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		count++;
		i++;
	}
	return (count);
}
