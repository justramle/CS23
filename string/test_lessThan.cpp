
#include "string.hpp"
#include <cassert>

int main() { 

	{
		// Setup
		String str1, str2;
		// Test
		str1 = "ab";
		str2 = "xyz";
		// Verify
		assert(str1 == "ab");
		assert(str2 == "xyz");
		assert(str1 < str2);
		assert(str2 > str1);

		std::cout << str1 << " < " << str2 << std::endl;
		std::cout << str2 << " > " << str1 << std::endl;

	}
	{
		// Setup
		String str1, str2;
		// Test
		str1 = "Tram";
		str2 = "Tram Le";
		// Verify
		assert(str1 == "Tram");
		assert(str2 == "Tram Le");
		assert(str1 <= str2);
		assert(str2 >= str1);

		std::cout << str1 << " <= " << str2 << std::endl;
		std::cout << str2 << " >= " << str1 << std::endl;
	}

	std::cout << "Done testing less than\n" << std::endl;
	return 0;
}

