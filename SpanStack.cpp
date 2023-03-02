#include <iostream>
#include <cstdlib>
#include <vector>
#include <stack>
#include <array>
#include "SpanStack.h"

SpanStack::SpanStack() {

} //end null parameter constructor


SpanStack::SpanStack(int size, int* numsPtr) {

	SpanStack::n = size;
	SpanStack::ptr = numsPtr;
	SpanStack::spans.resize(n);

	tempStack.push({ *ptr, 1 });
	allStack.push({*ptr, 1});

	start();

} //end constructor


void SpanStack::start() {

	spans[0] = 1;

	int j;

	for (int i = 1;i < n;i++) {

		j = 1;

		tempStack = allStack;

		//If the current item is greater than the top of the stack, pop until it isn't greater

		while (!tempStack.empty() && *(ptr + i) >= tempStack.top()[0]) {

			tempStack.pop();
			j++;

		} //end while

		allStack.push({ *(ptr + i), j });
		spans[i] = j;

	} //end for

	//Print the spans
	for (int i = 0;i < n;i++) {

		std::cout << spans[i];
		if (i != n - 1) {

			std::cout << ", ";

		}//end if

	}//end for

} //end start