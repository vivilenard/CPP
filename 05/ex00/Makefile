# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 14:21:29 by vlenard           #+#    #+#              #
#    Updated: 2023/07/24 12:04:31 by vlenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Bureaucrat.cpp

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