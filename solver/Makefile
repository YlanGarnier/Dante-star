##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## project's Makefile
##

CC	=	gcc

SRC	=	sources/main.c	\
		sources/solver.c	\
		sources/get_maze.c	\
		sources/clean_maze.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

LIBMY	=	-L../lib -lmy

DEBUG	=	-g -Wall -Wextra

CPPFLAGS	=	-I../include

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ../lib/my
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LIBMY)

clean:
	rm -f $(OBJ)
	make -C ../lib/my

fclean: clean
	rm -f $(NAME)
	make fclean -C ../lib/my

re:	fclean all

debug:	$(OBJ)
	make -C ../lib/my
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LIBMY) $(DEBUG)

.PHONY: all clean fclean re debug
