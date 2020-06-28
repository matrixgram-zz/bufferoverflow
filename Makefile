edit : main.o

main.o : src/main.c
	cc -c src/main.c -o bin/main && chmod u+x bin/main
