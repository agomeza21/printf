/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:35:46 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/16 19:09:45 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	c;

	c = 0;
	return ((void)ft_memset(s, c, n));
}
/*
int	main(void)
{
	char	s[] = "hello";
	size_t	n = 4;

	ft_bzero((void *)&s[0], n);
	printf("%s", s);
}*/
