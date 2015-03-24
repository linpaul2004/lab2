lab2: bmi.o lab2.o
	g++ -o lab2 lab2.o bmi.o

bmi.o: bmi.cpp bmi.h
	g++ -c bmi.cpp

lab2.o: lab2.cpp bmi.h
	g++ -c lab2.cpp

clean:
	rm *.o
