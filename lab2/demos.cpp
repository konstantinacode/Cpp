#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>
#include <set>

#include "utils.h"

using namespace std;

void arrays_and_pointers_demo () {
	int intArray[4] = {1, 2, 3, 4}; //declare and initialize a C array
	int test = 9;
	int *intPointer; //this is a pointer variable, it stores memory addresses pointing to integer values. 
	
	/*
	 * just a quick reminder on pointers
	 * &test is the memory address of variable test. 
	 */
	intPointer = &test;
	
	cout << "Variable test is at the memory adress " << intPointer << 
			" \nand stores an integer with value " << *intPointer << endl << endl;
	
	/*
	 * In C++ an array is just a pointer with pre-allocated memory.
	 * Therefore we can directly do the following:
	 * (because ar is already a memory address, we don't use the & operator)
	 */
	intPointer = intArray;
	
	cout << "The array has the following values: \n";
		// Fill the missing code: print array 

	cout << "\nI can access the same values using the pointer: \n";
	// Fill the missing code: print array using intPointer
		
	cout<<"\nI can also update the values using the pointer: (writing zero)\n";
	// Fill the missing code: Update array with 0 using intPointer

	cout<<"\nThe values on the array are now : \n";
	// Fill the missing code: print array 


	// Finally a 2D array
	int twoDimArray[4][3] = {{22, 23, 10},
							 {15, 25, 13},
							 {20, 74, 67},
							 {11, 18, 14} };

	// Init the array
	// Fill the missing code: Update array with i*4 + j 
	

	cout << "Press ENTER to continue to 2D arrays" << endl;
	system ("PAUSE");

	cout << "\nThe 2D array has the following values: \n";
	// Fill the missing code: print array using for-loops
	

	cout << "\nAnd now access the 2D array using a pointer: \n";
	// Fill the missing code: print array using for-loops and a pointer
		
}


void dynamic_memory_management_demo () {
	std::string input;
	int size;

	bool validInput = false;
	cout << "Type the size of array to allocate :: ";
	do {
		// Fill the missing code: read from input until the value you read is an integer
		
	} while ( !validInput );

	size = atoi(input.c_str());
	
	/*
	 * The C++ way -- new & delete
	 * 
	 * Allocates a new array of integers with the requested size using "new"
	 */
	
	// Fill the missing code: Create dyn_array with the requested size using "new" 
	
	
	// Fill the missing code: Initialize dyn_array with some values
		
	cout << " C++ Dynamic Array Values :: \n";
	// Fill the missing code: Print dyn_array

	
	// Do not forget to release memory (Dynamic Allocated memory is not released by itself :) )
	// dyn_array is an array so YOU HAVE TO USE delete []
	
	// Fill the missing code: Delete dyn_array using delete

	/*
	 * The C way -- malloc & free
	 * 
	 * Allocates a new array of integers with the requested size using "malloc"
	 */
	// From the CPP reference :: void* malloc (size_t size);
	//	-- malloc always returns void * so we cast it to our type (int *)
	//	-- the expected argument is the size of memory we want to allocate in bytes
	//	-- (int *)malloc(4) would allocate 4 bytes --> 1 int !
	//	-- instead of remembering the size of types we use sizeof(type) * times the number we want
	
	// Fill the missing code: Create dyn_array with the requested size using malloc 


	// Fill the missing code: Initialize dyn_array with some values
		
	cout << "\n C Dynamic Array Values :: \n";
	
	// Fill the missing code: Print dyn_array
	
	// Do not forget to release memory (Dynamic Allocated memory is not released by itself :) )
	
	// Fill the missing code: Release memory using  free

	// ATTENTION -- Never mix "new" with "free" and "malloc" with "delete"
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void vector_demo () {
	// Vectors are containers representing arrays. They change automatically their size as we push back items.
	vector<string> words;
	// In case we know the exact size we will use it is more efficient to reserve the slots
	//words.reserve(100);

	bool finished = false;
	string readString;
	cout << "Write some words (To stop write: END)" << endl;
	do {
		// Fill the missing code: read strings from input and put them to vector until you read the word END
	} while ( !finished );

	printStringVector(words);
}