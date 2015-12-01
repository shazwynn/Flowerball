#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
/* bzero */
	ft_putendl("--- bzero? --- ");
	ft_putendl("Real bzero test : ");
	char a[10];
	printf("%s\n", a);
	bzero(a, 10);
	printf("%s\n", a);

	ft_putendl("My bzero test : ");
	char z[10];
	printf("%s\n", z);
	ft_bzero(z, 10);
	printf("%s\n", z);
	
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
	
/* memcpy */
	ft_putendl("--- memcpy? --- ");
	ft_putendl("Real memcpy test : ");
	printf("%s\n", x);
	char y[10];
	memcpy(y, x, 10);
	printf("%s\n", y);

	ft_putendl("My memcpy test : ");
	char w[10];
	printf("%s\n", x);
	ft_memcpy(w, x, 10);
	printf("%s\n", w);

/* memccpy */
	ft_putendl("--- memccpy? --- ");
	ft_putendl("Real memccpy test : ");
	const char one[] = "turtle";
	const char two[] = "pancake";
	char dst[15];
	bzero(dst, 15);
	printf("%s\n", one);
	printf("%s\n", memccpy(dst, one, 'n', 6));
	bzero(dst, 15);
	printf("%s, = %p\n", two, two);
	printf("%s, = %p\n", memccpy(dst, two, 'n', 15), memccpy(dst, two, 'n', 15));

	ft_putendl("My memcpy test : ");
	bzero(dst, 15);
	printf("%s\n", one);
	printf("%s\n", ft_memccpy(dst, one, 'n', 6));
	bzero(dst, 15);
	printf("%s, = %p\n", two, two);
	printf("%s, = %p\n", ft_memccpy(dst, two, 'n', 15), ft_memccpy(dst, two, 'n', 15));

	return (0);
}
