NAME = libftprintf.a

SRCS =  ft_printf.c \
		ft_puthexa.c \
		ft_putnbr.c \
		ft_putpointer.c \
		ft_putstr.c \
		ft_putunsigned.c 

FLAGS = -c -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	gcc $(FLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
