#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_wordtrim(char *tmp, char c);
void	ft_showchartab(int x, int y, char **tab);

int		main(void)
{

/* strsplit
	ft_putendl("--- strsplit? --- ");
	ft_putendl(" ------------ wordtrim -------------- ");
	ft_putendl(ft_wordtrim("pancake", 'c'));
*/
/* strtrim 
	ft_putendl("--- strtrim ? --- ");
	ft_putendl(ft_strtrim("     \n  HELLOWORLD     \n"));
	ft_putendl(ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"));
	ft_putendl(ft_strtrim("\t\n\t  \t\t\n\t"));
*/

	ft_putendl("--- count words ---");
	ft_putendl("salut*les*amis");
	ft_putnbr(ft_countwords("salut*les*amis", '*'));
	ft_putchar('\n');
	ft_putendl("**salut***les*amis*");
	ft_putnbr(ft_countwords("salut*les*amis", '*'));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putendl("--- show char table ---");
char tab[3][3];
	tab[0][0] = 'a';
	tab[0][1] = 'b';
	tab[0][2] = 'c';
	tab[1][0] = 'd';
	tab[1][1] = 'e';
	tab[1][2] = 'f';
	tab[2][0] = 'g';
	tab[2][1] = 'h';
	tab[2][2] = 'j';
/*
	char	tab[][] = {{'a', 'b', 'c'},{'d', 'e', 'f'},{'g', 'h', 'i'}};*/
	ft_showchartab(3, 3, tab);
	return (0);
}
