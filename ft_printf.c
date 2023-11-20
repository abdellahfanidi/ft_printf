#include  "ft_printf.h"

void	handle(char *f, int *c, va_list ap)
{
	if (*f == 'c')
		ft_putchar(va_arg(ap, int), c);
	else if (*f == 's')
		ft_putstr(va_arg(ap, char *), c);
	else if (*f == 'd' || *f == 'i')
		ft_putnbr(va_arg(ap, int) , c);
	else if  (*f == 'p')
		ft_puthex1((size_t)va_arg(ap, void *), c, "0123456789abcdef");
	else if (*f == 'x')
		ft_puthex2(va_arg(ap, unsigned int), c, "0123456789abcdef");
	else if (*f == 'X')
		ft_puthex2(va_arg(ap, unsigned int), c, "0123456789ABCDEF");
	else if (*f == 'u')
		ft_putUD(va_arg(ap, unsigned int), c);
	else if (*f == '%')
		ft_putchar('%', c);
	else
		return ;
}

int ft_printf(const char *f, ...)
{
	va_list	ap;
	int	count;

	count = 0;
	while (*f)
	{
		if(*f == '%')
		{
			f++;
			handle(f, &count, ap);
		}
		else
			count++;
		f++;
	}
}
