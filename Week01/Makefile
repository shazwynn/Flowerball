NAME = libft.a

SRC = WRITE/ft_putchar.c \
	  WRITE/ft_putchar_fd.c \
	  WRITE/ft_putstr.c \
	  WRITE/ft_putstr_fd.c \
	  WRITE/ft_putnbr.c \
	  WRITE/ft_putnbr_fd.c \
	  WRITE/ft_putendl.c \
	  WRITE/ft_putendl_fd.c \
	  IS/ft_isalnum.c \
	  IS/ft_isalpha.c \
	  IS/ft_isascii.c \
	  IS/ft_isdigit.c \
	  IS/ft_isprint.c \
	  STR/ft_atoi.c \
	  STR/ft_bzero.c \
	  STR/ft_memccpy.c \
	  STR/ft_memchr.c \
	  STR/ft_memcmp.c \
	  STR/ft_memcpy.c \
	  STR/ft_memmove.c \
	  STR/ft_memset.c \
	  STR/ft_strcat.c \
	  STR/ft_strchr.c \
	  STR/ft_strclr.c \
	  STR/ft_strcmp.c \
	  STR/ft_strcpy.c \
	  STR/ft_strdup.c \
	  STR/ft_strlcat.c \
	  STR/ft_strlen.c \
	  STR/ft_strncmp.c \
	  STR/ft_strncpy.c \
	  STR/ft_strnstr.c \
	  STR/ft_strrchr.c \
	  STR/ft_strstr.c \
	  STR/ft_tolower.c \
	  STR/ft_toupper.c 

OBJ = ft_putchar.o \
	  ft_putchar_fd.o \
	  ft_putstr.o \
	  ft_putstr_fd.o \
	  ft_putnbr.o \
	  ft_putnbr_fd.o \
	  ft_putendl.o \
	  ft_putendl_fd.o \
	  ft_isalnum.o \
	  ft_isalpha.o \
	  ft_isascii.o \
	  ft_isdigit.o \
	  ft_isprint.o \
	  ft_strclr.o \
	  ft_strcmp.o \
	  ft_strcpy.o \
	  ft_strlen.o \
	  ft_strncmp.o \
	  ft_strncpy.o \
	  ft_strnstr.o \
	  ft_strstr.o \
	  ft_atoi.o \
	  ft_bzero.o \
	  ft_memccpy.o \
	  ft_memchr.o \
	  ft_memcmp.o \
	  ft_memcpy.o \
	  ft_memmove.o \
	  ft_memset.o \
	  ft_strcat.o \
	  ft_strchr.o \
	  ft_strdup.o \
	  ft_strlcat.o \
	  ft_strrchr.o \
	  ft_tolower.o \
	  ft_toupper.o 

FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

