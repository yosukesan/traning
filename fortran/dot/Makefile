
FFLAGS=-pedantic -W -Wall

all:
	gfortran $(FFLAGS) -c ./ m_test.f90 m_algorithm.f90 

test:
	make all
	gfortran $(FFLAGS) -I ./ main.f90 *.o

clean:
	rm *.o *.mod a.out
