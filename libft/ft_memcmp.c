/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:08:43 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/22 10:33:54 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;
	size_t				i;

	p_s1 = (const unsigned char *)s1;
	p_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	s1[] = "goodbye";
	const char	s2[] = "ogodbey";
	size_t	n;

	n = 0;
	printf("%d\n", ft_memcmp((const void *)s1, (const void *)s2, n));
	printf("%d", memcmp((const void *)s1, (const void *)s2, n));
}*/
