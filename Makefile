NAME	= libftprintf.a
SRCS	= ft_print_char.c\
			ft_print_hex.c\
			ft_print_ptr.c\
			ft_print_int.c\
			ft_print_str.c\
			ft_print_uint.c\
			ft_printf.c

AR		= ar rcs $(NAME) $(OBJS)
OBJS	= $(SRCS:.c=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
