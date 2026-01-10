NAME = ref

SRC = main.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

.cpp.o:
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	c++  $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re