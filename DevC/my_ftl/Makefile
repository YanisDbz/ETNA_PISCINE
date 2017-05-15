NAME = my_ftl

SRC = main.c air_shed.c container.c real_ship.c game_boucle.c my_string.c function.c random.c my_put_nbr.c readLine.c

OBJ = *.o

FLAG = -W -Wall -Wextra -Werror

TMP = *~

$(NAME):
	gcc -c $(SRC)
	gcc -o $(NAME) $(FLAG) $(SRC)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(TMP)

re: all fclean
