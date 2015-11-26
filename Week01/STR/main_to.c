#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>

int		main(void)
{

/* toupper */
	ft_putendl("--- tolower ? --- ");

	int c1 = 'a';
	int c2 = 'z';
	int c3 = 'A';
	int c4 = 'Z';

	ft_putendl("My tolower test : ");
	ft_putchar(ft_tolower(c1));
	ft_putchar(ft_tolower(c2));
	ft_putchar(ft_tolower(c3));
	ft_putchar(ft_tolower(c4));
	ft_putchar('\n');

	ft_putendl("Real tolower test : ");
	ft_putchar(tolower(c1));
	ft_putchar(tolower(c2));
	ft_putchar(tolower(c3));
	ft_putchar(tolower(c4));
	ft_putchar('\n');

/* toupper */
	ft_putendl("--- toupper ? --- ");

	ft_putendl("My toupper test : ");
	ft_putchar(ft_toupper(c1));
	ft_putchar(ft_toupper(c2));
	ft_putchar('\n');

	ft_putendl("Real toupper test : ");
	ft_putchar(toupper(c3));
	ft_putchar(toupper(c4));
	ft_putchar('\n');

	return (0);
}
