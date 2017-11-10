##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	srcs/my_printf.c	\
		srcs/cases.c		\
		srcs/cases2.c		\

OBJ	=	$(SRC:.c = .o)

NAME	=	libmy.a

LIB_DIR	=	./lib

MY.H_DIR	=	./include

CC	=	gcc

LIB_FLAG	=	-L$(LIB_DIR) -lmy

INCL_FLAG	=	-I$(MY.H_DIR)

all:	$(NAME)

$(NAME):
		$(MAKE) -C srcs/

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean all re clean
