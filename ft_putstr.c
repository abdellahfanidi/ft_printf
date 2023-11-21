/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:07:02 by afanidi           #+#    #+#             */
/*   Updated: 2023/11/21 18:07:05 by afanidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (str[i])
		ft_putchar(str[i++], count);
}
