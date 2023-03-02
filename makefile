runMe: SpanStack.o SpanForce.o main.o
	g++ SpanStack.o SpanForce.o main.o -o runMe
StackSpan.o: SpanStack.cpp SpanStack.h
	g++ -c SpanStack.cpp
StackForce.o: SpanForce.cpp SpanForce.h
	g++ -c SpanForce.cpp
main.o: main.cpp SpanStack.h SpanForce.h
	g++ -c main.cpp
run: runMe
	./runMe
