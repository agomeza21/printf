/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:17:04 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/22 10:35:49 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] - s2[i] != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	s1[] = "hellooo";
	const char	s2[] = "hellolo";
	size_t	n;

	n = 5;
	printf("%d", ft_strncmp(s1, s2, n));
}*/
