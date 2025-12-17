NAME = megaphone

SRC = megaphone.cpp

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all:	$(NAME)

.c.o:
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	c++ -o $(NAME) $(CFLAGS) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 