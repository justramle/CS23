 
#include "string.hpp"
#include <cassert>

int main() {
    {
        //SET UP
        String str = "Milo";
        // Verify
        assert(str.findstr(2, "lo") == 2);

    }
    {
        //SET UP
        String str = "Lucky";
        // Verify
        assert(str.findstr(2, "ky") == 3);
    }

	std::cout << "Done testing find string char\n" << std::endl;
	return 0;
}


