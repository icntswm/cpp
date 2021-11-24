.PHONY: all clean fclean re

NAME = megaphone

SRC	= megaphone.cpp

OBJ = $(SRC:cpp=o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@


all: $(NAME)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(OBJ)
		rm -f $(NAME)

re:		fclean all
