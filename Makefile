#! /bin/bash/

lms:LibraryZero.o BookZero.o DvdZero.o PeriodicalZero.o main.o BookCreatInventory.o DvdCreatInventory.o PeriodicalCreatInventory.o mainMenu.o display.o BookDisplay.o DvdDisplay.o PeriodicalDisplay.o ciBook.o ciDvd.o ciPeriod.o coBook.o coDvd.o coPeriod.o
	g++ -o lms LibraryZero.o BookZero.o DvdZero.o PeriodicalZero.o main.o BookCreatInventory.o DvdCreatInventory.o PeriodicalCreatInventory.o mainMenu.o display.o BookDisplay.o DvdDisplay.o PeriodicalDisplay.o ciBook.o ciDvd.o ciPeriod.o coBook.o coDvd.o coPeriod.o

ciBook.o:ciBook.cpp headers.h classes.h
	g++ -c ciBook.cpp 
ciDvd.o:ciDvd.cpp headers.h classes.h
	g++ -c ciDvd.cpp 
ciPeriodical.o:ciPeriodical.cpp headers.h classes.h
	g++ -c ciPeriodical.cpp 
coBook.o:coBook.cpp headers.h classes.h
	g++ -c coBook.cpp 
coDvd.o:coDvd.cpp headers.h classes.h
	g++ -c coDvd.cpp 
coPeriodical.o:coPeriodical.cpp headers.h classes.h
	g++ -c coPeriodical.cpp 
PeriodicalDisplay.o:PeriodicalDisplay.cpp headers.h classes.h
	g++ -c PeriodicalDisplay.cpp 
DvdDisplay.o:DvdDisplay.cpp headers.h classes.h
	g++ -c DvdDisplay.cpp 
BookDisplay.o:BookDisplay.cpp headers.h classes.h
	g++ -c BookDisplay.cpp 
display.o:display.cpp headers.h classes.h
	g++ -c display.cpp 
LibraryZero.o:LibraryZero.cpp headers.h classes.h
	g++ -c LibraryZero.cpp 
BookZero.o:BookZero.cpp headers.h classes.h
	g++ -c BookZero.cpp 
DvdZero.o:DvdZero.cpp headers.h classes.h
	g++ -c DvdZero.cpp 
PeriodicalZero.o:PeriodicalZero.cpp headers.h classes.h
	g++ -c PeriodicalZero.cpp 
main.o:main.cpp headers.h classes.h
	g++ -c main.cpp 
mainMenu.o:mainMenu.cpp headers.h classes.h
	g++ -c mainMenu.cpp 
BookCreatInventory.o:BookCreatInventory.cpp headers.h classes.h
	g++ -c BookCreatInventory.cpp 
PeriodicalCreatInventory.o:PeriodicalCreatInventory.cpp headers.h classes.h
	g++ -c PeriodicalCreatInventory.cpp 
DvdCreatInventory.o:DvdCreatInventory.cpp headers.h classes.h
	g++ -c DvdCreatInventory.cpp 
clean:
	-rm lms 
	-rm *.o
	
