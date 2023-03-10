#include <cassert>
#include <iostream>
#include <vector>
#include "string.hpp"

int main(){
    {
        //Set up
        String s("Tram Le");
        //test
        std::vector<String> test = s.split(' ');
        //Verify
        assert(test[0] == "Tram");
        assert(test[1] == "Le");
    }
    {
        String s("abc haha efg");
        //test
        std::vector<String> test = s.split(' ');
        //Verify
        assert(test[0] == "abc");
        assert(test[1] == "haha");
        assert(test[2] == "efg");
    }
    /* 
    {
        String s("--Abc-Defg--");
        //test
        std::vector<String> test = s.split('-');
        //Verify
       // std::cout << test[1] << "hhl";
        assert(test[0] == "");
        assert(test[1] == "Abc");
        assert(test[2] == "");
        assert(test[3] == "Defg");
        assert(test[4] == "");
    }
*/
    std::cout << "Done testing vector split" << std::endl;
    return 0;
}
