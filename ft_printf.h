/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:45:18 by afanidi           #+#    #+#             */
/*   Updated: 2023/11/20 13:58:09 by afanidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char a,int *count);
void	ft_putstr(char *str,int *count);
void	ft_putnbr(int n,int *count);
void	ft_puthex1(size_t addr, int *count, char *hex);
void	ft_puthex2(unsigned int num, int *count, char *hex);

#endif
