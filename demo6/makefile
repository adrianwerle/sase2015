.all: app

app: foo.o bar.o main.o
	gcc foo.o bar.o main.o

foo.o: foo.c
	gcc -c foo.c

bar.o: bar.c
	gcc -c bar.c

main.o: main.c
	gcc -c main.c
