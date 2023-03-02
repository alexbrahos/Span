#ifndef SPANFORCE_H_EXISTS
#define SPNFORCE_H_EXISTS

#include <iostream>
#include <vector>

class SpanForce {

	private:
		int n;
		int* ptr;
		std::vector<int> spans;
	public:
		SpanForce();
		SpanForce(int size, int* numsPtr);
		void start();

}; //end class definition

#endif