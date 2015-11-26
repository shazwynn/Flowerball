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
	char s4[]= "turtle";
	ft_putendl(ft_strcat(s3, s4));

/* strncat */
	ft_putendl("--- strncat ? --- ");
	ft_putendl("Real strcat test : ");
	char s5[]= "sea \0                   ";
	char s6[]= "turtle";
	ft_putendl(strncat(s5, s6, 4)); 
	ft_putendl("My strncat test : ");
	char s7[]= "sea \0                   ";
	char s8[]= "turtle";
	ft_putendl(ft_strncat(s7, s8, 4));
	return (0);
}
