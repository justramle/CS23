
#include "string.hpp"
#include <cassert>

int main() { 
	
	{
		// Setup
		String str1 = "Hello",
			ch;
		ch = str1.findch(1,'l');
		// Test & Verify
		assert(str1 == "Hello");
		assert(ch == 2);
		
	}
	
	std::cout << "Done testing find char\n" << std::endl;
	return 0;
}
 
