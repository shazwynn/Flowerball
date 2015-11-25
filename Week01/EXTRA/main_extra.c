#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
/* ispos */
	ft_putendl("--- is positive ? --- ");
	ft_putnbr(ft_ispos(-5));
	ft_putchar('\n');
	ft_putnbr(ft_ispos(0));
	ft_putchar('\n');
	ft_putnbr(ft_ispos(22));
	ft_putchar('\n');

/* isneg */
	ft_putendl("--- is negative ? --- ");
	ft_putnbr(ft_isneg(-5));
	ft_putchar('\n');
	ft_putnbr(ft_isneg(0));
	ft_putchar('\n');
	ft_putnbr(ft_isneg(22));
	ft_putchar('\n');
	
/* putsign */
	ft_putendl("--- putsign ? --- ");
	ft_putstr(ft_putsign(-5));
	ft_putchar('\n');
	ft_putstr(ft_putsign(0));
	ft_putchar('\n');
	ft_putstr(ft_putsign(22));
	ft_putchar('\n');
	
	return (0);
}
