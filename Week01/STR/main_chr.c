#include "../libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{

/* strchr */
	ft_putendl("--- strchr ? --- ");
	ft_putendl("seaturtle ----> ");
	ft_putendl("Real strchr test : ");
	char s2[]= "seaturtle";
	printf("%s\n", (strchr(s2, 't'))); 
	printf("%s\n", (strchr(s2, 'p'))); 
	printf("%s\n", (strchr(s2, 0))); 
	ft_putendl("My strchr test : ");
	printf("%s\n", (ft_strchr(s2, 't'))); 
	printf("%s\n", (ft_strchr(s2, 'p'))); 
	printf("%s\n", (ft_strchr(s2, 0))); 



/* strrchr */
	ft_putendl("--- strrchr ? --- ");
	ft_putendl("My strrchr test : ");
	ft_putendl(ft_strrchr(s2, 't'));
	printf("%s\n", (ft_strrchr(s2, 0))); 
	ft_putendl("Real strrchr test : ");
	printf("%s\n", (strrchr(s2, 't'))); 
	printf("%s\n", (strrchr(s2, 0))); 

	return (0);
}
