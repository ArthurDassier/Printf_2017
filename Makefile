##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	srcs/my_printf.c	\
		srcs/cases.c		\

OBJ	=	$(SRC:.c = .o)

NAME	=	my_printf

LIB_DIR	=	./lib

MY.H_DIR	=	./include

CC	=	gcc

LIB_FLAG	=	-L$(LIB_DIR) -lmy

INCL_FLAG	=	-I$(MY.H_DIR)

all:	$(NAME)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIB_FLAG) $(INCL_FLAG)

$(NAME):	$(OBJ)
		$(MAKE) -C lib/my

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean all re clean