NAME = libft.a

SRC = *.c 

OBJ = *.o 

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

