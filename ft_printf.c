/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:21:09 by afanidi           #+#    #+#             */
/*   Updated: 2023/11/21 19:01:46 by afanidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ft_printf.h"

void	handle(const char *f, int *c, va_list ap)
{
	if (*f == 'c')
		ft_putchar(va_arg(ap, int), c);
	else if (*f == 's')
		ft_putstr(va_arg(ap, char *), c);
	else if (*f == 'd' || *f == 'i')
		ft_putnbr(va_arg(ap, int), c);
	else if (*f == 'p')
	{
		ft_putstr("0x", c);
		ft_putaddr((size_t)va_arg(ap, void *), c, "0123456789abcdef");
	}
	else if (*f == 'x')
		ft_puthex_udecimal(va_arg(ap, unsigned int), c, "0123456789abcdef");
	else if (*f == 'X')
		ft_puthex_udecimal(va_arg(ap, unsigned int), c, "0123456789ABCDEF");
	else if (*f == 'u')
		ft_puthex_udecimal(va_arg(ap, unsigned int), c, "None");
	else if (*f == '%')
		ft_putchar('%', c);
	else
		return ;
}

int	ft_printf(const char *f, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, f);
	while (*f)
	{
		if (*f == '%')
		{
			f++;
			handle(f, &count, ap);
		}
		else
			ft_putchar(*f, &count);
		f++;
	}
	va_end(ap);
	return (count);
}
