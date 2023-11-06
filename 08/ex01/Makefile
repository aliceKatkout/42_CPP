# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 15:45:49 by avedrenn          #+#    #+#              #
#    Updated: 2023/11/06 18:29:21 by avedrenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

SRCS = main.cpp Span.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = Span.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)

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