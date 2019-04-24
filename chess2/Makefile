all: a.out

chess.o: chess.cc
	g++ -c chess.cc

Chesslib.o: Chesslib.cc Chesslib.h
	g++ -c Chesslib.cc

Chessman.o: Chessman.cc Chesslib.h
	g++ -c Chessman.cc

a.out: chess.o Chesslib.o Chessman.o
	g++ chess.o Chesslib.o Chessman.o

clean: 
	rm -rf *.o a.out
