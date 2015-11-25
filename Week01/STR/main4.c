#include "../libft.h"
#include <string.h>
#include <stdio.h>

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

	return (0);
}
