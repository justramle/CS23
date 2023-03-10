
#include "string.hpp"
#include <cassert>
#include <iostream>
int main() {

	{
		// Setup
		String str1("helloworld wowwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
		String str2("helloworld wowwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
		// Test
		// Verify
		assert(str1 == "helloworld wowwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
		assert(str2 == "helloworld wowwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
		assert(str1 == str2);
		std::cout << str1 << " = " << str2 << std::endl;

	}
	{
		// Setup
		String str1("My name is Tram.");
		String str2("My name is Tram.");
		// Test

		// Verify
		assert(str1 == "My name is Tram.");
		assert(str1 == "My name is Tram.");
		assert(str1 == str2);

		std::cout << str1 << " = " << str2 << std::endl;
	}
	
	std::cout << "Done testing equality.\n" << std::endl;
	return 0;
}

