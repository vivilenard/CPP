# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 09:58:16 by vlenard           #+#    #+#              #
#    Updated: 2023/05/17 21:25:00 by vlenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	c++ $(OBJ) $(FLAGS) -o $(NAME)

all: $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f ./$(NAME)

re: fclean all
