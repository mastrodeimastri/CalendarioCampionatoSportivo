Calendario: squadra.o main.o sort.o
	g++  squadra.o main.o sort.o -o Calendario;

sort.o: sort.cpp
	g++ -c sort.cpp;

squadra.o: squadra.cpp
	g++ -c squadra.cpp;

main.o: main.cpp
	g++ -c main.cpp;

clean:
	rm *.o Calendario;
