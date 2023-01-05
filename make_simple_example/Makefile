app: main.o
	g++ -o app main.o

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

default: app

.PHONY: clean distclean

distclean: clean
	rm -f app

clean:
	rm -f main.o