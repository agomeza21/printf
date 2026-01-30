/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:26:04 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/14 10:17:22 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	i;

	lensrc = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (lensrc);
	while (i < size -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}
/*
int	main(void)
{
	char	dst[] = "";
	const char	src[] = "Goodbye";
	size_t	size;
	size_t	result;

	size = 4;
	result = ft_strlcpy(dst, src, size);
	printf("%zu %s", result, dst);
}*/
