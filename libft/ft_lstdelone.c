/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:53:03 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 16:10:27 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/* static void	f_del(void *content)
{
	free(content);
} */
/*
int	main(void)
{
	t_list	*node1;

	node1 = ft_lstnew(ft_strdup("one"));
	
	ft_lstdelone(node1, f_del);
}*/
