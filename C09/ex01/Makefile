SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS = ${SRCS:.c=.o}
INClUDES = includes
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
LIBC = ar rc
LIBR = ranlib
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INClUDES}

${NAME}: ${OBJECTS}
		${LIBC} ${NAME} ${OBJECTS}
		${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJECTS}

fclean: clean
		${RM} ${NAME}
re: fclean all