/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:22:40 by ariling           #+#    #+#             */
/*   Updated: 2024/08/14 22:17:14 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	calculate_len(unsigned int value, unsigned int base_len)
{
	int	len;

	len = 1;
	while (value >= base_len)
	{
		value /= base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(unsigned int value, const char *base)
{
	char			*str;
	unsigned int	base_len;
	int				len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	len = calculate_len(value, base_len);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = base[value % base_len];
		value /= base_len;
	}
	return (str);
}
