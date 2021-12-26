.PHONY: all clean fclean re

NAME = convert

SRC	= main.cpp Convert.cpp

HEADER = Convert.hpp

OBJ = $(SRC:cpp=o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(OBJ)
		rm -f $(NAME)

re:		fclean all