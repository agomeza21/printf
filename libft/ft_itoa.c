/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:04:56 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/23 11:12:15 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_chars(long num);
static void	write_digits(char *mem, int count, long num);

char	*ft_itoa(int n)
{
	long	num;
	char	*mem;
	int		count;

	num = (long)n;
	count = count_chars(num);
	mem = (char *)malloc(count);
	if (!mem)
		return (NULL);
	write_digits(mem, count, num);
	return (mem);
}

static int	count_chars(long num)
{
	int	count;

	count = 0;
	if (num == 0)
		count++;
	if (num != 0)
	{
		if (num < 0)
		{
			num = num * (-1);
			count++;
		}
		while (num > 0)
		{
			num = num / 10;
			count++;
		}
	}
	count = count + 1;
	return (count);
}

static void	write_digits(char *mem, int count, long num)
{
	int		i;
	char	digit;

	mem[--count] = '\0';
	i = count - 1;
	if (num == 0)
		mem[i] = '0';
	if (num < 0)
	{
		num = num * (-1);
		mem[0] = '-';
	}
	while (num > 0 && i >= 0)
	{
		digit = num % 10 + '0';
		num = num / 10;
		mem[i] = digit;
		i--;
	}
}
/*
int	main(void)
{
	int		n;
	char	*result;

	n = 1001;
	result = ft_itoa(n);
	printf("%s", result);
	free(result);
}*/