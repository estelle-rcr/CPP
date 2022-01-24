NAME = phonebook

SRCS =	phonebook.cpp\
OBJS = ${SRCS:.cpp=.o}

CC = g++

CFLAGS = -Wall -Werror -Wextra -Wno-unused

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