/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:01:48 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/19 17:18:30 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p_s;
	const unsigned char	*result;
	size_t				i;

	p_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p_s[i] == (unsigned char)c)
		{
			result = p_s + i;
			return ((void *)result);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char s[] = "hello";
	int	c;
	size_t	n = 7;

	c = 'e';
	if ((char *)ft_memchr((const void *)s, c, n) == NULL)
		printf("(null)\n");
	else
		printf("%s\n", (char *)ft_memchr((const void *)s, c, n));
	printf("%s", (char *)memchr((const void *)s, c, n));
}*/
