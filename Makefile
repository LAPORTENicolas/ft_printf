SOURCES = ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_puthex_fd.c ft_putnbr_fd.c
OBJECTS = ${SOURCES:.c=.o}
NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJECTS}
	ar -crs ${NAME} ${OBJECTS}

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJECTS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean re fclean
