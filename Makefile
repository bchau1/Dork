resu: display.o main.o 
	g++ display.o main.o -o resu -lncurses

display.o: display.cpp
	g++ -c -std=c++11 display.cpp -lncurses
main.o: main.cpp
	g++ -c -std=c++11 main.cpp -lncurses
loadsave.o: loadsave.cpp
	g++ -c -Wno-write-strings -std=c++11 loadsave.cpp -lncurses
game.o: game.cpp
	g++ -c -std=c++11 game.cpp -lncurses
event.o: event.cpp
	g++ -c -std=c++11 event.cpp -lncurses
Checkpoint.o: Checkpoint.cpp
	g++ -c -std=c++11 Checkpoint.cpp -lncurses
run:
	./resu
clean:
	rm -f resu
	rm -f *.o
dclean:
	rm -f *.dat
