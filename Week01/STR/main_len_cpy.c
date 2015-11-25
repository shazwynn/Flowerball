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

/* strcpy */
	ft_putendl("--- strcpy ? --- ");
	ft_putstr("source = sea, destination = turtle ---> ");
	char src2[]= "sea";
	char dst2[]= "turtle";
	ft_putendl(ft_strcpy(dst2, src2));
	ft_putstr("source = turtle, destination = sea ---> ");
	char src[]= "turtle";
	char dst[]= "sea";
	ft_putendl(ft_strcpy(dst, src));
	
	ft_putendl("Real strcpy test : ");
	ft_putstr("source = sea, destination = turtle ---> ");
	char src4[]= "sea";
	char dst4[]= "turtle";
	ft_putendl(strcpy(dst4, src4));
	/*
	ft_putstr("source = turtle, destination = sea ---> ");
	char src3[]= "turtle";
	char dst3[]= "sea";
	ft_putendl(strcpy(dst3, src3));
	*/

/* strncpy */
	ft_putendl("--- strncpy ? --- ");
	ft_putstr("source = sea, destination = turtle, n = 2 ---> ");
	char src5[]= "sea";
	char dst5[]= "turtle";
	ft_putendl(ft_strncpy(dst5, src5, 2));
	ft_putstr("source = sea, destination = turtle, n = 4 ---> ");
	char src6[]= "sea";
	char dst6[]= "turtle";
	ft_putendl(ft_strncpy(dst6, src6, 4));
	ft_putstr("source = turtle, destination = sea, n = 3 ---> ");
	char src10[]= "turtle";
	char dst10[]= "sea";
	ft_putendl(ft_strncpy(dst10, src10, 3));
	ft_putstr("source = turtle, destination = sea, n = 6 ---> ");
	char src9[]= "turtle";
	char dst9[]= "sea";
	ft_putendl(ft_strncpy(dst9, src9, 6));
	
	ft_putendl("Real strncpy test : ");
	ft_putstr("source = sea, destination = turtle, n = 2 ---> ");
	char src7[]= "sea";
	char dst7[]= "turtle";
	ft_putendl(strncpy(dst7, src7, 2));
	ft_putstr("source = sea, destination = turtle, n = 4 ---> ");
	char src11[]= "sea";
	char dst11[]= "turtle";
	ft_putendl(strncpy(dst11, src11, 4));
	ft_putstr("source = turtle, destination = sea, n = 3 ---> ");
	char src8[]= "turtle";
	char dst8[]= "sea";
	ft_putendl(strncpy(dst8, src8, 3));
	/*
	ft_putstr("source = turtle, destination = sea, n = 6 ---> ");
	char src12[]= "turtle";
	char dst12[]= "sea";
	ft_putendl(strncpy(dst12, src12, 6));
	*/
	return (0);
}
