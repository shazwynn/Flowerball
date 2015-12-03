#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_wordtrim(char *tmp, char c);

int		main(void)
{

/* strsplit */
	ft_putendl("--- strsplit? --- ");
	ft_putendl(" ------------ wordtrim -------------- ");
	ft_putendl(ft_wordtrim("pancake", 'c'));

/* strtrim */
	ft_putendl("--- strtrim ? --- ");
	ft_putendl(ft_strtrim("     \n  HELLOWORLD     \n"));
	ft_putendl(ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"));
	ft_putendl(ft_strtrim("\t\n\t  \t\t\n\t"));

	return (0);
}
