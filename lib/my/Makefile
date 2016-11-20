##
## Makefile for Makefile in /home/Artha77/CPool_Day10/lib/my
##
## Made by dylan renard
## Login   <Artha77@epitech.net>
##
## Started on  Mon Oct 17 20:22:43 2016 dylan renard
## Last update Sun Nov 20 16:21:28 2016 dylan renard
##

CC	=	gcc

AR	=	ar rc

CFLAGS	=	-I./include

NAME	=	libmy.a

RM	=	rm -f

SRCS	=	is_bt.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_puterr.c 	\
		my_strcmp.c	\
		my_put_nbr.c	\
		my_putnbr_base.c	\
		my_putnbr_u.c	\
		my_putnbr_base_u.c	\
		number_len.c	\
		my_putstr_s.c	\
		my_printf.c	\
		list.c		\
		utils.c		\
		utils2.c		\
		utils3.c

OBJS	=	$(SRCS:.c=.o)

CPLIB	=	cp $(NAME) ../../ && cp include/my.h ../../include/	\
		&& cp include/my_printf.h ../../include/

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(CPLIB)

$(OBJS):
	$(CC) -c $(SRCS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
