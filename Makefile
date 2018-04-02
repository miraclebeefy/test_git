all:target

target:
	gcc -g -o main main.c debug.c hello.c

.PHONY:clean

clean:
	@rm -rf main *.o
