/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:34:01 by ariling           #+#    #+#             */
/*   Updated: 2024/06/06 00:07:44 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_hex(va_list args, char format)
{
	unsigned int	num;
	char			*str;
	int				len;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		str = ft_strdup("0");
	}
	else
	{
		if (format == 'x')
			str = ft_itoa_base(num, "0123456789abcdef");
		else
			str = ft_itoa_base(num, "0123456789ABCDEF");
	}
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
