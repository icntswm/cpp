.PHONY: all clean fclean re

NAME = materia

SRC	= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

HEADER = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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