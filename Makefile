CC=gcc
FLAGS=-Wall -Wextra -Werror -pedantic
PNAME=main
RUN=./$(PNAME)
FILE=*.c

all: compile run

compile:
	$(CC) $(FLAGS) $(FILE) -o $(PNAME)

run:
	$(RUN)
