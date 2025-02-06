SRCS =  ft_printf.c ft_strchr.c  ft_strlen.c \
        ft_print_char.c \
        ft_print_string.c \
        ft_print_int.c \
        ft_print_unsigned.c \
        ft_print_hexi.c \
        ft_print_pointer.c
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = cc
CFLAGS = -Werror -Wextra -Wall -Iincludes

all: ${NAME}

${NAME}: ${OBJS} 
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
