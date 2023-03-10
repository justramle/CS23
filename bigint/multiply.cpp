// Main for multiply
//
// CS 23001 Project 1 bigint
//
#include <iostream> 
#include <fstream> 
#include <cstdlib> 
#include "bigint.hpp"

int main() { 

    std::cout << "=====MILESTONE 3: Read Multiply in file=========" << std::endl;    
    std::ifstream in; // Define input stream 
    in.open("data1-2.txt"); // Open  a file 
    if (!in) { // Make sure file opened correctly
        std::cerr << "File not found: data1-2.txt" << std::endl; 
        exit(1);
    }
    
   //Until end of file
   //Read two bigints
    bigint left; 
    bigint right; 
    bigint result; 
   
    while (in >> left && in >> right) {
        //Print them out
        std::cout << "** Left digits: " << left << std::endl; 
        std::cout << "**Right digits: " << right << std::endl;
        //Multiply them together
        result = left * right;
        //Print out results
        std::cout << "**RESULT: " << result << "\n\n\n";
        
    }
       
    in.close(); 
    return 0;
}
