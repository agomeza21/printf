/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:27:53 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/15 13:08:04 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c || c == '\0')
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char s[] = "hello";
	int	c;
	char	*result;

	c = 'e';
	result = ft_strrchr(s, c);
	printf("%s", result);
}*/
