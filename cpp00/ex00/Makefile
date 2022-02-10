NAME = megaphone

SRCS =	megaphone.cpp\

OBJS = ${SRCS:.cpp=.o}

CC = clang++

CFLAGS = -Wall -Werror -Wextra -Wno-unused -std=c++98 -pedantic

RM = rm

#FSANITIZE = -ggdb -fsanitize=address -fno-omit-frame-pointer

#VALGRIND = -ggdb

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

$(NAME):	${OBJS}
			${CC} ${CFLAGS} ${VALGRIND} ${FSANITIZE} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re