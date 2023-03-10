#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
int main() {
    //Test copy ctor
    
    {
        stack<int> test;
        test.push(123);

        stack<int> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }

    {
        stack<char> test;
        test.push('a');
        stack<char> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }

    {
        stack<String> test;
        test.push("hello");
        test.push("world");
        stack<String> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }

    {
        stack<String> test;
        test.push("CS");
        test.push("23001");
        test.push("000000");
        stack<String> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }
    std::cout << "Done testing ctor copy" << std::endl; 


}