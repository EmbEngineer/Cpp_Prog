# /bin/bash

Distance: main.o Distance.o Get_Distance.o Set_Distance.o Add_Distance.o Test_Function.o Opr_Function.o
	g++ -o Distance main.o Distance.o Get_Distance.o Set_Distance.o Add_Distance.o Test_Function.o Opr_Function.o
	
main.o: main.cpp declaration.h headers.h
	g++ -c main.cpp
Distance.o: Distance.cpp declaration.h headers.h
	g++ -c Distance.cpp
Get_Distance.o: Get_Distance.cpp declaration.h headers.h
	g++ -c Get_Distance.cpp
Set_Distance.o: Set_Distance.cpp declaration.h headers.h
	g++ -c Set_Distance.cpp
Add_Distance.o: Add_Distance.cpp declaration.h headers.h
	g++ -c Add_Distance.cpp
Test_Function.o: Test_Function.cpp declaration.h headers.h
	g++ -c Test_Function.cpp
Opr_Function.o: Opr_Function.cpp declaration.h headers.h
	g++ -c Opr_Function.cpp

clean:
	rm *.o
	rm Distance

