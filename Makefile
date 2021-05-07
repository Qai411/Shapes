CC = g++
C11STD = -std=c++11
DEBUG = -g
CFLAGS = $(C11STD) -Wall -c $(DEBUG)
LFLAGS = $(C11STD) -Wall $(DEBUG)

OBJS = rectBlocks.o sqrBaseRectBlocks.o cuboidBlocks.o cylindricalBlocks.o sphericalBlocks.o

mainProg : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o mainProg

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp

rectBlocks.o : rectBlocks.cpp rectBlocks.h
	$(CC) $(CFLAGS) rectBlocks.cpp

sqrBaseRectBlocks.o : sqrBaseRectBlocks.cpp sqrBaseRectBlocks.h
	$(CC) $(CFLAGS) sqrBaseRectBlocks.cpp

cuboidBlocks.o : cuboidBlocks.cpp cuboidBlocks.h
	$(CC) $(CFLAGS) cuboidBlocks.cpp

cylindricalBlocks.o : cylindricalBlocks.cpp cylindricalBlocks.h
	$(CC) $(CFLAGS) cylindricalBlocks.cpp

sphericalBlocks.o : sphericalBlocks.o sphericalBlocks.h
	$(CC) $(CFLAGS) sphericalBlocks.cpp




