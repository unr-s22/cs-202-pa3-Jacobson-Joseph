pa3: main.cpp Money.o Account.o
	g++ main.cpp Money.o Account.o
Money.o: Money.cpp Money.h
	g++ -c Money.cpp
Account.o: Account.h Account.cpp
	g++-c Account.cpp

clean:
	rm *.o *.exe