CC      = g++
OBJ = main.o Pod.o Host.o Node.o EdgeSwitch.o AggrSwitch.o CoreSwitch.o Connect.o
##all: generator clean

generator: $(OBJ)
	$(CC) -o generator $(OBJ)

main.o: main.cpp
	$(CC) -c main.cpp

Pod.o: Pod.cpp
	$(CC) -c Pod.cpp

Host.o: Host.cpp
	$(CC) -c Host.cpp

EdgeSwitch.o: EdgeSwitch.cpp
	$(CC) -c EdgeSwitch.cpp

AggrSwitch.o: AggrSwitch.cpp
	$(CC) -c AggrSwitch.cpp

CoreSwitch.o: CoreSwitch.cpp
	$(CC) -c CoreSwitch.cpp

Connect.o: Connect.cpp
	$(CC) -c Connect.cpp

Node.o: Node.cpp
	$(CC) -c Node.cpp

.PHONY: clean cleanest

clean:
	rm *.o

cleanest: clean
	rm octhecdec
