#ifndef SPANSTACK_H_EXISTS
#define SPANSTACK_H_EXISTS

#include <iostream>
#include <vector>
#include <stack>
#include <array>

class SpanStack {

	private:
		int n;
		int* ptr;
		std::stack<std::array<int, 2>> tempStack;
		std::stack<std::array<int, 2>> allStack;
		std::vector<int> spans;
	public:
		SpanStack();
		SpanStack(int size, int* numsPtr);
		void start();

};

#endif