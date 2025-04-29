NAME=libftprintf.a
SRCS=ft_printf.c ft_putcharf.c ft_putstrf.c ft_putnbrf.c ft_getfunc.c ft_putnbruf.c ft_puthexf.c ft_putptrf.c
OBJS=$(SRCS:.c=.o)
CFLAGS=-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o:
	cc $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
