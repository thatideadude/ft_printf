NAME=libftprintf.a

SRCS=ft_printf.c
SRCS+=ft_putcharf.c
SRCS+=ft_putstrf.c
SRCS+=ft_putnbrf.c
SRCS+=ft_getfunc.c
SRCS+=ft_putnbruf.c
SRCS+=ft_puthexf.c
SRCS+=ft_putptrf.c

BONUS_SRCS=./bonus/ft_putstrn_bonus.c
BONUS_SRCS+=./bonus/ft_putcpad_bonus.c
BONUS_SRCS+=./bonus/ft_findspecifier_bonus.c

OBJS=$(SRCS:.c=.o)
BONUS_OBJS=$(BONUS_SRCS:.c=.o)
CFLAGS=-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
.c.o:
	cc $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean bonus
