#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	const char s2[] = "watermelons";
	const char s5[] = "kill";
	const char s3[] = "roadkill";

/* strstr
	ft_putendl("Real strstr test : ");
	printf("%s in %s ? \n", s5, s3);
	ft_putstr(strstr(s3, s5));
	ft_putchar('\n');
	printf("%s in %s ? \n", "", s2);
	ft_putstr(strstr(s2, ""));
	ft_putchar('\n');
	printf("%s in %s ? \n", "yoyo", "salut");
	printf("%s\n", strstr("salut", "yoyo"));
	ft_putchar('\n');
	
	
	ft_putendl("--- strstr? --- ");
	printf("%s in  %s ? \n", s5, s3);
	ft_putstr(ft_strstr(s3, s5));
	ft_putchar('\n');
	printf("%s in %s ? \n", "", s2);
	ft_putstr(ft_strstr(s2, ""));
	ft_putchar('\n');
	printf("%s in %s ? \n", "yoyo", "salut");
	printf("%s\n", ft_strstr("salut", "yoyo"));
	ft_putchar('\n');
*/

/* strnstr */
	ft_putendl("Real strnstr test : ");
	printf("%s in %s ? n = 8\n", s5, s3);
	printf("%s\n\n", (strnstr(s3, s5, 8)));
	printf("%s in %s ? n = 1\n", "", s2);
	printf("%s\n\n", (strnstr(s2, "", 1)));
	printf("%s in %s ? n = 10\n", "yoyo", "salut");
	printf("%s\n\n", strnstr("salut", "yoyo", 10));
	
	ft_putendl("--- strnstr? --- ");
	printf("%s in %s ? n = 8 \n", s5, s3);
	printf("%s\n\n", (ft_strnstr(s3, s5, 8)));
	printf("%s in %s ? n = 1 \n", "", s2);
	printf("%s\n\n", (ft_strnstr(s2, "", 1)));
	printf("%s in %s ? n = 10 \n", "yoyo", "salut");
	printf("%s\n\n", ft_strnstr("salut", "yoyo", 10));
	
	return (0);
}
