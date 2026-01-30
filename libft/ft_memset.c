/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:27:14 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/16 18:30:45 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		while (c > 255 || c < -256)
		{
			c = c % 256;
		}
		if (c < 0)
			c = c + 256;
		p[i] = c;
		i++;
	}
	return ((void *)p);
}
/*
int	main(void)
{
	char	s[] = "hello";
	int	c = 5201;
	size_t	n = 4;

	printf("%s", (char *)ft_memset((void *)&s[0], c, n));
}*/
