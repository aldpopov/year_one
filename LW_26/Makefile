all: compile run clean

compile:
	@gcc lab26.c -Wall -pedantic -std=c99 -o lab26
	
run:
	./lab26
	
valgrind: compile run_valgrind clean
	
run_valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./lab26
	
clean:
	@rm -f lab26
