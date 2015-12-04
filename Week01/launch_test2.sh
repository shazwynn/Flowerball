cp IS/ft* WRITE/ft* STR/ft* MEM/ft* EXTRA/ft* PART2/ft* libft.h ../../TEST_2
cp libft.h ..
make re
make clean
cp libft.a ../../TEST_2
cd ../../TEST_2
gcc -I./ -Wall -Wextra -Werror *.c && ./a.out
