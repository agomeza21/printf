/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:19:07 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 18:54:14 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* 
static void	mult(void *content)
{
	int	*ptr = (int *)content;
	*ptr = *ptr * 5;
}  */
/* 
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list  *tmp;
	int *n1 = malloc(sizeof(int));
	int *n2 = malloc(sizeof(int));
	
	list = NULL;

	*n1 = 1;
	*n2 = 5;
	node1 = ft_lstnew(n1);
	node2 = ft_lstnew(n2);

	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	printf("Before: %d\n", *(int *)list->content);
	printf("Before: %d\n", *(int *)list->next->content);
	ft_lstiter(list, mult);
	printf("After: %d\n", *(int *)list->content);
	printf("After: %d\n", *(int *)list->next->content);
	while (list != NULL)
	{
		tmp = list->next;
		free(list->content);
		free(list);
		list = tmp;
	}
} */