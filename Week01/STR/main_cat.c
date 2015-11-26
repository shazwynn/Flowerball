#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{

/* strcat */
	ft_putendl("--- strcat ? --- ");
	ft_putendl("Real strcat test : ");
	char s1[]= "sea \0                   ";
	char s2[]= "turtle";
	ft_putendl(strcat(s1, s2)); 
	ft_putendl("My strcat test : ");
	char s3[]= "sea \0                   ";
	ft_putendl(ft_strcat(s3, s2));

/* strncat */
	ft_putendl("--- strncat ? --- ");
	ft_putendl("Real strncat test : ");
	char s4[]= "sea \0                   ";
	ft_putendl(strncat(s4, s2, 4)); 
	ft_putendl("My strncat test : ");
	char s5[]= "sea \0                   ";
	ft_putendl(ft_strncat(s5, s2, 4));


/* strlcat */
	ft_putendl("--- strlcat ? --- ");
	ft_putendl("Real strlcat test : ");
	char s6[]= "sea \0                   ";
	ft_putnbr(strlcat(s6, s2, 1));
	ft_putchar('\n');
	ft_putendl("My strlcat test : ");
	char s7[]= "sea \0                   ";
	ft_putnbr(ft_strlcat(s7, s2, 1));

	return (0);
}
