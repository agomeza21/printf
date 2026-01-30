/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:04:57 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/19 14:42:58 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p_dest;
	const char	*p_src;

	p_dest = (char *)dest;
	p_src = (const char *)src;
	i = 0;
	while (i < n && (src || dest))
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "ABCDEF";
	char	dest[] = "GHIJKL";
	size_t	n = 5;
	ft_memcpy(dest, src, n);
	printf("%s", dest);
}*/
