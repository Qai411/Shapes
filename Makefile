

mainProg: main.o rectBlocks.o sqrBaseRectBlocks.o cuboidBlocks.o cylindricalBlocks.o sphericalBlocks.o
	g++ main.o rectBlocks.o sqrBaseRectBlocks.o cuboidBlocks.o cylindricalBlocks.o sphericalBlocks.o -o mainProg

main.o: main.cpp
	g++ -c main.cpp

rectBlocks.o: rectBlocks.cpp rectBlocks.h
	g++ -c rectBlocks.cpp

sqrBaseRectBlocks.o: sqrBaseRectBlocks.cpp sqrBaseRectBlocks.h
	g++ -c sqrBaseRectBlocks.cpp

cuboidBlocks.o: cuboidBlocks.cpp cuboidBlocks.h
	g++ -c cuboidBlocks.cpp

cylindricalBlocks.o: cylindricalBlocks.cpp cylindricalBlocks.h
	g++ -c cylindricalBlocks.cpp

sphericalBlocks.o: sphericalBlocks.cpp sphericalBlocks.h
	g++ -c sphericalBlocks.cpp

clean:
	rm *.o mainProg