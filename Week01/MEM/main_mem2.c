#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
/* memcmp */
	ft_putendl("--- memcmp? --- ");
	ft_putendl("Real memcmp test : ");
	const char one[] = "turtles";
	const char two[] = "pancake";
	char three[16];
	memset(three, '8', 15);
	char lol[]="test-creation-variable-en-memoire";
	printf("%s\n", lol);
	char four[16];
	memset(four, '8', 15);
	printf("%s and %s\n", one, two);
	printf("%i\n", memcmp(one, two, 7));
	printf("%s and %s\n", three, four);
	printf("%i\n", memcmp(three, four, 7));

	ft_putendl("My memcmp : ");
	printf("%s and %s\n", one, two);
	printf("%i\n", ft_memcmp(one, two, 7));
	printf("%s and %s\n", three, four);
	printf("%i\n", ft_memcmp(three, four, 7));
	printf("%s and %s\n", "aab", "aac");
	printf("%i\n", ft_memcmp("aab", "aac", 2));

/* memchr */
	ft_putendl("--- memchr? --- ");
	ft_putendl("Real memchr test : ");
	printf("n in %s\n", one);
	printf("%s\n", memchr(one, 'n', 7));
	printf("n in %s\n", two);
	printf("%s\n", memchr(two, 'n', 7));
	printf("abcdef in backslash0'\n");
	printf("%s\n", memchr("abcdef", '\0', 7));

	ft_putendl("My memchr test : ");
	printf("n in %s\n", one);
	printf("%s\n", ft_memchr(one, 'n', 7));
	printf("n in %s\n", two);
	printf("%s\n", ft_memchr(two, 'n', 7));
	printf("abcdef in backslash0'\n");
	printf("%s\n", ft_memchr("abcdef", '\0', 7));

/* memmove */
	ft_putendl("--- memmove? --- ");
	ft_putendl("Real memmove test : ");
	char src[] = "012345678";
	char dst[] = "iiiiiiiii";
	printf("%s in %s\n", src, dst);
	memmove(dst, src, 9);
	printf("%s\n", dst);
	memset(dst, 'i', 9);
	printf("source %s and destination %s\n", src + 1, src);
	printf(" return : %s\n", memmove(src, src + 1, 8));
	printf(" destination : %s\n", src);
	ft_putchar('\n');

	ft_putendl("My memmove test : ");
	char src2[] = "012345678";
	char dst2[] = "iiiiiiiii";
	printf("%s in %s\n", src2, dst2);
	ft_memmove(dst2, src2, 9);
	printf("%s\n", dst2);
	memset(dst2, 'i', 9);
	printf("source %s and destination %s\n", src2 + 1, src2);
	printf(" return : %s\n", ft_memmove(src2, src2 + 1, 8));
	printf(" destination : %s\n", src2);
	
	return (0);
}
