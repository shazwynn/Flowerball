#include "../libft.h"
#include <string.h>

int		main(void)
{
/* strlen */
	ft_putendl("--- strlen ? --- ");
	ft_putnbr(ft_strlen(" "));
	ft_putchar('\n');
	ft_putnbr(ft_strlen("chose"));
	ft_putchar('\n');
	ft_putnbr(ft_strlen("\0"));
	ft_putchar('\n');

	ft_putendl("Real strlen test : ");
	ft_putnbr(strlen(" "));
	ft_putchar('\n');
	ft_putnbr(strlen("chose"));
	ft_putchar('\n');
	ft_putnbr(strlen("\0"));
	ft_putchar('\n');

	return (0);
}
