SRC = pf_precision.c main.c pf_init_struct.c parser.c ft_put_param.c utils.c ft_printf.c idsc_convert.c ft_px_convert.c u_convert.c print_args.c print_flags.c calcul_len.c
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

