# edit this makefile so that running make compiles your enigma program

all: enigma

enigma: Main.o Rotor.o Reflector.o Plugboard.o Machine.o
	g++ -std=c++11 Machine.o Rotor.o Main.o Reflector.o Plugboard.o -o enigma

Machine.o: Machine.cpp
	g++ -c Machine.cpp -o Machine.o

Main.o: Main.cpp
	g++ -c Main.cpp -o Main.o

Rotor.o: Rotor.cpp
	g++ -c Rotor.cpp -o Rotor.o

Reflector.o: Reflector.cpp
	g++ -c Reflector.cpp -o Reflector.o

Plugboard.o: Plugboard.cpp
	g++ -c Plugboard.cpp -o Plugboard.o

clean:
	rm -rf enigma *.o

.PHONY: clean
