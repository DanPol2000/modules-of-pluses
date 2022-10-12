NAME	= Fixed

SRC		= Fixed.cpp main.cpp
INC		= Fixed.hpp
OBJ		= $(patsubst %.cpp,%.o,$(SRC))

CC		= g++

FLAGS	= -Wall -Werror -Wextra -g 

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re