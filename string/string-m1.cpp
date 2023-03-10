
//File: string.cpp
//Tram Le
// Mile Stone 1
//
#include <iostream>
#include "string.hpp"

// Default constructor
String::String()
{
    // Empty string
    str[0] = '\0';
}

// Constructor for String('x')
String::String(char x)
{
    // String('x')
    str[0] = x;
    str[1] = '\0';
}

// Constructor for String("abcd")
String::String(const char s[])
{
    
    int i = 0;
    while (s[i] != '\0') {
        str[i] = s[i];
        ++i;
    }
    str[i] = '\0';

}

// Retuens max chars 
int String::capacity() const
{
    return STRING_SIZE - 1;
}

// Returns number of char in string
int String::length() const
{

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

//Concatenate
String& String::operator+=(const String& rhs) {
    int offset = length();
    int len = rhs.length();
    int i;
    for (i = 0; i < len; ++i) {
        str[offset + i] = rhs[i];
    }
    str[offset + i] = 0;
    return *this;
}


bool String::operator==(const String& rhs)const {
    int i = 0;
    while ((str[i] != '\0') && (str[i] == rhs.str[i])) {
        ++i;
    }
    return str[i] == rhs.str[i];
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
    if (start < 0)
        start = 0;
    if (end < start)
        return " ";
    if (start >= length())
        return " ";
    if (start > end)
        return " ";
    if (end >= length())
        end = length() - 1;

    for (int i = start; i <= end; ++i) {
        result += str[i];
    }
    return result;
}

//return Location of charater starting at a position
int String::findch(int start, char ch) const {
    for (int i = start; i < length(); ++i) {
        if (str[i] == ch) {
            return i;
        }
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

    char ch;

    while (in.get(ch)) {
        if (!in.eof()) {
            rhs += ch;
        }
    }
    return in;
}

//output operator
std::ostream& operator<<(std::ostream& out, const String& s) {

    for (int i = 0; i < s.length(); ++i) {
        out << s.str[i];
    }
    return out;
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
