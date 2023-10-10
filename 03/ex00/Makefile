# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 17:36:58 by avedrenn          #+#    #+#              #
#    Updated: 2023/10/10 18:06:05 by avedrenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap

SRCS = main.cpp clapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = clapTrap.hpp

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