SRC = main.c ft_printf.c
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

