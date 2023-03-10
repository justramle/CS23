// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == 3); 
    }

    //Add test cases as needed.

   {
        //Add more test case
        //Set up
        bigint bi(10);
        //Test
        bi = bi.times10(2);
        //Verify
        assert(bi == 1000);
	std::cout << "===========MILESTONE 3 Times 10^n==============" << std::endl;
        std::cout << "10 times 10^2: " << bi << std::endl;
    } 
    
    {
        //Set up
        bigint bi(9999);
        //Test
        bi = bi.times10(5);
        //Verify
        assert(bi == 999900000);
        std::cout << "9999 times 10^10: " << bi << std::endl;
    }

    {
        //Set up
        bigint bi(234);
        //Test
        bi = bi.times10(4);
        //Verify
        assert(bi == 2340000);
        std::cout << "234 times 10^4: " << bi << std::endl;
    }

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

