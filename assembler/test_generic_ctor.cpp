//  Stack class test program
//
//  Tests: XXX
//

#include "stack.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        Stack<int> x;
        x.push(10);
        x.push(20);
        x.push(30);
        
        // VERIFY
        assert(x == 10);
        assert(x == 20);
        assert(x == 30);
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing XXX." << std::endl;
    return 0;
}

