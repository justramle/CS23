#include "string.hpp"
#include <cassert>

int main() {
	{
		//Set up
		String s1("School is cool!");
		String s2(s1);
		//Test
		//Verify
		assert(s2 == "School is cool!");

		std::cout << s1 << " After copy: " << s2 << std::endl;
	}

	std::cout << "Done testing copy constuctor!" << std::endl;

}
