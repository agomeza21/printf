/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 11:04:20 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 12:16:26 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;

	list = NULL;

	node1 = ft_lstnew("one");
	node2 = ft_lstnew("two");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	printf("%s\n", (char *)list->content);
	printf("%s", (char *)list->next->content);
	free(node1);
	free(node2);
}*/
