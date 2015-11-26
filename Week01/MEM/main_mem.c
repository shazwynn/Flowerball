#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
/* memset */
	ft_putendl("--- memset? --- ");
	ft_putendl("Real memset test : ");
	char b[10];
	printf("%s\n", b);
	memset(b, 'a', 10);
	printf("%s\n", b);

	ft_putendl("My memset test : ");
	char x[10];
	printf("%s\n", x);
	ft_memset(x, 'a', 10);
	printf("%s\n", x);
	
	return (0);
}
