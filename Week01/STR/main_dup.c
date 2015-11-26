#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{

/* strdup */
	ft_putendl("--- strdup ? --- ");
	ft_putendl("Real strdup test : ");
	char dst2[]= "turtle";
	ft_putendl(strdup(dst2));
	ft_putendl("My strdup test : ");
	ft_putendl(ft_strdup(dst2));

	return (0);
}
