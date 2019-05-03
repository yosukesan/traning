
CFLAGS=-g -O0 -W -Wall -pedantic -coverage

all: func.c
	gcc -c ${CFLAGS} $< 
	gcc ${CFLAGS} -o a.out main.c *.o

lcov: a.out
	./$<
	lcov -c -b . -d . -o main.info
	genhtml *.info -o result.html

clean:
	rm *.gcda *.gcno *.info a.out -r *.html *.o

