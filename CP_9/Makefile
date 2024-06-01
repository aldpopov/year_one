all: compile run clean

compile:
	@gcc cp9.c -Wall -pedantic -std=c99 -o cp9
	
run:
	./cp9
	
valgrind: compile run_valgrind clean
	
run_valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./cp
	
clean:
	@rm -f cp9
