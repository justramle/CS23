// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
// 

//===========================================================================
#include "bigint.hpp"
#include <cassert>

int main()
{
	
	{
		// Setup
		bigint bi(4);

		// Test
		int digit = bi[0];

		// Verify
		assert(bi == 4);
		assert(digit == 4);
	}

	//Add test cases as needed.
	//Tram Test case 1: 
	{
		//Set up
		bigint bi(10);
		
		//Test
		int digit = bi[0];

		//Verify
		assert(bi == 10);
		assert(digit == 0);
		//OR
		assert(bi[0] == 0);
		assert(bi[1] == 1);
	}

	//Tram Test case 2:
	{   
		//Set up
		bigint bi(1);

		//Test and varify
		assert(bi[0] == 1);
	}

	//Tram Test case 3:
	{
		// Setup
		bigint bi(12345);

		// Test & Verify
		assert(bi[0] == 5);
		assert(bi[1] == 4);
		assert(bi[2] == 3);
		assert(bi[3] == 2);
		assert(bi[4] == 1);
		
		std::cout << "===========MILESTONE 2 SUBSCRIPT=============" << std::endl;
		std::cout << bi << std::endl;
		
		std::cout << "Ten thousand place is: " << bi[4] << bi[3] << bi[2] << bi[1] << bi[0] << std::endl;
		std::cout << "Thousand place is: " << bi[3] << bi[2] << bi[1] << bi[0] << std::endl;
		std::cout << "Hundred place is: " << bi[2] << bi[1] << bi[0] << std::endl;
		std::cout << "Ten place is: " << bi[1] << bi[0] << std::endl;
		std::cout << "One place is: " << bi[0] << std::endl;

	}

	//Tram Test case 4:
	{
		//Setup
		bigint bi(987654222);

		//Test & Verify
		assert(bi[0] == 2);
		assert(bi[1] == 2);
		assert(bi[2] == 2);
		assert(bi[3] == 4);
		assert(bi[4] == 5);
		assert(bi[5] == 6);

		
		/* 
		assert(bi[6] == 7);
		assert(bi[7] == 8);
		assert(bi[8] == 9);
		*/
		
	}

	std::cout << "Done testing subscript." << std::endl;
}

