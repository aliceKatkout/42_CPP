NAME = account

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Account.cpp tests.cpp

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${SRC}
	${CXX} ${SRC} ${CPPFLAGS} -o ${NAME}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re