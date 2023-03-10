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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);  
    }


    //Add test cases as needed.
    {
        //------------------------------------------------------ 
        //Setup fixture
        bigint bi(3333333);
        // Test 
        bi = bi.timesDigit(0);
        // Verify
        assert(bi == 0); 
	std::cout << "===========MILESTONE 3 Times Digit==============" << std::endl;
        std::cout << "3333333 times 0: " << bi << std::endl;
    }

    {
        //------------------------------------------------------ 
        //Setup fixture
        bigint bi(15);
        // Test
        bi = bi.timesDigit(2);
        // Verify
        assert(bi == 30); 
        std::cout << "15 times 2: " << bi << std::endl;
    }

    {
        //------------------------------------------------------ 
        //Setup fixture
        bigint bi(10000);
        // Test
        bi = bi.timesDigit(9);
        // Verify
        assert(bi == 90000); 
        std::cout << "10000 times 9: " << bi << std::endl;
    }
 
    {
        //------------------------------------------------------ 
        //Setup fixture
        bigint bi(25);
        // Test
        bi = bi.timesDigit(4);
        // Verify
        assert(bi == 100); 
        std::cout << "25 times 4: " << bi << std::endl;
    }

     std::cout << "Done testing bigint * digit" << std::endl; 
     return 0;
}

