NAME	= megaphone

SRC		= megaphone.cpp

OBJ		= $(SRC:.cpp=.o)

CC		= clang++

FLAGS	= -Wall -Werror -Wextra -g -std=c++98

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