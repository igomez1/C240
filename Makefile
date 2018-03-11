all: Call.o CallCenter.o program.o queue.o
	g++ Call.o CallCenter.o program.o queue.o

Call.o: Call.cpp
	g++ Call.cpp

CallCenter.o: CallCenter.cpp
	g++ CallCenter.cpp

program.o: program.cpp
	g++ program.cpp

queue.o: queue.cpp
	g++ queue.cpp

