#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
int main() {
    {
        stack<int> test;
        test.push(0);
        test.pop();
        
        assert(test.empty() == true);
       
    }
     
    {
        stack<char> test;
        test.push(' ');
        test.pop();
        
        assert(test.empty() == true);
    }  

    {
        stack<String> test;
        test.push(" ");
        test.pop();
        
        assert(test.empty() == true);
    } 
    std::cout << "Done testing empty" << std::endl; 

}   