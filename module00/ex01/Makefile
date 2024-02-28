# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 17:30:10 by wrikuto           #+#    #+#              #
#    Updated: 2024/02/28 17:44:48 by wrikuto          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
SRCS	= PhoneBook.cpp Contact.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)

CC = c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)
		
fclean: clean
		rm -f $(NAME)

re: fclean all	

.PHONY: all clean fclean re
