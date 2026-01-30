/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:23:55 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 18:44:28 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = *lst;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
/* 
static void	ft_del(void *content)
{
	free(content);
} */
/* 
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	list = NULL;

	node1 = ft_lstnew(ft_strdup("one"));
	node2 = ft_lstnew(ft_strdup("two"));
	node3 = ft_lstnew(ft_strdup("three"));

	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	ft_lstadd_back(&list, node3);
	ft_lstclear(&list, ft_del);
	if (list == NULL)
    	printf("Empty list\n");
	else
    	printf("The list still has nodes\n");
} */
