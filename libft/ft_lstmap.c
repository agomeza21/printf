/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:55:55 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 18:55:41 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	void	*content;

	new = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			while (new != NULL)
			{
				ft_lstclear(&new, del);
			}
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
/* 
static void	*addition(void *content)
{
	int	*origin;
	int	*new;

	origin = (int *)content;
	new = malloc(sizeof(int));
	if (!new)
		return (NULL);
	*new = *origin + 5;
	return (new);
} */
/* 
static void	t_del(void *content)
{
	free(content);
} */
/* 
int	main(void)
{
	t_list	*list;
	t_list	*result;
	int *n1 = malloc(sizeof(int));

	*n1 = 1;
	list = ft_lstnew(n1);

	printf("Before: %d\n", *(int *)list->content);
	result = ft_lstmap(list, addition, t_del);
	printf("After: %d\n", *(int *)result->content);
	ft_lstclear(&list, t_del);
	ft_lstclear(&result, t_del);
} */
