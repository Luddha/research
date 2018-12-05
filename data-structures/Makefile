
INC = -I ./includes/
SRC = ./src/
OBJ = ./objects/


exec: main.cpp $(SRC)*.cpp
	g++ -c $(INC) $(SRC)*.cpp ./main.cpp
	g++ ./*.o -o exec.out


clean:
	rm ./*.o
	rm ./exec.out
