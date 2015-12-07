#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static  void    is_null(char *ptr)
{
	if (!ptr)
		ft_putstr("NULL");
	else
	{
		ft_putendl("NOT NULL, but actually:");
	}
	ft_putchar('\n');
}

int		main()
{
	char		**test;

	// TEST 01
	ft_putendl("\n\nTest01: --------------\n");
	test = NULL;
	test = ft_strsplit("***salut****!**", '*');

	ft_putchar('\n');
	ft_putendl("- Test string is:");
	ft_putendl("=> ***salut****!**");
	ft_putendl("- Expect 'salut':");
	ft_putstr("=> ");
	ft_putendl(test[0]);
	ft_putendl("- Expect '!':");
	ft_putstr("=> ");
	ft_putendl(test[1]);
	ft_putendl("- Expect 'NULL':");
	ft_putstr("=> ");
	is_null(test[2]);
	ft_putendl("\n\nTest01 over ----------");

	// TEST 02
	ft_putendl("\n\nTest02: --------------\n\n");
	test = NULL;
	test = ft_strsplit("*****", '*');

	ft_putchar('\n');
	ft_putendl("- Test string is:");
	ft_putendl("=> *****");
	ft_putendl("- Expect 'NULL':");
	ft_putstr("=> ");
	is_null(test[0]);
	ft_putendl("\n\nTest02 over ----------");

	// TEST 03
	ft_putendl("\n\nTest03: --------------\n\n");
	test = NULL;
	test = ft_strsplit("coucou", '*');

	ft_putchar('\n');
	ft_putendl("- Test string is:");
	ft_putendl("=> coucou");
	ft_putendl("- Expect 'coucou':");
	ft_putstr("=> ");
	ft_putendl(test[0]);
	ft_putendl("- Expect 'NULL':");
	ft_putstr("=> ");
	is_null(test[1]);

	// TEST 04

	ft_putendl("\n\nTest04: --------------\n\n");
	test = NULL;
	test = ft_strsplit("salut****", '*');

	ft_putchar('\n');
	ft_putendl("- Test string is:");
	ft_putendl("=> salut****");
	ft_putendl("- Expect 'salut':");
	ft_putstr("=> ");
	ft_putendl(test[0]);
	ft_putendl("- Expect 'NULL':");
	ft_putstr("=> ");
	is_null(test[1]);

	// TEST 05

	ft_putendl("\n\nTest05: --------------\n\n");
	test = NULL;
	test = ft_strsplit("****salut", '*');

	ft_putchar('\n');
	ft_putendl("- Test string is:");
	ft_putendl("=> ****salut");
	ft_putendl("- Expect 'salut':");
	ft_putstr("=> ");
	ft_putendl(test[0]);
	ft_putendl("- Expect 'NULL':");
	ft_putstr("=> ");
	is_null(test[1]);

	// TEST 06

	ft_putendl("\n\nTest06: --------------\n\n");
	test = NULL;
	test = ft_strsplit("*hello*", '*');

	ft_putchar('\n');
	ft_putendl("- Test string is:");
	ft_putendl("=> *hello*");
	ft_putendl("- Expect 'hello':");
	ft_putstr("=> ");
	ft_putendl(test[0]);
	ft_putendl("- Expect 'NULL':");
	ft_putstr("=> ");
	is_null(test[1]);


	return (0);
}
