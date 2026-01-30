/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:44:56 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/22 10:56:22 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c);
static int	word_start(char const *s, int i, char c);
static char	*create_words(const char *s, int i, char c);
static void	free_memory(char **big_array);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		pos;
	char	**big_array;

	if (!s)
		return (NULL);
	i = 0;
	big_array = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!big_array)
		return (NULL);
	pos = 0;
	while (s[i] != '\0')
	{
		i = word_start(s, i, c);
		if (s[i] == '\0')
			break ;
		big_array[pos] = create_words(s, i, c);
		if (!big_array[pos])
			return (free_memory(big_array), NULL);
		pos++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (big_array[count_words(s, c)] = NULL, big_array);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	word_start(char const *s, int i, char c)
{
	while (s[i] != '\0' && s[i] == c)
	{
		i++;
	}
	return (i);
}

static char	*create_words(const char *s, int i, char c)
{
	int		len;
	char	*small_array;

	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	small_array = ft_calloc((len + 1), sizeof(char));
	if (!small_array)
		return (NULL);
	ft_strlcpy(small_array, &s[i - len], len + 1);
	return (small_array);
}

static void	free_memory(char **big_array)
{
	int	i;

	i = 0;
	while (big_array[i] != NULL)
	{
		free(big_array[i]);
		i++;
	}
	free(big_array);
}
/*
int	main(void)
{
	const char	*s = "hello, i am from 42;";
	char	c = ';';
	char	**result;
	int	i;

	i = 0;
	result = ft_split(s, c);
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}	
	free_memory(result);
}*/
