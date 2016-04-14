##
## Makefile for  in /home/simomb_s/semestre3/tests_maison/calculatrice
##
## Made by stephanedarcy simomba
## Login   <simomb_s@epitech.net>
##
## Started on  Sun Jan  3 16:03:11 2016 stephanedarcy simomba
## Last update Thu Jan  7 02:44:21 2016 stephanedarcy simomba
##

SRC	= main.c \
	  menger.c

CC	= gcc

RM	= rm -f

OBJ	= $(SRC:.c=.o)

NAME	= menger

CFLAGS	+= -Wextra -Werror -Wall -std=gnu99

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
