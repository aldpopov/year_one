all: compile run clean

compile:
	@gcc lab23.c -Wall -pedantic -std=c99 -o lab23
	
run:
	./lab23
	
valgrind: compile run_valgrind clean
	
run_valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./lab23
	
clean:
	@rm -f lab23
