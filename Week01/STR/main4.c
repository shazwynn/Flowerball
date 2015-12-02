#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
/* strclr */
	ft_putendl("--- strclr ? --- ");
	char str[]= "panda";
	ft_putendl(str);
	ft_putendl(str + 1);
	ft_strclr(str);
	ft_putendl(str);
	ft_putendl(str + 1);

/* atoi */
	ft_putendl("--- atoi ? --- ");
	ft_putendl(" -- REAL ATOI --");
	ft_putnbr(atoi(" 2456the"));
	ft_putchar('\n');
	ft_putnbr(atoi("-42"));
	ft_putchar('\n');
	ft_putnbr(atoi("+58"));
	ft_putchar('\n');
	ft_putnbr(atoi("  \t\n\r\r\v\f-899"));
	ft_putchar('\n');
	ft_putnbr(atoi("\200123"));
	ft_putchar('\n');


	ft_putendl(" -- MY ATOI --");
	ft_putnbr(ft_atoi("   2456the"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("+58"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("  \t\n\r\r\v\f-899"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\200123"));
	ft_putchar('\n');

	
	return (0);
}
