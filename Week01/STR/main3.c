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
	ft_putstr("source = turtle, destination = sea ---> ");
	char src3[]= "turtle";
	char dst3[]= "sea";
	ft_putendl(strcpy(dst3, src3));
	

	return (0);
}
