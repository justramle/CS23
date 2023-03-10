#include "utilities.hpp"

// Milestone 2
// Converts infix to postfix
String postfix(String infix){
   std::vector<String> token = infix.split(' ');
   stack<String> stackTokens; 

  int i = 0;

  while ((token[i] != ";")) { 

    if(token[i] == ')') { 
        String right = stackTokens.pop(); 
        String oper = stackTokens.pop();
        String left = stackTokens.pop();

        //post: left + right + op
        stackTokens.push(left + right + oper); //push rearranging
    
    } else if(token[i] != '(') {
        stackTokens.push(token[i] + ' ');
    }

    ++i;

  }
  return stackTokens.pop();
}


//Milestone 3
String eval(String& lhs, String& op, String& rhs, int counter){
    String operation;
    String result;

    if(op == '/'){
        operation = "DV";
    }
    else if(op == '*'){
        operation = "MU";
    }
    else if(op == '-'){
        operation = "SB";
    }
    else if(op == '+'){
        operation = "AD";
    }

    result += "\tLD\t\t" + lhs + "\n";
    result += "\t" + operation + "\t\t" + rhs + "\n";
    result += "\tST\t\tTMP";
    result += char(counter+48); 
    result += "\n";

    return result;
}

String assembly(String infix){
    String pstfx = postfix(infix);
    stack<String> assembler;
    std::vector<String> vec = pstfx.split(' ');
    String result;

    int counter = 1;
    int i = 0;
    while(i < (int)vec.size()){
        if((vec[i] != '*') && (vec[i] != '/') && (vec[i] != '+') && (vec[i] != '-')){
            assembler.push(vec[i]);
        } else {
            String lhs = assembler.pop();
            String rhs = assembler.pop();
            result += eval(lhs, vec[i], rhs, counter);
            String temp;
            temp += "TMP";
            temp += char(counter+48);
            assembler.push(temp);
            ++counter;
        }
        ++ i;
    }
   return result;
}

/* 
void getline(std::ifstream& in, String& line){
    char ch;
    in.get(ch);
    while(ch != '\n' && ch != '\r' && !in.eof()){
        line += ch;
        in.get(ch);
    }
} */


// Extra Credit
// Converts infix to prefix
String prefix(String infix){

   std::vector<String> token = infix.split(' ');
   stack<String> stackTokens; 

  int i = 0;

  while ((token[i] != ";")) { 

    if(token[i] == ')') { 
        String right = stackTokens.pop(); 
        String oper = stackTokens.pop();
        String left = stackTokens.pop();

        // pre: op + left + right
        stackTokens.push(oper + left + right); //push rearranging
    
    } else if(token[i] != '(') {
        stackTokens.push(token[i] + ' ');
    }

    ++i;

  }
  return stackTokens.pop();
}


