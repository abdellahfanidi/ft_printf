/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_udecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:07:16 by afanidi           #+#    #+#             */
/*   Updated: 2023/11/21 20:46:52 by afanidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_udecimal(unsigned int num, int *count, char *hex)
{
	if (*hex != 'N')
	{
		if (num >= 16)
			ft_puthex_udecimal(num / 16, count, hex);
		ft_putchar(hex[num % 16], count);
	}
	else
	{
		if (num > 9)
			ft_puthex_udecimal(num / 10, count, "None");
		ft_putchar((num % 10) + '0', count);
	}
}
