/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:07:30 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/21 13:44:11 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	new_len;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
	{
		i++;
	}
	while (j > i && ft_strchr(set, s1[j]) != NULL)
	{
		j--;
	}
	new_len = (size_t)((j - i) + 1);
	result = ft_substr(s1, i, new_len);
	return (result);
}
/*
int	main(void)
{
	char const	*s1 = "####";
	char const	*set = "#";
	char		*result;

	result = ft_strtrim(s1, set);
	printf("%s", result);
	free(result);
}*/
