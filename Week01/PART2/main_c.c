#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_change(char *c)
{
	ft_putendl(c);
}

void	ft_change2(unsigned int i, char *c)
{
	ft_putnbr(i);
	ft_putchar(' ');
	ft_putendl(&c[i]);
}
char	ft_change3(char c)
{
	c = c + 1;
	return (c);
}

char	ft_change4(unsigned int i, char c)
{
	c = c + 1;
	ft_putnbr(i);
	ft_putchar('\n');
	return (c);
}

int		main(void)
{

/* striter */
	ft_putendl("--- striter ? --- ");
	char	str[] = "abcde";
	ft_striter(str, ft_change);

/* striteri */
	ft_putendl("--- striter ? --- ");
	char	str2[] = "abcde";
	ft_striteri(str2, ft_change2);


/* strmap */
	ft_putendl("--- strmap ? --- ");
	char	str3[] = "abcde";
	ft_putendl(ft_strmap(str3, ft_change3));

/* strmapi */
	ft_putendl("--- strmapi ? --- ");
	char	str4[] = "abcde";
	ft_putendl(ft_strmapi(str4, ft_change4));

	return (0);
}
