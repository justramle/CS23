#include <fstream>
#include <iostream>
#include "utilities.hpp"
#include "stack.hpp"
#include <cstdlib>
#include "../string/string.hpp"

// Converts infix to postfix
int main(int argc, char* argv[]){

    if (argc < 2) {
        std::cerr << "File name not mentioned!" << std::endl; exit(0);
    }

    std::ifstream infixFile(argv[1]);
    if (!infixFile) {
        std::cout << "Infix file could not be opened!" << std::endl;
    }
    
    std::ofstream postfixFile(argv[2]);

    char token;
    String infix;

    while(!infixFile.eof()){
       
      infixFile.get(token);

      if ((token != ';') && (token != '\n') && (token != '\r')){
        infix = infix + token; 
      }
      if (token == ';'){

        infix = infix + token;

        if (postfixFile){
          postfixFile << "Infix Expression: " << infix << std::endl;
          String topostfix = postfix(infix);
	        postfixFile << "Postfix Expression: " << topostfix << std::endl;
        } else {
          std::cout << "Infix Expression: " << infix << std::endl;
          String topostfix = postfix(infix);
	        std::cout << "Postfix Expression: " << topostfix << std::endl;
        }
        infix = " ";
      }
    }
    infixFile.close();

    return 0;
}