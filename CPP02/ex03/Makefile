.PHONY: all clean fclean re

NAME = fixed

SRC	= main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ = $(SRC:cpp=o)

HEADER = Fixed.hpp Point.hpp

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
