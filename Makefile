# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 17:30:40 by jingchen          #+#    #+#              #
#    Updated: 2022/11/29 17:40:44 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c\
			ft_putchar.c\
			ft_puthexlower.c\
			ft_puthexupper.c\
			ft_putnbr.c\
			ft_putptr.c\
			ft_putstr.c\
			ft_putunbr.c

OBJS	= $(SRCS:.=.o)

CC	=	gcc
RM	=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a