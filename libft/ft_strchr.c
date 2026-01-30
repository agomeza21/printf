/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:41:18 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/15 12:18:41 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == (unsigned char)(c))
		return ((char *)(s + i));
	return (NULL);
}
/*
int	main(void)
{
	const char s[] = "hello";
	int	c;
	char	*result;

	c = 'e';
	result = ft_strchr(s, c);
	printf("%s", result);
}*/
