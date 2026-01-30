/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:18:47 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 12:59:36 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/* 
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	int		count;

	list = NULL;

	node1 = ft_lstnew("one");
	node2 = ft_lstnew("two");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	count = ft_lstsize(list);
	printf("%d\n", count);
	free(node1);
	free(node2);
} */
