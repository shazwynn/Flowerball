#include "../libft.h"
#include <fcntl.h>

int		main(void)
{
/* on file descriptor */
	int fd;
	fd = open("sample.txt", O_WRONLY);
	if (fd == -1)
		return (write(1, "error file missing", 18));
	ft_putendl_fd("ON FILE DESCRIPTOR : ", fd);
	ft_putchar_fd('i', fd);
	ft_putstr_fd(" has ", fd);
	ft_putnbr_fd(42, fd);
	ft_putchar_fd(' ', fd);
	ft_putstr_fd("turtles", fd);

	return(0);
}
