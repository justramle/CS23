#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
int main() {

    {
        stack<int> one;
        one.push(123);

        stack<int> two;
        two.push(456);
        
        one.swap(two);

        assert(one.top() == 456);
        assert(two.top() == 123);
    } 
    {
        stack<char> one;
        one.push('C');

        stack<char> two;
        two.push('S');
        
        one.swap(two);

        assert(one.top() == 'S');
        assert(two.top() == 'C');
    } 

    {
        stack<String> one;
        one.push("Hello");

        stack<String> two;
        two.push("World");
        
        one.swap(two);

        assert(one.top() == "World");
        assert(two.top() == "Hello");
    } 

    std::cout << "Done testing swap" << std::endl; 

}