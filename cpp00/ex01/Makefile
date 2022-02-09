NAME = Funbook

SRCS =	main.cpp\
		Contact.cpp\
		PhoneBook.cpp

OBJS	=${addprefix srcs/,${SRCS:.cpp=.o}}

INCLUDES = includes

CC = g++

CFLAGS = -Wall -Werror -Wextra -Wno-unused -g3

RM = rm -rf

#FSANITIZE = -ggdb -fsanitize=address

#VALGRIND = -ggdb

.c.o:
		${CC} ${CFLAGS} -I${INCLUDES} -c $< -o ${<:.cpp=.o}

all:	${NAME}

$(NAME):	${OBJS}
			${CC} ${CFLAGS} ${VALGRIND} ${FSANITIZE} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
