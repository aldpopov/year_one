all: create print modifying analysis run

run: 
	./create
	./print
	./analysis

run_valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./create

create:
	gcc repository.c create.c -o create
print:
	gcc repository.c print.c -o print
modifying:
	gcc repository.c modifying.c -o modifying
analysis:	repository.h repository.c
	gcc repository.c analysis.c -o analysis
clean:
	rm analysis create modifying print
