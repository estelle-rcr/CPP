NAME = megaphone

SRCS =	Megaphone.cpp\

OBJS = ${SRCS:.cpp=.o}

CXX = clang++

CPPFLAGS = -Wall -Werror -Wextra -Wno-unused -std=c++98 -pedantic

RM = rm -rf

#FSANITIZE = -ggdb -fsanitize=address

#VALGRIND = -ggdb

.cpp.o:
		${CXX} ${CPPFLAGS} -c $< -o $@

all:	${NAME}

$(NAME):	${OBJS}
			${CXX} ${CPPFLAGS} ${VALGRIND} ${FSANITIZE} ${OBJS} -o $@ 

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
