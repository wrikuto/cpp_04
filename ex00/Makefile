# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 21:28:10 by wrikuto           #+#    #+#              #
#    Updated: 2024/02/05 14:06:39 by wrikuto          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Zombie
SRC		= Zombie.cpp randomChump.cpp newZombie.cpp main.cpp
CC		= c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
OBJS	= $(SRC:.c=.o)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
