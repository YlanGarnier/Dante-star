##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## main makefile
##

all:
	make -C generator && make -C solver

clean:
	make fclean -C generator && make fclean -C solver

fclean:	clean
	rm -f generator/generator
	rm -f solver/solver

re:	fclean all

.PHONY: all clean fclean re
