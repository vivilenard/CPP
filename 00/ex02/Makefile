# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 14:24:52 by vlenard           #+#    #+#              #
#    Updated: 2023/05/13 19:08:08 by vlenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = tests.cpp Account.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME) = c++ $(OBJ) $(FLAGS) -o $(NAME)

all: $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all