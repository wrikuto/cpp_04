NAME	= animal_1
SRC		= Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp
CC		= c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
OBJS	= $(SRC:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
