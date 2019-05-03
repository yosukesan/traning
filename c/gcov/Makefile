
all: main.c
	gcc -g -O0 -W -Wall -pedantic -coverage $<

lcov: a.out
	./$<
	lcov -c -b . -d . -o main.info
	genhtml *.info -o result.html

clean:
	rm *.gcda *.gcno *.info a.out -r *.html

