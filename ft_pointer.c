/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:58:25 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/30 19:41:53 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexadecimals(uintptr_t uns_ptr);

int	ft_pointer(void *ptr)
{
	int			count;
	uintptr_t	uns_ptr;

	count = 0;
	if (ptr == NULL)
	{
		ft_putstr("(nil)", 1);
		count = count + 5;
		return (count);
	}
	ft_putstr("0x", 1);
	count = count + 2;
	uns_ptr = (uintptr_t)ptr;
	count = count + hexadecimals(uns_ptr);
	return (count);
}

static int	hexadecimals(uintptr_t uns_ptr)
{
	char		digit;
	int			count;

	count = 0;
	if (uns_ptr >= 16)
		count = count + hexadecimals(uns_ptr / 16);
	digit = uns_ptr % 16;
	if (digit < 10)
		digit = digit + '0';
	else if (digit >= 10)
		digit = (digit - 10) + 'a';
	ft_putchar_fd(digit, 1);
	count++;
	return (count);
}
