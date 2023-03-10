#include <fstream>
#include <iostream>
#include "utilities.hpp"
#include "stack.hpp"
#include <cstdlib>
#include "../string/string.hpp"

// Converts infix to postfix
int main(int argc, char const* argv[]){


    std::ifstream infixFile(argv[1]);
    if (!infixFile) {
        std::cout << "Infix file could not be opened!" << std::endl;
    }
   infixFile.close();
    
    if(argc == 3){

        std::ofstream prefixFile(argv[2]);
        if(!prefixFile){
        std::cout << "Prefix file could not be opened!" << std::endl;
        }
        prefixFile.close();
    }

 
    std::ifstream in;            
    in.open("data3-1.txt");      
    if (!in) {                    
        std::cerr << "File not found: data3-1.txt" << std::endl;
        exit(1);
    }


    String token;
    String infix;

    while(!in.eof()){
       
      in >> token;
   //   std::cout << " " << token << " " << std::endl;
      if ((token != ";") && (token != '\n') && (token != '\r')){
        infix = infix + token + " "; 
      }
      else{
        infix = infix + ";";
	      std::cout << "Infix Expression: " << infix << std::endl;
        String topostfix = postfix(infix);
	      std::cout << "Postfix Expression: " << topostfix << std::endl;
        String toprefix = prefix(infix);
	      std::cout << "Prefix Expression: " << toprefix << std::endl;
        infix = " ";
      }
    }

    in.close();

    return 0;
}