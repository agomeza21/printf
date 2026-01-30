/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:20:41 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/22 13:17:57 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp_str(const char *big, const char *little);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_big;

	i_big = 0;
	if (little[0] == '\0')
		return ((char *)(big));
	while (i_big < len)
	{
		if (i_big + (ft_strlen(little)) > len)
			return (NULL);
		if (big[i_big] == little[0])
		{
			if (comp_str(big + i_big, little) == 1)
				return ((char *)(big + i_big));
		}
		i_big++;
	}
	return (NULL);
}

static int	comp_str(const char *big, const char *little)
{
	int	result;

	result = ft_strncmp(big, little, ft_strlen(little));
	if (result == 0)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	const char	big[] = "HELLO";
	const char	little[] = "EL";
	size_t	len;
	char	*result;

	len = 2;
	result = ft_strnstr(big, little, len);
	printf("%s", result);
}*/
