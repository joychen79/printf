SRCS	=	ft_printf.c\
			ft_putchar.c\
			ft_puthexlower.c\
			ft_puthexupper.c\
			ft_putnbr.c\
			ft_putptr.c\
			ft_putstr.c\
			ft_putunbr.c

OBJS	= $(SRCS:.c=.o)

CC	=	gcc
RM	=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:	
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean	all

.PHONY:	all clean fclean re
