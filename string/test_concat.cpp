 
#include "string.hpp"
#include <cassert>

int main() {
	 
	{
		// Setup
		String str1, str2('a'), result;

		// Test
		result = str1 + str2;

		// Verify
		assert(str1 == "\0");
		assert(str2 == "a");
		assert(result == "a");
	}

	{
		// Setup
		String str1 = 'a', str2 = 'b', result;

		// Test
		result = str1 + str2;

		// Verify
		assert(str1 == "a");
		assert(str2 == "b");
		assert(result == "ab");

		std::cout << str1 << " + " << str2 << " = " << result << std::endl;

	}
	{
		// Setup
		String str1("Hello "), str2("World"), result;

		// Test
		result = str1 + str2;

		// Verify
		assert(str1 == "Hello ");
		assert(str2 == "World");
		assert(result == "Hello World");

		std::cout << result << std::endl;
	}
	{
		// Setup
		String str("CS 23001"), result;

		// Test
		result = str + '!';

		// Verify
		assert(str == "CS 23001");
		assert(result == "CS 23001!");

		std::cout << result << std::endl;
	}
	{
		// Setup
		String str1("CS 23001: "), str2("Data Structure");

		// Test
		str1 += str2;

		// Verify
		assert(str1 == "CS 23001: Data Structure");

		std::cout << str1 << " .Test for +=" << std::endl;
	}

	std::cout << "Done testing concatenation\n" << std::endl;
	return 0;
}


