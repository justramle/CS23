
#include "string.hpp"
#include <cassert>

int main() { 

	{
		// Setup
		String str1 = "My name is Tram Le",
			sub1,
			sub2,
			sub3,
			sub4;

		// Test
		sub1 = str1.substr(0, 6);
		sub2 = str1.substr(7, 9);
		sub3 = str1.substr(10, 14);
		sub4 = str1.substr(15, 17);

		// Verfiy
		assert(str1 == "My name is Tram Le");
		assert(sub1 == "My name");
		assert(sub2 == " is");
		assert(sub3 == " Tram");
		assert(sub4 == " Le");

		std::cout << str1 << std::endl;
		std::cout << "Sub string is: " << std::endl;
		std::cout << sub4 << std::endl;
		std::cout << sub3 << std::endl;
		std::cout << sub2 << std::endl;
		std::cout << sub1 << std::endl;
	
	}

	std::cout << "Done testing sub string\n" << std::endl;
	return 0;
}
 
