SRC = main.c utils.c ft_printf.c u_convert.c pxX_convert.c idsc_convert.c parser.c
LIB = libft.a
FLAGS = -Wall -Wextra -Werror
CC = clang

all :
		@$(CC) $(FLAGS) $(SRC) $(LIB)

test : re
		@./a.out
clean :
		@rm -rf ./a.out


re : clean all

