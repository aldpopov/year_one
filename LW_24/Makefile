all: compile run clean

compile:
	@gcc lab_24.c -Wall -pedantic -std=c99 -o lab_24
	
run:
	./lab_24
	
valgrind: compile run_valgrind clean
	
run_valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./lab_24
	
clean:
	@rm -f lab_24
