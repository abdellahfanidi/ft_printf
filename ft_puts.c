/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:51:07 by afanidi           #+#    #+#             */
/*   Updated: 2023/11/18 00:18:34 by afanidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a, int *count)
{
	write(1, &a, 1);
	*count += 1;
}

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++], count);
}

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', count);
	}
	if (n > 9)
		ft_putnbr(n / 10, count);
	ft_putchar((n % 10) + '0', count);
}
