.PHONY: all clean fclean re

NAME = animal

SRC	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

HEADER = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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