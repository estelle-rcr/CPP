NAME = DiamondTrap

SRCS =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp

OBJS	=${addprefix srcs/,${SRCS:.cpp=.o}}

INCL = includes

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -Wno-unused -std=c++98 -pedantic

RM = rm -rf

#FSANITIZE = -ggdb -fsanitize=address

#VALGRIND = -ggdb

.cpp.o:
		${CXX} ${CPPFLAGS} -I${INCL} -c $< -o ${<:.cpp=.o}

all:	${NAME}

$(NAME):	${OBJS}
			${CXX} ${CPPFLAGS} ${VALGRIND} ${FSANITIZE} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
