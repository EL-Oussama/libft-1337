NAME = libft.a
CC = CC
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isdigit.c ft_isalpha.c ft_isalnum.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ) : $(SRC)
	$(CC)  $(CFLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)

re: fclean all
remove :
	rm a.out
.PHONY: all clean fclean re remove