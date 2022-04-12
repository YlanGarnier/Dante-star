##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## project's Makefile
##

CC	=	gcc

SRC	=	sources/imperfect_binary_tree_maze.c	\
		sources/imperfect_maze.c	\
		sources/perfect_binary_tree_maze.c	\
		sources/perfect_maze.c	\
		sources/error_handling.c	\
		sources/generator.c

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

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

fclean:	clean
	rm -f $(NAME)
	make fclean -C ../lib/my

re:	fclean all

debug:	$(OBJ)
	make -C ../lib/my
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LIBMY) $(DEBUG)

.PHONY: all clean fclean re debug
