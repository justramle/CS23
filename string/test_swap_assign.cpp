#include "string.hpp"
#include <cassert>

int main() {
	{ 
		//Set up
		String s1 = "Tram", s2 = "Le";

		//Test
		s1.swap(s2);
		//Verify
		assert(s1 == "Le");
		assert(s2 == "Tram"); 

		std::cout << s2 << s1 << "After swap: " << s1 << s2 << std::endl;
	}


	{
		//Set up
		String s1 = "Assignment!";
		//Verify
		assert(s1 == "Assignment!");

		std::cout << s1 << std::endl;
	}

	{
		//Set up
		String s1, s2;
		//Test
		s1 = "Tumbler!";
		s2 = "Tumbler!";

		//Verify
		assert(s1 == "Tumbler!");
		assert(s2 == "Tumbler!");
		assert(s1 == s2);

		std::cout << s1 << " = " << s2 << std::endl;
	}

	std::cout << "Done swap assginment testing!" << std::endl;
	
}
