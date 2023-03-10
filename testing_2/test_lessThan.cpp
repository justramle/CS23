#include <iostream>
#include "string.hpp"
#include <cassert>
int main (){

	{
		// Setup
		String str1, str2;
		// Test
		str1 = "Le";
		str2 = "Tram";
		// Verify
		assert(str1 < str2);

	}

	{
		String str[2];
		str[0] = "aa";
		str[1] = "ab";

		assert(str[0] < str[1]);

	}

	{
                // Setup
                String str1, str2;
                // Test
                str1 = "1234";
                str2 = "234";
                // Verify
                assert(str1 < str2);

        }

	{
                // Setup
                String str1, str2;
                // Test
                str1 = "aaa";
                str2 = "aaaaaaaaaaaaaa";
                // Verify
                assert(str1 < str2);

        }

std::cout << "Done less than testing" << std::endl;
return 0;
}
