
#include "string.hpp"
#include <cassert>

int main() {

	{
		// Setup
		String ch;
		// Test
		ch = 'a';
		// Verify
		assert(ch == "a");

		std::cout << "Character a is " << ch << std::endl;
	}

	std::cout << "Done testing character 'a'.\n" << std::endl;
	return 0;
}


