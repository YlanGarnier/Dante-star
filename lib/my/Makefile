##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## library's Makefile
##

SRC	=	my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_getstr.c	\
		my_is_prime.c	\
		my_putchar.c	\
		my_putnbr.c	\
		my_putdec.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_str_isnum.c	\
		my_nbrlen.c	\
		my_strlen.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_swap.c	\
		my_printf/sources/disp_bin.c	\
		my_printf/sources/disp_oct.c	\
		my_printf/sources/disp_hex.c	\
		my_printf/sources/disp_plus_format.c	\
		my_printf.c	\
		my_str_to_word_array.c	\
		my_arraylen.c	\
		my_putarray.c	\
		my_free_array.c	\
		my_str_isprintable.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc ../$(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../$(NAME)

re:	fclean all

.PHONY: all clean fclean re
