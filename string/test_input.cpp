
#include "string.hpp"
#include <cassert>
#include <iostream> 
#include <fstream>
#include <cstdlib>

int main() { 

		std::ifstream in("input.txt");

		if (!in) {
			std::cerr << "Couldn't open input.txt!" << std::endl;
			std::exit(1);
		}
			char input;
			in.get(input);
			while( !in.eof()){ 
				if( input == ' '){
					std::cout << " ";
				}else
				
				std::cout << input;
				in.get(input);
				
			}
			
		//	assert(input == "Hello World");

		in.close();

		std::cout << "Done testing input\n" << std::endl;
		return 0;
}

