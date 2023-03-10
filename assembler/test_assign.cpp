#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"

int main(){
    {
        stack<int> one;
        one.push(1);

        stack<int> two;

        two = one;

        assert(one.top() == 1);
        assert(two.top() == 1);
    }

    {
        stack<char> one;
        one.push('y');
        
        stack<char> two;
        
        two = one;
        
        assert(one.top() == 'y');
        assert(two.top() == 'y');

    }

    {
        stack<String> one;
        one.push("abcd");
        
        stack<String> two;
        
        two = one;
        
        assert(one.top() == "abcd");
        assert(two.top() == "abcd");
        assert(two.top() == one.top());
    }

    {
        stack<String> test;
        test.push("hihi 123");
       
        stack<String> test_2;
        
        test_2 = test;
        
        assert(test.top() == "hihi 123");
        assert(test_2.top() == "hihi 123");

    }

    std::cout << "Done testing assign" << std::endl; 

}