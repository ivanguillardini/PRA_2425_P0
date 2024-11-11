# Makefile
all: brazo_robotico

brazo_robotico: BrazoRobotico.o main.o
	g++ -o brazo_robotico BrazoRobotico.o main.o

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

clean:
	rm -f *.o brazo_robotico

test: brazo_robotico
	./brazo_robotico
