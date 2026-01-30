/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:46:10 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/20 12:43:41 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	nmemb;
	char	*result;
	void	*mem;

	nmemb = ft_strlen(s);
	mem = ft_calloc(nmemb + 1, sizeof(char));
	if (mem == NULL)
		return (NULL);
	result = ft_memcpy(mem, s, nmemb);
	return (result);
}
/*
int	main(void)
{
	//const char	s[] = "";
	const char	*s = NULL;
	char	*result1;
	char	*result2;

	printf("Before: %s\n", s);
	result1 = ft_strdup(s);
	printf("ft_strdup: %s\n", result1);
	free(result1);
	result2 = strdup(s);
	printf("strdup: %s\n", result2);
	free(result2);
}*/
