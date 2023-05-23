# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 09:58:16 by vlenard           #+#    #+#              #
#    Updated: 2023/05/20 15:59:34 by vlenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	c++ $(OBJ) $(FLAGS) -o $(NAME)

all: $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f ./$(NAME)

re: fclean all
