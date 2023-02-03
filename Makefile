##
## EPITECH PROJECT, 2022
## makefile sokoban
## File description:
## sokoban
##
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = push_swap

$(TARGET) : $(SRC)
	gcc -o $(TARGET) $(SRC)

all : $(TARGET)

clean :
	rm -rf $(OBJ)
	rm -rf $(OBJ2)


fclean : clean
	rm -rf $(TARGET)

re : fclean all
