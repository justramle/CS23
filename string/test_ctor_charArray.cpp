
#include "string.hpp"
#include <cassert>

int main() {

	{
		// Setup
		String str;
		// Test
		str = "abcdefggggggggggggggggggggggggggggggggggggggggg";
		// Verify
		assert(str == "abcdefggggggggggggggggggggggggggggggggggggggggg");


		std::cout << "\nString is " << str << std::endl;
		
	}

	std::cout << "\nDone testing character array." << std::endl;
	return 0;
}

