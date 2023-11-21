/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:55:07 by afanidi           #+#    #+#             */
/*   Updated: 2023/11/21 19:59:57 by afanidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddr(size_t addr, int *count, char *hex)
{
	//if (addr < 16)
		//ft_putchar(hex[addr], count);
	//else
	//{	
	if (addr >= 16)
			ft_putaddr(addr / 16, count, hex);
		ft_putchar(hex[addr % 16], count);
	//}
}
