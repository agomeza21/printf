/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:54:21 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/26 15:24:22 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void)
{
	t_list	*node;
	char	*content;

	content = "hello";
	node = ft_lstnew(content);
	if (!node)
		return (1);
	printf("Content: %s\n", (char *)node->content);
	printf("Next: %s\n", (char *)node->next);
	free(node);
}*/
