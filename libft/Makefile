LIB = ar rcs
RM = rm -rf

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME)

${NAME}:	${OBJ}
			${CC} ${FLAGS} -o ${NAME} ${OBJ}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJ}

fclean:
		${RM} ${NAME}

re:
	fclean all

.PHONY:	all clean fclean re