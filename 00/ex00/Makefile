# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 14:24:52 by vlenard           #+#    #+#              #
#    Updated: 2023/05/10 14:33:06 by vlenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.c=.o)

$(NAME) = c++ $(OBJ) $(FLAGS) -o $(NAME)

all: $(NAME)

clean: rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all