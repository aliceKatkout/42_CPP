# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 17:36:58 by avedrenn          #+#    #+#              #
#    Updated: 2023/10/16 17:10:29 by avedrenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

SRCS = main.cpp AMateria.cpp ICharacter.cpp Character.cpp Cure.cpp Ice.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES =

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	c++ $(FLAGS)  -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re