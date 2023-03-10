#ifndef STACK_UTILITIES
#define STACK_UTILITIES
#include <iostream>
#include <fstream>
#include <vector>
#include "../string/string.hpp"
#include "stack.hpp"

String postfix(String);
String prefix(String);
//void getline(std::ifstream&, String&);
String eval(String&, String& , String&, int);
String assembly(String);

#endif
