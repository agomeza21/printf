/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 11:16:15 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 16:17:21 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*mem;
	int		i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	mem = malloc(len + 1);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mem[i] = f(i, s[i]);
		i ++;
	}
	mem[i] = '\0';
	return (mem);
}
/* 
static char	test_f(unsigned int i, char c)
{
	return (c + i);
} */
/*
int	main(void)
{
	char const 	*s = "aaaa";
	char		*result;
	
	result = ft_strmapi(s,test_f);
	printf ("%s", result);
	free(result);
}*/