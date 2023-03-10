
#include "string.hpp"
#include <cassert>

int main() {

    {

        //------------------------------------------------------
        // SETUP FIXTURE
	
        // TEST
        String str;

        // VERIFY
        assert(str[0] == '\0');
        assert(str == "");
       
    }


    std::cout << "Done testing default constructor.\n" << std::endl;
    return 0;
}


