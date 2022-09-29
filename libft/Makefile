LIB = ar -rcs
RM = rm -rf

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = ft_bzero.c\
	   ft_isalnum.c\
	   ft_atoi.c\
	   ft_calloc.c\
	   ft_isalpha.c\
	   ft_isascii.c\
	   ft_isdigit.c\
	   ft_isprint.c\
	   ft_memmove.c\
	   ft_memcpy.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_memset.c\
	   ft_split.c\
	   ft_strchr.c\
	   ft_strdup.c\
	   ft_strjoin.c\
	   ft_strncmp.c\
	   ft_strnstr.c\
	   ft_strlcat.c\
	   ft_strlcpy.c\
	   ft_strlen.c\
	   ft_strrchr.c\
	   ft_strtrim.c\
	   ft_substr.c\
	   ft_tolower.c\
	   ft_toupper.c

OBJ = ${SRC:.c=.o}

INCLUDE = libft.h

all: ${NAME}

${NAME}:	${OBJ}
	${LIB} -o $@ $^

.c.o: ${INCLUDE}
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}
re:
	fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY:	all clean fclean re so
