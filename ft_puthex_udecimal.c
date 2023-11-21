/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_udecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:07:16 by afanidi           #+#    #+#             */
/*   Updated: 2023/11/21 19:59:28 by afanidi          ###   ########.fr       */
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
/*void	ft_putUD(unsigned int num, int *count)
{
	if (num > 9)
		ft_putnbr(num / 10, count);
    ft_putchar((num % 10) + '0', count);	
}

#include <stdio.h>
int main()
{
	int c = 0;
	char *p = NULL;
	//uintmax_t d = (uintmax_t)p;
	//size_t k = (size_t)p;
	
	//int  a = printf("%p",p);
	//printf("\n");
	//ft_puthex((size_t)p,&c,"0123456789abcdef");
	//printf("\n-%d-%d",a,c);
	int dec = -5000645;
	int a = printf("%x",dec);
	printf("\n");
	ft_puthex2(dec,&c ,"0123456789abcdef");
	printf("-%d-%d",a,c);

	int c = 0;
	 int  a = -17;
	int b = printf("%u",a);
	printf("\n");
	ft_putUD(a, &c);
	printf("\n%d %d",b,c);
}*/
