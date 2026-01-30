/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:16:00 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 16:16:44 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i ++;
	}
}
/* 
static void	t_f(unsigned int i, char *c)
{
	*c = *c + i;
} */
/*
int	main(void)
{
	char	s[] = "aaaa";
	
	ft_striteri(s,t_f);
	printf ("%s", s);
}*/