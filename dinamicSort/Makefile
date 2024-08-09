all : main.o sort.o sorts.o
	g++ main.o sort.o -o all
main.o : main.cpp
	g++ -c main.cpp
sorts.o : sort.cpp
	g++ -c sort.cpp -o sort.o
clean :
	rm -rf sort.o main.o