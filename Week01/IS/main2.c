#include "../libft.h"
#include <ctype.h>

int		main(void)
{
/* isalpha */
	ft_putendl("--- isalpha ? --- ");
	ft_putnbr(ft_isalpha('a'));
	ft_putchar('\n');
	ft_putnbr(ft_isalpha('!'));
	ft_putchar('\n');

	ft_putendl("Real is alpha test : ");
	ft_putnbr(isalpha('z'));
	ft_putchar('\n');
	ft_putnbr(isalpha('!'));
	ft_putchar('\n');

/* isdigit */
	ft_putendl("--- isdigit ? --- ");
	ft_putnbr(ft_isdigit('0'));
	ft_putchar('\n');
	ft_putnbr(ft_isdigit('9'));
	ft_putchar('\n');
	ft_putnbr(ft_isdigit('!'));
	ft_putchar('\n');

	ft_putendl("Real is digit test : ");
	ft_putnbr(isdigit('0'));
	ft_putchar('\n');
	ft_putnbr(isdigit('9'));
	ft_putchar('\n');
	ft_putnbr(isdigit('a'));
	ft_putchar('\n');

/* isalnum */
	ft_putendl("--- isalnum ? --- ");
	ft_putnbr(ft_isalnum('0'));
	ft_putchar('\n');
	ft_putnbr(ft_isalnum('z'));
	ft_putchar('\n');
	ft_putnbr(ft_isalnum('!'));
	ft_putchar('\n');

	ft_putendl("Real is alnum test : ");
	ft_putnbr(isalnum('0'));
	ft_putchar('\n');
	ft_putnbr(isalnum('z'));
	ft_putchar('\n');
	ft_putnbr(isalnum('!'));
	ft_putchar('\n');
	
/* isascii */
	ft_putendl("--- isascii ? --- ");
	ft_putnbr(ft_isascii('a'));
	ft_putchar('\n');
	ft_putnbr(ft_isascii(132));
	ft_putchar('\n');

	ft_putendl("Real is ascii test : ");
	ft_putnbr(isascii('a'));
	ft_putchar('\n');
	ft_putnbr(isascii(132));
	ft_putchar('\n');

/* isprint */
	ft_putendl("--- isprint ? --- ");
	ft_putnbr(ft_isprint('a'));
	ft_putchar('\n');
	ft_putnbr(ft_isprint(132));
	ft_putchar('\n');

	ft_putendl("Real is print test : ");
	ft_putnbr(isprint('a'));
	ft_putchar('\n');
	ft_putnbr(isprint(132));
	ft_putchar('\n');

	return (0);
}
