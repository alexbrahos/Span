#include <iostream>
#include "SpanForce.h"
#include "SpanStack.h"

int main() {

	int seed;
	int n;

	//Get the seed from the user
	std::cout << "Enter a seed for the random data points: ";
	std::cin >> seed;
	std::cin.ignore();
	srand(seed);

	//Get the dataset size from the user
	std::cout << "Choose the number of data points to use: ";
	std::cin >> n;
	std::cin.ignore();

	std::cout << seed << "\n" << n << "\n"; //delete later

	//Create array for all values on the heap
	int* nums = new int[n];

	std::cout << "\nHere are the values used to calculate the span:\n";

	//Generate the dataset
	for (int i = 0;i < n;i++) {
		nums[i] = rand() % 100;
		std::cout << nums[i];

		if (i != n - 1) {
			std::cout << ", ";
		}//end if
	}//end for

	//Create a pointer so the classes can access nums
	int* ptr = nums;

	std::cout << "\n\nHere are the spans calculated with brute force:\n";
	
	SpanForce f = SpanForce(n, ptr);

	std::cout << "\n\nHere are the spans calculated with a stack:\n";

	SpanStack s = SpanStack(n, ptr);

	//Free up the space on the heap
	delete[] nums;

} //end main