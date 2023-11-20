#include "ft_printf.h"

void	ft_puthex1(size_t addr, int *count, char *hex)
{
	int	flag;

	flag = 0;
	if (flag == 0)
	{
		flag++;
		ft_putstr("0x", count);
	}
	if (addr > 16)
		ft_puthex1(addr / 16, count, hex);
	ft_putchar(hex[addr % 16], count);
}

void	ft_puthex2(unsigned int num, int *count, char *hex)
{
	if (num > 16)
		ft_puthex2(num / 16, count, hex);
	ft_putchar(hex[num % 16], count);
}


void	ft_putUD(unsigned int num, int *count)
{
	if (num > 9)
		ft_putnbr(num / 10, count);
    ft_putchar((num % 10) + '0', count);	
}

#include <stdio.h>
int main()
{
	/*int c = 0;
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
*/
	int c = 0;
	 int  a = -17;
	int b = printf("%u",a);
	printf("\n");
	ft_putUD(a, &c);
	printf("\n%d %d",b,c);
}
