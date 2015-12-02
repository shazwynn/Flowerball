#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
/* strequ */
	ft_putendl("--- strnequ ? --- ");
	ft_putnbr(ft_strequ("banane", "banane"));
	ft_putchar('\n');
	ft_putnbr(ft_strequ("banane", "patate"));
	ft_putchar('\n');

/* strnequ */
	ft_putendl("--- strnequ ? --- ");
	ft_putnbr(ft_strnequ("banane", "banane", 6));
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("banane", "patate", 6));
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("flowerpower", "flowerball", 6));
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("flowerpower", "flowerball", 8));
	ft_putchar('\n');

/* memalloc */
	ft_putendl("--- memalloc ? --- ");
	char	*thing;
	thing = ft_memalloc(30);

/* memdel */
	ft_putendl("--- memdel ? --- ");

	return (0);
}
