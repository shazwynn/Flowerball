#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{

	ft_putnbr(sizeof(int));
	ft_putchar('\n');
	ft_putnbr(sizeof(char));
	ft_putchar('\n');
/* strnew */
	ft_putendl("--- strnew ? --- ");
	char	*str;
	str = ft_strnew(30);
	ft_putendl(str);

/* strdel */
	ft_putendl("--- strdel ? --- ");
	ft_memset(str, '8', 5);
	ft_putendl(str);
	str[1] = 'A';
	ft_putendl(str);
	ft_strdel(&str);
/*
	str[2] = 't';
	ft_putendl(str);
*/

/* strsub */
	ft_putendl("--- strsub ? --- ");
	ft_putendl(ft_strsub("hiyamina", 4, 4));

/* strjoin */
	ft_putendl("--- strjoin ? --- ");
	ft_putendl(ft_strjoin("hello", "world"));

/* strtrim */
	ft_putendl("--- strtrim ? --- ");
	ft_putendl(ft_strtrim("     \n  HELLOWORLD     \n"));
	return (0);
}
