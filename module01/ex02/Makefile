# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 20:31:09 by wrikuto           #+#    #+#              #
#    Updated: 2024/02/05 20:31:25 by wrikuto          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brain
SRCS	= main.cpp
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
