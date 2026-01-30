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
			ft_putchar_fd(str[i], 1);
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
int	main(void)
{
	int	n;
	int	a;
	char *s = NULL;

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
	
	int mio;
    int sys;
    void *p = &mio;
    char *str_null = NULL;

    printf("--- 1. CARACTER (%%c) ---\n");
    mio = ft_printf("Mio: %c | Nulo: %c\n", 'A', '\0');
    sys = printf("Sys: %c | Nulo: %c\n", 'A', '\0');
    printf("Retornos -> Mio: %d | Sys: %d\n\n", mio, sys);

    printf("--- 2. STRING (%%s) ---\n");
    mio = ft_printf("Mio: %s | %s | %s\n", "42", "", str_null);
    sys = printf("Sys: %s | %s | %s\n", "42", "", str_null);
    printf("Retornos -> Mio: %d | Sys: %d\n\n", mio, sys);

    printf("--- 3. PUNTERO (%%p) ---\n");
    mio = ft_printf("Mio: %p | %p\n", p, NULL);
    sys = printf("Sys: %p | %p\n", p, NULL);
    printf("Retornos -> Mio: %d | Sys: %d\n\n", mio, sys);

    printf("--- 4. ENTEROS (%%d / %%i) ---\n");
    mio = ft_printf("Mio: %d | %i | %d\n", INT_MIN, INT_MAX, 0);
    sys = printf("Sys: %d | %i | %d\n", INT_MIN, INT_MAX, 0);
    printf("Retornos -> Mio: %d | Sys: %d\n\n", mio, sys);

    printf("--- 5. UNSIGNED (%%u) ---\n");
    mio = ft_printf("Mio: %u | %u\n", UINT_MAX, -10);
    sys = printf("Sys: %u | %u\n", UINT_MAX, -10);
    printf("Retornos -> Mio: %d | Sys: %d\n\n", mio, sys);

    printf("--- 6. HEXADECIMAL (%%x / %%X) ---\n");
    mio = ft_printf("Mio: %x | %X | %x\n", 255, 255, 0);
    sys = printf("Sys: %x | %X | %x\n", 255, 255, 0);
    printf("Retornos -> Mio: %d | Sys: %d\n\n", mio, sys);

    printf("--- 7. PORCENTAJE (%%%%) ---\n");
    mio = ft_printf("Mio: %%%% | %%%% %%%%\n");
    sys = printf("Sys: %%%% | %%%% %%%%\n");
    printf("Retornos -> Mio: %d | Sys: %d\n\n", mio, sys);

    return (0);
}*/
