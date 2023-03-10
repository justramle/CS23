 
#include "string.hpp"
#include <cassert>

int main() {

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// SET UP
		String str;

		// VERIFY
		assert(str.length() == 0);
	}
	{
		// Setup
		String str('a');

		// Verify
		assert(str.length() == 1);
	}
	{
		// Setup
		String str("Hello World");

		// Verify
		assert(str.length() == 11);

		std::cout << str << " length is " << str.length() << std::endl;
	}


	std::cout << "Done testing length capacity\n" << std::endl;
	return 0;
}

