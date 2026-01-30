/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:54:59 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/20 19:12:08 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*dest;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = ft_calloc(len, sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcat(dest, s1, len);
	ft_strlcat(dest, s2, len);
	return (dest);
}
/*
int	main(void)
{
	const char	*s1 = "HELLO";
	const char	*s2 = " WORLD";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("%s\n", result);
	free(result);
}*/
