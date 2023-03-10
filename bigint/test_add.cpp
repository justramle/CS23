// bigint Test Program
//
// Tests:  int constructor, uses ==
// 
// NEED TO IMPLEMENT
//

 
#include <iostream> 
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main() {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left == 0);
        assert(right == 0);
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 1);
        assert(right == 0);
        assert(result == 1);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(1);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 1);
        assert(right == 1);
        assert(result == 2);
    }

    // assert(1 == 2); //WRONG. This will fail, of course.
                     //You need to add more test cases here. Remove this assert.

     //------------------------------------------------
     //Add test cases as needed.
     //Tram Test Case 1: 
    {
        //Set up fixture
        bigint left(12345);
        bigint right(67);
        bigint result;

        //Test
        result = left + right;

        //Verify
        assert(left == 12345);
        assert(right == 67);
        assert(result == 12412);
	
	std::cout << "===========MILESTONE 2 ADDITION=============" << std::endl;
	std::cout << left << " + " << right << " = " << result << std::endl;

    }
    //-----------------------------------------------------------
        //Tram Test Case 2:   
    {
        //Set up fixture
        bigint left(1111111111);
        bigint right(298954296);
        bigint result;

        //Test
        result = left + right;

        //Verify
        assert(left == 1111111111);
        assert(right == 298954296);
        assert(result == 1410065407);
	
	std::cout << "===========MILESTONE 2=============" << std::endl;
	std::cout << left << " + " << right << " = " << result << std::endl;
    }
    
   
    //-------------------------------------------------------------
            //Tram Test Case 3:
    {
        //Set up fixture
        bigint left("1");
        bigint right("0");
        bigint result;

        //Test
        result = left + right;

        //Verify
        assert(left == "1");
        assert(right == "0");
        assert(result == "1");

	std::cout << "===========MILESTONE 2=============" << std::endl;
        std::cout << left << " + " << right << " = " << result << std::endl;

    }

    //-------------------------------------------------------------
            //Tram Test Case 4:
    {
        //Set up fixture
        bigint left("6666666666666666666677777777777777777777");
        bigint right("222");
        bigint result;

        //Test
        result = left + right;

        //Verify
        assert(left == "6666666666666666666677777777777777777777");
        assert(right == "222");
        assert(result == "6666666666666666666677777777777777777999");

	std::cout << "===========MILESTONE 2=============" << std::endl;
        std::cout << left << " + " << right << " = " << result << std::endl;

    }
    //-------------------------------------------------------------
            //Tram Test Case 5:
    {
        //Set up fixture
        bigint left("911000000000000000000000000000000");
        bigint right(911);
        bigint result;

        //Test
        result = left + right;

        //Verify
        assert(left == "911000000000000000000000000000000");
        assert(right == 911);
        assert(result == "911000000000000000000000000000911");

	std::cout << "===========MILESTONE 2=============" << std::endl;
        std::cout << left << " + " << right << " = " << result << std::endl;

    }
    


    std::cout << "Done with testing addition." << std::endl;
    return 0;
    //Set up fixture

}


