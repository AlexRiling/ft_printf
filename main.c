/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:22:21 by ariling           #+#    #+#             */
/*   Updated: 2024/06/05 23:37:19 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	len;
	int	x;

	x = 42;
	len = ft_printf("Hello %corld%c\n", 'W', '!');
	len = ft_printf("This is a %s\n", "test string");
	len = ft_printf("String with NULL: %s\n", NULL);
	len = ft_printf("Decimal: %d\n", 42);
	len = ft_printf("Integer: %i\n", -42);
	len = ft_printf("Unsigned: %u\n", 42);
	len = ft_printf("Hex lowercase: %x\n", 255);
	len = ft_printf("Hex uppercase: %X\n", 255);
	len = ft_printf("Pointer: %p\n", &x);
	return (0);
}
