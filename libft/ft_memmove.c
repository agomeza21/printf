/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:44:04 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/19 14:41:45 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*p_src;
	char		*p_dest;

	p_dest = (char *)dest;
	p_src = (const char *)src;
	while (p_dest > p_src && n > 0)
	{
		p_dest[n - 1] = p_src[n - 1];
		n--;
	}
	if (p_dest < p_src)
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	char buffer1[20] = "abcdef";
	char buffer2[20] = "abcdef";
	
	printf("Before: %s\n", buffer1);
	ft_memmove(buffer1, buffer1 + 2, 4);
	printf("ft_memmove: %s\n", buffer1);
	
	memmove(buffer2, buffer2 + 2, 4);
	printf("mmmove: %s\n", buffer2);
	return 0;
}*/
