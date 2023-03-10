
#include <iostream>
#include "string.hpp"
#include <vector>

// Default constructor
String::String()
{
    stringSize = 1;
    str = new char[stringSize -1];
    str[0] = 0;
}

// Constructor for String('x')
String::String(char x)
{   if(x != '\0'){   
    stringSize = 2;
    str = new char[stringSize -1];
    str[0] = x;
    str[1] = '\0';
    }else{
    stringSize = 1;
    str = new char[stringSize -1];
    str [0]= '\0';
    }
}

// Constructor for String("abcd")
String::String(const char s[])
{

    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }

    stringSize = i + 1;
    str = new char[stringSize];

    for (int j = 0; j < i; ++j) {
        str[j] = s[j];
    } 
    str[i] = 0;

}

//Copy Constructor
String::String(const String& rhs) {
    stringSize = rhs.stringSize;
    str = new char[stringSize];
    for (int i = 0; i < capacity(); ++i) {
        str[i] = rhs.str[i];
    }
    str[capacity()] = '\0';
}

//destructor
String::~String() {
    delete[] str;
}

//Constant time swap
void String::swap(String& rhs) {
    char* temporary = str;
    str = rhs.str;
    rhs.str = temporary;

    int temp_size = stringSize;
    stringSize = rhs.stringSize;
    rhs.stringSize = temp_size;
}

//Assignment Copy
String& String::operator=(String rhs) {

    swap(rhs);

    return *this;
}

// Retuens max chars 
int String::capacity() const
{
    return stringSize - 1;
}

// Returns number of char in string
int String::length() const{

    int result = 0;
    while (str[result] != '\0') {
        ++result;
    }
    return result;

}

// Returns char at given index 
//Accessor/Modifier
char& String::operator[](int i)
{
    return str[i];
}

// Returns char at given index Accessor
char String::operator[](int i) const
{
    return str[i];
}

//Concatenate dynamic aspect
String& String::operator+=(const String& rhs) {

    
    int offset = length();
    int len = rhs.length();
    char* ch = new char[offset + len + 1];
    int i;
    int j;
    for (j = 0; j < offset; ++j) {
        ch[j] = str[j];
    }
    for (i = 0; i < len; ++i) {
        ch[offset + i] = rhs[i];
    }
    
    delete []str;
    ch[offset + i] = 0;
    str = ch;
    stringSize = offset + len + 1;

    
    return *this;
}

 
bool String::operator==(const String& rhs)const {
   if (length() != rhs.length())return false;

   for (int i = 0; i < length(); ++i){
   if (str[i] != rhs.str[i]) return false;
   }
   return true;
}


// Checks for inequality
bool String::operator<(const String& rhs) const {

    int i = 0;

    while ((str[i] != 0) && (rhs.str[i] != 0) && (str[i] == rhs.str[i])) {
        ++i;
    }
    return str[i] < rhs.str[i];

}

// Returns Sub from staring to ending positions
String String::substr(int start, int end) const {
    String result;
    if (start == end)
       return String(str[start]);
    if (start < 0)
        start = 0;
    if (start > capacity())
        return String();
    if (start > end)
        return String();
    if (end >= length())
        end = length() - 1;
   delete[] result.str;
   result.stringSize = (end - start + 1) +1;
   result.str = new char[result.stringSize];
   int i;
    for (i = start; i <= end; ++i) {
        result.str[i - start] =  str[i];
    }
    result.str[i - start] = '\0';
    return result;
}

//return Location of charater starting at a position
int String::findch(int start, char ch) const {
    if ((start < 0) || (start >= length())) return -1;
    int i = start;
    while (str[i] != 0) {
        if (str[i] == ch) return i;
        ++i;
    }
    return -1;
}

//Location of string starting
int String::findstr(int start, const String& s) const {

    if (length() >= s.length()) {
        for (int i = start, j = 0; i < length(); ++i, j = 0) {
            while (str[i + j] == s.str[j] && j <= s.length()) {
                ++j;

                if (j == s.length()) {
                    return i;
                }
            }
        }
    }

    return -1;

}

//Input operator
std::istream& operator>>(std::istream& in, String& rhs) {
    char ch[256];
    in >> ch;
    rhs = String(ch);
    return in;
}


//output operator
std::ostream& operator<<(std::ostream& out, const String& s) {

    for (int i = 0; i < s.length(); ++i) {
        out << s.str[i];
    }
    return out;
}

std::vector<String> String::split(char ch) const{
    std::vector<String> result;
    int start = 0;
    int end = findch(start,ch);
    while( end != -1){
        result.push_back(substr(start,end-1));
    
    
       // result.push_back(substr(start,length()-1));
        start = end + 1;
        end = findch(start,ch);
    }
    result.push_back(substr(start,length()-1));
    return result;   
} 


// For two Strings
String operator+(String lhs, const String& rhs)
{
    return lhs += rhs;
}

// For char array and String
bool operator==(const char lhs[], const String& rhs)
{
    return String(lhs) == rhs;
}

// For char and String
bool operator==(char lhs, const String& rhs)
{
    return String(lhs) == rhs;
}

// For char array and String
bool operator<(const char lhs[], const String& rhs)
{
    return String(lhs) < rhs;
}

// Less than operator for char and String
bool operator<(char lhs, const String& rhs)
{
    return String(lhs) < rhs;
}

// Less than or equal to operator for 2 Strings
bool operator<=(const String& lhs, const String& rhs)
{
    return ((lhs < rhs) || (lhs == rhs));
}

// Not equal to operator for 2 Strings
bool operator!=(const String& lhs, const String& rhs)
{
    return !(lhs == rhs);
}

// Greater than or equal to operator for 2 Strings
bool operator>=(const String& lhs, const String& rhs)
{
    return !(lhs < rhs);
}

// Less than operator for 2 Strings
bool operator>(const String& lhs, const String& rhs)
{
    return !((lhs < rhs) || (lhs == rhs));
}

