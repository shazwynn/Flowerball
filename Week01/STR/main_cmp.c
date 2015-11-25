#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char s1[] = "apples";
	char s2[] = "watermelons";
	char s3[] = "roadkill";
	char s4[] = "road";

/* strcmp */
	ft_putendl("--- strcmp? --- ");
	printf("%s > %s ? \n", s1, s1);
	ft_putnbr(ft_strcmp(s1, s1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s1, s2);
	ft_putnbr(ft_strcmp(s1, s2));
	ft_putchar('\n');
	printf("%s > %s ? \n", s2, s1);
	ft_putnbr(ft_strcmp(s2, s1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s3, s4);
	ft_putnbr(ft_strcmp(s3, s4));
	ft_putchar('\n');
	printf("%s > %s ? \n", s4, s3);
	ft_putnbr(ft_strcmp(s4, s3));
	ft_putchar('\n');
	printf("%s > %s ? \n", "\0", "k");
	ft_putnbr(ft_strcmp("\0", "k"));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putendl("Real strcmp test : ");
	printf("%s > %s ? \n", s1, s1);
	ft_putnbr(strcmp(s1, s1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s1, s2);
	ft_putnbr(strcmp(s1, s2));
	ft_putchar('\n');
	printf("%s > %s ? \n", s2, s1);
	ft_putnbr(strcmp(s2, s1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s3, s4);
	ft_putnbr(strcmp(s3, s4));
	ft_putchar('\n');
	printf("%s > %s ? \n", s4, s3);
	ft_putnbr(strcmp(s4, s3));
	ft_putchar('\n');
	printf("%s > %s ? \n", "\0", "k");
	ft_putnbr(strcmp("\0", "k"));
	ft_putchar('\n');

/* strncmp */
	ft_putendl("--- strncmp? --- ");
	printf("%s > %s ? n = 3\n", s1, s1);
	ft_putnbr(ft_strncmp(s1, s1, 3));
	ft_putchar('\n');
	printf("%s > %s ? \n", s1, s2);
	ft_putnbr(ft_strncmp(s1, s2, 1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s2, s1);
	ft_putnbr(ft_strncmp(s2, s1, 1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s3, s4);
	ft_putnbr(ft_strncmp(s3, s4, 1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s4, s3);
	ft_putnbr(ft_strncmp(s4, s3, 1));
	ft_putchar('\n');
	printf("%s > %s ? \n", "\0", "k");
	ft_putnbr(ft_strncmp("\0", "k", 1));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putendl("Real strncmp test : ");
	printf("%s > %s ? \n", s1, s1);
	ft_putnbr(strncmp(s1, s1, 1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s1, s2);
	ft_putnbr(strncmp(s1, s2, 1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s2, s1);
	ft_putnbr(strncmp(s2, s1, 1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s3, s4);
	ft_putnbr(strncmp(s3, s4, 1));
	ft_putchar('\n');
	printf("%s > %s ? \n", s4, s3);
	ft_putnbr(strncmp(s4, s3, 1));
	ft_putchar('\n');
	printf("%s > %s ? \n", "\0", "k");
	ft_putnbr(strncmp("\0", "k", 1));

	return (0);
}
