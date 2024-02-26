# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 21:42:49 by wrikuto           #+#    #+#              #
#    Updated: 2024/02/24 19:34:10 by wrikuto          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fight 
SRCS	= \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp \
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
