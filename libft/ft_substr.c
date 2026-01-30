/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:48:18 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/20 17:50:12 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	char	*s_null;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		s_null = ft_calloc(1, sizeof(char));
		if (s_null == NULL)
			return (NULL);
		return (s_null);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, (s + start), (len + 1));
	return (dest);
}
/*
int	main(void)
{
	//char const	s[] = "";
	char const	*s = NULL;
	unsigned int	start = 0;
	size_t	len = 2;
	char	*result;
	
	result = ft_substr(s, start, len);
	printf("%s", result);
	free(result);
}*/
