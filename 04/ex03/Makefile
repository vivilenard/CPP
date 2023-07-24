# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 14:21:29 by vlenard           #+#    #+#              #
#    Updated: 2023/06/19 14:28:22 by vlenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp AMateria.cpp Character.cpp CureMateria.cpp IceMateria.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f ./$(NAME)

re: fclean all