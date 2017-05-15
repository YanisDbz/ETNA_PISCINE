NAME =	libmy.a

FLAG =	-W -Wall -Wextra -Werror

SRC =	*.c

OBJ =	*.o

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
