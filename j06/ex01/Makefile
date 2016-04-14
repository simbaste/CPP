##
## Makefile for  in /home/simomb_s/piscine_cpp_d06
##
## Made by stephanedarcy simomba
## Login   <simomb_s@epitech.net>
##
## Started on  Mon Jan 11 09:17:37 2016 stephanedarcy simomba
## Last update Mon Jan 11 10:50:44 2016 stephanedarcy simomba
##

SRCS	= main.cpp

RM	= rm -f

OBJS	= $(SRCS:.cpp=.o)

NAME	= my_convert_temp

CFLAGS	+= -Wall -Wextra -Werror

all	: $(NAME)

$(NAME)	: $(OBJS)
	g++ -o $(NAME) $(OBJS) $(CFLAGS)

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
