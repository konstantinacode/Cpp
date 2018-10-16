#include <iostream>
#include <vector>
#include <string>  

void printStringVector(std::vector<std::string> &vector) {
		
	std::cout << std::endl;
	std::cout << "Strings contained in the vector:" << std::endl;
	std::cout << "--------------------------------" << std::endl;

#if 1	// PRE-PROCESSOR DIRECTIVE 1st Level
	// Fill the missing code: print vector using iterators

#else	// PRE-PROCESSOR DIRECTIVE 1st Level
	#if 1	// PRE-PROCESSOR DIRECTIVE 2nd Level (Nested)
		// // Fill the missing code: print vector using counter i
		
		}
	#else	// PRE-PROCESSOR DIRECTIVE 2nd Level (Nested)
		// // Fill the missing code: print vector using a string pointer

	#endif	// PRE-PROCESSOR DIRECTIVE 2nd Level (Nested)
#endif	// PRE-PROCESSOR DIRECTIVE 1st Level

	std::cout << "--------------------------------" << std::endl;
	std::cout << std::endl;
	
}

bool isDigit(std::string &word) {
	bool retVal = true;

	for(std::string::const_iterator k = word.begin(); k != word.end(); ++k)
		retVal = retVal && isdigit(*k);

	return retVal;
}