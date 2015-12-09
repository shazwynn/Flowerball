#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
/* ft_strrev 
	ft_putendl("--- strrev ? --- ");
	ft_putendl("bonjour");
	ft_putendl(ft_strrev(""));
	ft_putendl(ft_strrev("bonjour"));
	ft_putendl(ft_strrev("h"));
	ft_putendl(ft_strrev("TURTLES"));
	ft_putendl(ft_strrev("\nPAN  DA"));
*/
/* itoa */
	ft_putendl("--- itoa ? --- ");
	ft_putendl(ft_itoa(0));
	ft_putendl(ft_itoa(1));
	ft_putendl(ft_itoa(123));
	ft_putendl(ft_itoa(-12));
	ft_putendl(ft_itoa(1234));
	ft_putendl(ft_itoa(-123));
	ft_putendl(ft_itoa(-1234));
	ft_putendl(ft_itoa(-2147483647));
	ft_putendl(ft_itoa(-5));

	return (0);
}
