
#include "string.hpp"
#include <cassert>

int main() {
	{
		// Setup
		String str('a');

		// Verify
		assert(str[0] == 'a');
	}
	{
		// Setup
		String str;
		// Test
		str = "abcdefg";
		// Verify
		assert(str == "abcdefg");
		assert(str[0] == 'a');
		assert(str[1] == 'b');
		assert(str[2] == 'c');
		assert(str[3] == 'd');
		assert(str[4] == 'e');
		assert(str[5] == 'f');
		assert(str[6] == 'g');

		std::cout << "String is " << str << std::endl;
		std::cout << "Last position of string is " << str[6] << std::endl;
	}
	std::cout << "Done testing subcript\n" << std::endl;
	return 0;
}


