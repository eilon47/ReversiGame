#elon bashari
#308576933

a.out: Board.o Player.o ConsolePlayer.o Point.o Play.o main.o
	g++ Board.o Player.o ConsolePlayer.o Point.o Play.o main.o
	
Board.o: Board.cpp Board.h
	g++ -c Board.cpp

Player.o: Player.cpp Player.h
	g++ -c Player.cpp

ConsolePlayer.o: ConsolePlayer.cpp ConsolePlayer.h
	g++ -c ConsolePlayer.cpp

Point.o: Point.cpp Point.h
	g++ -c Point.cpp

Play.o: Play.cpp Play.h
	g++ -c Play.cpp
	
main.o: main.cpp Board.h Play.h
	g++ -c main.cpp

run:
	./a.out

