NAME	= fixed
CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror

SRCS	= main.cpp Fixed.cpp
OBJS	= $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(OBJS)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
