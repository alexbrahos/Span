#include <iostream>
#include <cstdlib>
#include <vector>
#include "SpanForce.h"

SpanForce::SpanForce() {

} //end null parameter constructor


SpanForce::SpanForce(int size, int* numsPtr) {

	SpanForce::n = size;
	SpanForce::ptr = numsPtr;
	SpanForce::spans.resize(n);
	start();

} //end constructor


void SpanForce::start() {

	spans[0] = 1;

	int j;

	for (int i=1;i<n;i++) {

		j = 1;
		
		//If the current number is greater than the previous elements, keep adding 1 to the span until it hits the first number it is smaller than
		while (*(ptr + i) >= *(ptr + i - j) && i - j >= 0) {

			j++;


		}//end while

		//Set the span
		spans[i] = j;

	}//end for

	//Print the spans
	for (int i = 0;i < n;i++) {

		std::cout << spans[i];
		if (i != n - 1) {

			std::cout << ", ";

		}//end if

	}//end for

} //end start()