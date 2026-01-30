/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:04:50 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/20 12:38:31 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	mult;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	mult = nmemb * size;
	mem = malloc(mult);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, mult);
	return (mem);
}
/*
int	main(void)
{
	int     *ft;
	int     *sys;
	size_t	big_nmemb = (size_t)-1 / 2;

	printf("\n---- TEST 1: nmemb = 0 ----\n");
	ft = ft_calloc(0, sizeof(int));
	sys = calloc(0, sizeof(int));
	printf("ft_calloc: %p\n", ft);
	printf("calloc   : %p\n", sys);
	free(ft);
	free(sys);

	printf("\n---- TEST 2: overflow ----\n");
	ft = ft_calloc(big_nmemb, sizeof(int));
	sys = calloc(big_nmemb, sizeof(int));
	printf("ft_calloc: %p\n", ft);
	printf("calloc   : %p\n", sys);

	printf("\n---- TEST 3: size = 0 ----\n");
	ft = ft_calloc(10, 0);
	sys = calloc(10, 0);
	printf("ft_calloc: %p\n", ft);
	printf("calloc   : %p\n", sys);
	free(ft);
	free(sys);

	return (0);
}*/
