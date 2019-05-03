
CFLAGS=-g -O0 -W -Wall -pedantic -coverage

all: func.f90
	gfortran -c ${CFLAGS} $< 
	gfortran ${CFLAGS} -o a.out main.f90 *.o

lcov: a.out
	./$<
	lcov -c -b . -d . -o main.info
	genhtml *.info -o result.html

clean:
	rm *.gcda *.gcno *.info a.out -r *.html *.o

