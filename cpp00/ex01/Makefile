NAME = phonebook

SRCS =	phonebook.cpp\

OBJS = ${SRCS:.c=.o}

CC = g++

CFLAGS = -Wall -Werror -Wextra -Wno-unused

RM = rm

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}


re: 		fclean all

.PHONY:		all clean fclean re
