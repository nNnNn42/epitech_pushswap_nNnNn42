##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC =*.c\

OBJ = $(wildcard *~)

CFLAGS = -W -Wall -Wextra -g3

TARGET = push_swap

$(TARGET):
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
	make clean

all: $(TARGET)

clean:
	rm -rf $(OBJ)
	rm -rf *.html
	rm -rf html
	rm -rf *.css
	rm -rf *.gcda
	rm -rf *.gcno

fclean: clean
	rm -rf $(TARGET)
	rm -rf unitest

re: fclean all

tests_run: $(OBJ)
	$(CC) tests/test.c $(SRC) -lcriterion --coverage -o unitest
	./unitest
