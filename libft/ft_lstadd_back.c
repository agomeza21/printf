/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:00:37 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 13:51:42 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->next = NULL;
}
/* 
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	list = NULL;

	node1 = ft_lstnew("one");
	node2 = ft_lstnew("two");
	node3 = ft_lstnew("three");

	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	ft_lstadd_back(&list, node3);
	
	printf("%s\n", (char *)list->content);
	printf("%s\n", (char *)list->next->content);
	printf("%s", (char *)list->next->next->content);
	free(node1);
	free(node2); 
	free(node3);
} */
