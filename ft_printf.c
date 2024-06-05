/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:12 by ariling           #+#    #+#             */
/*   Updated: 2024/06/05 23:21:07 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(va_list args, char format)
{
	int				printed;
	char			c;
	char			*str;
	int				num;
	char			*str;
	unsigned int	num;
	char			*str;
	unsigned int	num;
	char			*str;
	unsigned long	ptr;
	char			*str;

	printed = 0;
	if (format == 'c')
	{
		c = va_arg(args, int);
		ft_putchar_fd(c, 1);
		printed = 1;
	}
	else if (format == 's')
	{
		str = va_arg(args, char *);
		if (str)
		{
			ft_putstr_fd(str, 1);
			printed = ft_strlen(str);
		}
		else
		{
			ft_putstr_fd("(null)", 1);
			printed = 6;
		}
	}
	else if (format == 'd' || format == 'i')
	{
		num = va_arg(args, int);
		str = ft_itoa(num);
		ft_putstr_fd(str, 1);
		printed = ft_strlen(str);
		free(str);
	}
	else if (format == 'u')
	{
		num = va_arg(args, unsigned int);
		str = ft_itoa_unsigned(num);
		ft_putstr_fd(str, 1);
		printed = ft_strlen(str);
		free(str);
	}
	else if (format == 'x' || format == 'X')
	{
		num = va_arg(args, unsigned int);
		str = ft_itoa_base(num,
				(format == 'x') ? "0123456789abcdef" : "0123456789ABCDEF");
		ft_putstr_fd(str, 1);
		printed = ft_strlen(str);
		free(str);
	}
	else if (format == 'p')
	{
		ptr = va_arg(args, unsigned long);
		str = ft_itoa_ptr(ptr);
		ft_putstr_fd(str, 1);
		printed = ft_strlen(str);
		free(str);
	}
	else if (format == '%')
	{
		ft_putchar_fd('%', 1);
		printed = 1;
	}
	return (printed);
}

int	ft_vprintf(const char *format, va_list args)
{
	int	printed;

	printed = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			printed += handle_format(args, *(++format));
		}
		else
		{
			ft_putchar_fd(*format, 1);
			printed++;
		}
		format++;
	}
	return (printed);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;

	va_start(args, format);
	printed = ft_vprintf(format, args);
	va_end(args);
	return (printed);
}
