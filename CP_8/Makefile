all: compile run clean

compile:
	@gcc cp8.c -Wall -pedantic -std=c99 -o cp8
	
run:
	./cp8
	
valgrind: compile run_valgrind clean
	
run_valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./cp8
	
clean:
	@rm -f cp8
