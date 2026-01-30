/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:47:46 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/22 10:47:25 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lentotal;
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size <= i)
		return (size + ft_strlen(src));
	lentotal = i + ft_strlen(src);
	while (i < size -1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lentotal);
}
/*
int	main(void)
{
	char	dst[] = "say something";
	char	src[] = " and i will put it";
	size_t	size = 17;
	size_t	result;

	result = ft_strlcat(dst, src, size);
	printf("%zu %s", result, dst);
}*/
