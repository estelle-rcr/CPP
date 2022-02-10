NAME = account

SRCS =	Account.cpp\
		tests.cpp

INCL = includes

OBJS = ${addprefix srcs/,${SRCS:.cpp=.o}}

CC = clang++

CFLAGS = -Wall -Werror -Wextra -Wno-unused -std=c++98 -pedantic

RM = rm -rf

#FSANITIZE = -ggdb -fsanitize=address

#VALGRIND = -ggdb

.c.o:
		${CC} ${CFLAGS} -I${INCL} -c $< -o ${<:.cpp=.o}

all:	${NAME}

$(NAME):	${OBJS}
			${CC} ${CFLAGS} ${VALGRIND} ${FSANITIZE} ${OBJS} -o ${NAME} 

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
