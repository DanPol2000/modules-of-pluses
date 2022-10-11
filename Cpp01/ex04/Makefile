NAME	= ex04

SRC		= main.cpp

OBJ		= $(patsubst %.cpp,%.o,$(SRC))

CC		= g++

FLAGS	= -Wall -Werror -Wextra -g 

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re