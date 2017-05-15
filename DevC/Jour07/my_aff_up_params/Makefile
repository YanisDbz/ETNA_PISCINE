##
## Makefile for Makefile in /home/yanis/debbou_y/my_aff_up_params
## 
## Made by Debbouza Yanis
## Login   <debbou_y@etna-alternance.net>
## 
## Started on  Mon Mar 27 09:37:16 2017 Debbouza Yanis
## Last update Mon Mar 27 10:56:40 2017 Debbouza Yanis
##
NAME = aff_up

SRC = *.c

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
