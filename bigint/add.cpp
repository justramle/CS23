//Tram Le
//CS23001
//Main body to read from data1-1 text file

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in;            // Define input stream
    in.open("data1-1.txt");      // Open a file
    if (!in) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-1.txt" << std::endl;
        exit(1);
    }

    //Until end of file
       //Read two bigints 
       //Example in test_add
    bigint left, right;
    while (in >> left && in >> right) {
        //Print them out
        std::cout << "Left digits:" << left << std::endl;
        std::cout << "Right digits:" << right << std::endl;
        //Add them together
        bigint result = left + right;
        //Print out results
        std::cout << "RESULT:" << result << "\n\n\n";
   
    }
       
     //Close file  
    in.close();
    return 0;
} 
