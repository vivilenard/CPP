# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 14:21:29 by vlenard           #+#    #+#              #
#    Updated: 2023/06/09 14:49:48 by vlenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp ClapTrap.cpp FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
		@$(CXX) $(CXXFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f ./$(NAME)

re: fclean all