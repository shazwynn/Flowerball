#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
/* strnew */
	ft_putendl("--- strnew ? --- ");
	char	*str;
	str = ft_strnew(10);
	ft_putendl(str);

/* strdel */
	ft_putendl("--- strdel ? --- ");
	ft_strdel(&str);	
	ft_putendl(str);

/* strsub */
	ft_putendl("--- strsub ? --- ");
	ft_putendl(ft_strsub("hiyamina", 4, 4));

/* strjoin */
	ft_putendl("--- strjoin ? --- ");

	return (0);
}
