CC = cc
NAME = push_swap
CODE_DIR = ./The_moves ./sort_small_stack ./sort_big_stack  ./libft ./ 
CFILE = $(foreach D,$(CODE_DIR),$(wildcard $(D)/*.c))
OBJ = $(patsubst %.c,%.o,$(CFILE))
FLAG = -Wall -Wextra -Werror -I.
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<

clean: 
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re