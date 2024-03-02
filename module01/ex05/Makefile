NAME	= hari
SRCS	= \
			Harl.cpp \
			main.cpp

CC		= c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
OBJS	= $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME) $(OBJS)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
