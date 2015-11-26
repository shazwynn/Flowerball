#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{

/* strchr */
	ft_putendl("--- strchr ? --- ");
	ft_putendl("seaturtle ----> ");
	char s1[]= "seaturtle";
	ft_putendl("My strchr test : ");
	ft_putendl(ft_strchr(s1, 't'));
	ft_putendl("Real strchr test : ");
	char s2[]= "seaturtle";
	printf("%s\n", (strchr(s2, 't'))); 

/* strrchr */
	ft_putendl("--- strrchr ? --- ");
	char s3[]= "seaturtle";
	ft_putendl("My strrchr test : ");
	ft_putendl(ft_strrchr(s3, 't'));
	ft_putendl("Real strrchr test : ");
	char s4[]= "seaturtle";
	printf("%s\n", (strrchr(s4, 't'))); 

	return (0);
}
