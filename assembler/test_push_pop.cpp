#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
int main() {
    
    {
        stack<int> test;
        test.push(1234);
        
        assert(test.empty() == false);
        assert(test.top() == 1234);
    }    
    {
        stack<int> test;
        test.push(123);
        test.pop();
        
        assert(test.empty() == true);
    }  

    {
        stack<char> test;
        test.push('f');
        test.push('a');
        test.pop();
        
        assert(test.empty() == false);
        assert(test.top() == 'f');
    }          
    {
        stack<String> test;
        test.push("CS 23001");
        test.pop();
        
        assert(test.empty() == true);
    }
        
    std::cout << "Done testing push_pop" << std::endl; 

}