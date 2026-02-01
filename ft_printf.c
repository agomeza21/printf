/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:13:22 by agomez-a          #+#    #+#             */
/*   Updated: 2026/01/30 19:36:47 by agomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			count++;
			i++;
		}
		else if (str[i] == '%')
		{
			i++;
			count = format_especifiers(str + i, &args) + count;
			i++;
		}
	}
	va_end(args);
	return (count);
}

/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int	n;
	int	a;
	//char *s = NULL;

	printf("Test character and string\n\n");
	n = ft_printf("Hello my name is %s and it starts with %c.\n", "", '\0');
	a = printf("Hello my name is %s and it starts with %c.\n", "", '\0');
	printf("\n");
	printf("ft_printf returned: %d\n", n);
	printf("ft_printf returned: %d\n", a);
	printf("\n");
	printf("Test numbers\n");
	n = ft_printf("I am %d years, %i months and %u days old.\n", 0, 0, 0);
	a = printf("I am %d years, %i months and %u days old.\n", 0, 0, 0);
	printf("\n");
	printf("ft_printf returned: %d\n", n);
	printf("ft_printf returned: %d\n", a);
	printf("\n");
	printf("Test hexadecimals lowercase\n\n");
	n = ft_printf("The hexadecimal number of %d is: %x\n", 123456, 123456);
	a = printf("The hexadecimal number of %d is: %x\n", 123456, 123456);
	printf("\n");
	printf("ft_printf returned: %d\n", n);
	printf("ft_printf returned: %d\n", a);
	printf("\n");
	printf("Test hexadecimals uppercase\n\n");
	n = ft_printf("The hexadecimal number of %d is: %X\n", 123456, 123456);
	a = printf("The hexadecimal number of %d is: %X\n", 123456, 123456);
	printf("\n");
	printf("ft_printf returned: %d\n", n);
	printf("ft_printf returned: %d\n", a);
	printf("\n");
	printf("Test %%\n\n");
	n = ft_printf("%%\n");
	a = printf("%%\n");
	printf("\n");
	printf("ft_printf returned: %d\n", n);
	printf("ft_printf returned: %d\n", a);
	printf("\n");

	int mine;
    int syst;
    void *p = &mine;
    char *str_null = NULL;

    printf("--- 1. CHARACTER (%%c) ---\n");
    mine = ft_printf("Mine: %c | Null: %c\n", 'A', '\0');
    syst = printf("Syst: %c | Null: %c\n", 'A', '\0');
    printf("Returned -> Mine: %d | Syst: %d\n\n", mine, syst);

    printf("--- 2. STRING (%%s) ---\n");
    mine = ft_printf("Mine: %s | %s | %s\n", "42", "", str_null);
    syst = printf("Syst: %s | %s | %s\n", "42", "", str_null);
    printf("Returned -> Mine: %d | Syst: %d\n\n", mine, syst);

    printf("--- 3. POINTER (%%p) ---\n");
    mine = ft_printf("Mine: %p | %p\n", p, NULL);
    syst = printf("Syst: %p | %p\n", p, NULL);
    printf("Returned -> Mine: %d | Syst: %d\n\n", mine, syst);

    printf("--- 4. INTEGERS (%%d / %%i) ---\n");
    mine = ft_printf("Mine: %d | %i | %d\n", INT_MIN, INT_MAX, 0);
    syst = printf("Syst: %d | %i | %d\n", INT_MIN, INT_MAX, 0);
    printf("Returned -> Mine: %d | Syst: %d\n\n", mine, syst);

    printf("--- 5. UNSIGNED (%%u) ---\n");
    mine = ft_printf("Mine: %u | %u\n", UINT_MAX, -10);
    syst = printf("Syst: %u | %u\n", UINT_MAX, -10);
    printf("Returned -> Mine: %d | Syst: %d\n\n", mine, syst);

    printf("--- 6. HEXADECIMAL (%%x / %%X) ---\n");
    mine = ft_printf("Mine: %x | %X | %x\n", 255, 255, 0);
    syst = printf("Syst: %x | %X | %x\n", 255, 255, 0);
    printf("Returned -> Mine: %d | Syst: %d\n\n", mine, syst);

    printf("--- 7. PERCENTAGE (%%%%) ---\n");
    mine = ft_printf("Mine: %%%% | %%%% %%%%\n");
    syst = printf("Syst: %%%% | %%%% %%%%\n");
    printf("Returned -> Mine: %d | Syst: %d\n\n", mine, syst);

    return (0);
}*/
