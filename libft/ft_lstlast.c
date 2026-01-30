/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:38:25 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 13:36:03 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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
	printf("Last node: %p\n", ft_lstlast(list));
	free(node1);
	free(node2);
} */
