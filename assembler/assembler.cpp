/*
#include <iostream>
#include <fstream>
#include <sstream>
#include "utilities.hpp"
#include "../string/string.hpp"
#include <sstream>

int main(int argc, char* argv[])
{
  if (argc < 2) {
        std::cerr << "File name not mentioned!" << std::endl; exit(0);
    }

  std::ifstream in(argv[1]);
  if(!in){
    std::cout << "Couldn't open\n"; 
    return 0;
  }
//  in.close();

  std::ofstream outfile(argv[2]);
 
   
  char ch;
  String pstfx;

    std::ifstream infile("data3-1.txt");
  //  infile.open("data3-1.txt");
    if(!infile.is_open()){
        std::cout << "Unable to open file\n";
        return 1;
    }
    
   
      getline(infile, expression);
    
      while (!infile.eof()){

          if(outfile.is_open()){
            pstfx = postfix(expression);
            outfile << "Infix Expression: " << expression << " " << "Postfix Expression: " << pstfx << std::endl;
            outfile << "Postfix Assembly : " << assembly(pstfx) << std::endl;
          } else{
            pstfx = postfix(expression);
	          std::cout << "Infix Expression: " << expression << " " << "Postfix Expression: " << pstfx << std::endl;
	          std::cout << "Postfix Assembly : " << std::endl;
	          std::cout << assembly(pstfx) << std::endl;
        }
            expression = " ";
            getline(infile, expression);

        }

      infile.close();
   //   outfile.close();
     
  return 0;
}
 */

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
    
    std::ofstream assblFile(argv[2]);

    char token;
    String infix;

    while(!infixFile.eof()){
       
      infixFile.get(token);

      if ((token != ';') && (token != '\n') && (token != '\r')){
        infix = infix + token; 
      }
      if (token == ';'){

        infix = infix + token;

        if (assblFile){
      //    String pst = postfix(infix);
       //   String assembler = assembly(pst);
	     //   assblFile << "Assembly: " << assembler << std::endl;
       //   assblFile << "Infix Expression: " << expression << " " << "Postfix Expression: " << pstfx << std::endl;
          String pstfx = postfix(infix);
          assblFile << "Infix Expression: " << infix << std::endl;
          assblFile << "Postfix Expression: " << pstfx << std::endl;
	        assblFile << "Assembly: " << std::endl;
          assblFile << assembly(infix) << std::endl;
        } else {
      
          String pstfx = postfix(infix);
          std::cout << "Infix Expression: " << infix << std::endl;
          std::cout << "Postfix Expression: " << pstfx << std::endl;
	        std::cout << "Assembly: " << std::endl;
          std::cout << assembly(infix) << std::endl;
        }
        infix = " ";
      }
    }
    infixFile.close();

    return 0;
}